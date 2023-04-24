#include <msp430.h> 

#define TLV_16MHz_ADDR  0x1A2E              // Address of DCO tap trim value for 16MHz
#define TLV_24MHz_ADDR  0x1A30              // Address of DCO tap trim value for 24MHz

#define TARGET_FREQ_16MHZ                   // Define the target frequency of 16MHz
//#define TARGET_FREQ_24MHZ                 // Define the target frequency of 24MHz

#ifdef TARGET_FREQ_16MHZ
#define MCLK_FREQ_MHZ 16                     // MCLK = 16MHz
#endif
#ifdef TARGET_FREQ_24MHZ
#define MCLK_FREQ_MHZ 24                     // MCLK = 24MHz
#endif

char test[] = {0xAA, 0xBB, 0xCC, 0xDD, 0xEE,0xFF, 0x11, 0x22};

char packet[20];
int Rx_Data;
unsigned int pos;
unsigned int data_len;

volatile int writeCmdFlag = 0;

#define SWRESET 0x01 // software reset
#define SLPOUT 0x11 // sleep out
#define DISPOFF 0x28 // display off
#define DISPON 0x29 // display on
#define CASET 0x2A // column address set
#define RASET 0x2B // row address set
#define RAMWR 0x2C // RAM write
#define MADCTL 0x36 // axis control
#define COLMOD 0x3A // color mode

// 1.8" TFT display constants
#define XSIZE 128
#define YSIZE 160
#define XMAX XSIZE-1
#define YMAX YSIZE-1

// Color constants
#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x0400
#define LIME 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF

char colors[] = {BLACK, BLUE, RED, GREEN, CYAN, MAGENTA, YELLOW, WHITE};

// delay vars
volatile int ms_thresh, ms_count, ms_flag;

void setClock16Mhz(){
    // Using information gathered from slaa992 and https://www.ti.com/lit/zip/slaa992

    // start clock adjustment
    P2OUT = 0x00;
    P2DIR |= BIT0;                                      // P2.0 for output of start signal

    PM5CTL0 &= ~LOCKLPM5;                               // Disable the GPIO power-on default high-impedance mode
                                                        // to activate previously configured port settings

    // Configure one FRAM wait state as required by the device datasheet for MCLK
    // operation beyond 8MHz _before_ configuring the clock system.
#ifdef TARGET_FREQ_16MHZ
    FRCTL0 = FRCTLPW | NWAITS_1;
#endif
#ifdef TARGET_FREQ_24MHZ
    FRCTL0 = FRCTLPW | NWAITS_2;
#endif

    P2OUT |= BIT0;                                     // Start of the DCO+FLL configuration and FLL lock

    __bis_SR_register(SCG0);                           // disable FLL
    CSCTL3 |= SELREF__REFOCLK;                         // Set REFO as FLL reference source
    CSCTL0 = 0;                                        // clear DCO and MOD registers
#ifdef TARGET_FREQ_16MHZ
    CSCTL1 &= ~(DCORSEL_7);                            // Clear DCO frequency select bits first
    CSCTL1 |= DCORSEL_5;                               // Set DCO frequency range. DCO Range = 16MHz
    CSCTL2 = FLLD_0 + 487;                             // f(DCOCLKDIV) = 16MHz
    CSCTL0 = __data20_read_short(TLV_16MHz_ADDR);      // load DCO TLV trim vale to DCO Tap
#endif
#ifdef TARGET_FREQ_24MHZ
    CSCTL1 &= ~(DCORSEL_7);                            // Clear DCO frequency select bits first
    CSCTL1 |= DCORSEL_7;                               // DCO Range = 16MHz
    CSCTL2 = FLLD_0 + 731;                             // f(DCOCLKDIV) = 24MHz
    CSCTL0 = __data20_read_short(TLV_24MHz_ADDR);      // load DCO TLV trim vale to DCO Tap
#endif
    __delay_cycles(3);
    __bic_SR_register(SCG0);                            // enable FLL

    CSCTL4 |= SELMS__REFOCLK;                           // set REFO(~32768Hz) as MCLK -- This delay may cause fake lock when DCOTAP=0
    __delay_cycles(10);                                 // delay 10 FLL reference clock cycles

    while(CSCTL7 & (FLLUNLOCK0 | FLLUNLOCK1));          // Check if FLL locked

    CSCTL4 = SELMS__DCOCLKDIV | SELA__REFOCLK;          // set default REFO(~32768Hz) as ACLK source, ACLK = 32768Hz
                                                        // default DCOCLKDIV as MCLK and SMCLK source

    P6DIR |= BIT0;                                      // P6.6 as LED blink
    P1DIR |= BIT0 | BIT1;                               // set ACLK, SMCLK and LED pin as output
    P1SEL1 |= BIT0 | BIT1;                              // set P1.0, P1.1 as second function for ACLK, SMCLK output

    // end clock adjustment
}

void initTimerB0compare(){
    // setup TB0
    TB0CTL |= TBCLR;            // Clear TB0
    TB0CTL |= TBSSEL__SMCLK;    // Select SMCLK
    TB0CTL |= MC__UP;           // UP mode

    TB0CCR0 = 1045;             // Set CCR0 value (Period = 1045 for 1ms)
    TB0CCTL0 &= ~CCIFG;         // Clear CCR0 flag
}

void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

        // configure eUSCI_A0
        UCA0CTLW0 |= UCSWRST;           // put eUSCI_A0 into RESET mode
        UCA0CTLW0 |= UCSSEL__SMCLK;     // select SMCLK (1MHz)
        UCA0BRW = 10;                   // divide CLK by 10

        UCA0CTLW0 |= UCSYNC;            // SPI mode
        UCA0CTLW0 |= UCMST;             // SPI MASTER
        UCA0CTLW0 |= UCMSB;

        UCA0CTLW0 |= UCMODE1;           // 4-wire SPI with STE active LOW
        UCA0CTLW0 &= ~UCMODE0;
        UCA0CTLW0 |= UCSTEM;            // STE pin used for 4-wire SPI

        // Setup Ports
    //    P4DIR &= ~BIT1;
    //    P4REN |= BIT1;                  // enable P4.1 pull up/down resistors
    //    P4OUT |= BIT1;                  // set P4.1 resistor as pull up
    //    P4IES |= BIT1;                  // H-to-L sensitivity

    //    P2DIR &= ~BIT3;                 // enable P2.3 as INPUT
    //    P2REN |= BIT3;                  // enable resistors
    //    P2OUT |= BIT3;                  // pull UP resistor
    //    P2IES |= BIT3;                  // H-to-L sensitivity

        P1SEL1 &= ~BIT5;                // P1.5 SMCLK
        P1SEL0 |= BIT5;

        P1SEL1 &= ~BIT6;                // P1.6 SOMI
        P1SEL0 |= BIT6;

        P1SEL1 &= ~BIT7;                // P1.7 SIMO
        P1SEL0 |= BIT7;

        P1SEL1 &= ~BIT4;                // STE pin setup
        P1SEL0 |= BIT4;

        P1DIR |= BIT0;                  // P1.0 as OUTPUT
        P1OUT &= ~BIT0;                  // P1.0 LOW

        P6DIR |= BIT6;                  // P6.6 as OUTPUT
        P6OUT &= ~BIT6;                 // P6.6 LOW

        P2DIR |= (BIT1 | BIT0);         // P2.0-1 as OUTPUT (2.1 TFT Reset & 2.0 : TFT D/C)
        P2OUT &= ~(BIT1 | BIT0);

        P6DIR |= (BIT0);         // P6.0 as OUTPUT (green LED)
        P6OUT &= ~(BIT0);

        PM5CTL0 &= ~LOCKLPM5;           // turn on I/O

        UCA0CTLW0 &= ~UCSWRST;          // take eUSCI_A0 out of RESET mode

        // Setup IRQs
    //    P4IE |= BIT1;                   // enable P4.1 IRQ
    //    P4IFG &= ~BIT1;                 // clear flag
    //    P2IE |= BIT3;                   // enable P2.3 IRQ
    //    P2IFG &= ~BIT3;                 // clear flag

//        UCA0IE |= UCTXIE;               // enable A0 Tx IRQ
//        UCA0IFG &= ~UCTXIFG;            // clear flag

        initTimerB0compare();

        __enable_interrupt();           // enable global IRQ
}

//void initTFT_LCD(){
//    // From the LCD Vendor (Adafruit)
//    cmds[] = {                       // 7735R init, part 1 (red or green tab)
//        15,                             // 15 commands in list:
//        ST77XX_SWRESET,   ST_CMD_DELAY, //  1: Software reset, 0 args, w/delay
//          150,                          //     150 ms delay
//        ST77XX_SLPOUT,    ST_CMD_DELAY, //  2: Out of sleep mode, 0 args, w/delay
//          255,                          //     500 ms delay
//        ST7735_FRMCTR1, 3,              //  3: Framerate ctrl - normal mode, 3 arg:
//          0x01, 0x2C, 0x2D,             //     Rate = fosc/(1x2+40) * (LINE+2C+2D)
//        ST7735_FRMCTR2, 3,              //  4: Framerate ctrl - idle mode, 3 args:
//          0x01, 0x2C, 0x2D,             //     Rate = fosc/(1x2+40) * (LINE+2C+2D)
//        ST7735_FRMCTR3, 6,              //  5: Framerate - partial mode, 6 args:
//          0x01, 0x2C, 0x2D,             //     Dot inversion mode
//          0x01, 0x2C, 0x2D,             //     Line inversion mode
//        ST7735_INVCTR,  1,              //  6: Display inversion ctrl, 1 arg:
//          0x07,                         //     No inversion
//        ST7735_PWCTR1,  3,              //  7: Power control, 3 args, no delay:
//          0xA2,
//          0x02,                         //     -4.6V
//          0x84,                         //     AUTO mode
//        ST7735_PWCTR2,  1,              //  8: Power control, 1 arg, no delay:
//          0xC5,                         //     VGH25=2.4C VGSEL=-10 VGH=3 * AVDD
//        ST7735_PWCTR3,  2,              //  9: Power control, 2 args, no delay:
//          0x0A,                         //     Opamp current small
//          0x00,                         //     Boost frequency
//        ST7735_PWCTR4,  2,              // 10: Power control, 2 args, no delay:
//          0x8A,                         //     BCLK/2,
//          0x2A,                         //     opamp current small & medium low
//        ST7735_PWCTR5,  2,              // 11: Power control, 2 args, no delay:
//          0x8A, 0xEE,
//        ST7735_VMCTR1,  1,              // 12: Power control, 1 arg, no delay:
//          0x0E,
//        ST77XX_INVOFF,  0,              // 13: Don't invert display, no args
//        ST77XX_MADCTL,  1,              // 14: Mem access ctl (directions), 1 arg:
//          0xC8,                         //     row/col addr, bottom-top refresh
//        ST77XX_COLMOD,  1,              // 15: set color mode, 1 arg, no delay:
//          0x05 };
//
//    i = 0;
//    int num_commands = cmds[i++];
//    while(num_commands--){
//        cmd = cmds[i++];
//        args = cmds[i++];
//
//    }
//
//    // need functions to set CS?, DC, etc logic levels high low
//    // functions for sending command bytes followed by argument bytes
//    // split cmds out to remove delay entry
//
//}

void setDC(){
    P2OUT |= BIT0;
}
void unsetDC() {
    P2OUT &= ~BIT0;
}

void setTFTreset(){
    P2OUT |= BIT1;
}
void unsetTFTreset(){
    P2OUT &= ~BIT1;
}

void TFTreset(){
    unsetTFTreset();
    delay_ms(1);
    setTFTreset();
    delay_ms(200);
}

void delay_ms(int ms){
    ms_flag = 0;
    ms_count = 0;
    ms_thresh = ms;
    TB0CCTL0 |= CCIE;           // Local IRQ enable for CCR0
    while(ms_flag != 1){}
    TB0CCTL0 &= ~CCIE;          // Disable CCR0
}

void writeByte(int b){

    pos = 0; // set packet index to 0
    data_len = 1; // update length
    UCA0TXBUF = b; // send first byte
    smdel();
//    while((UCA0IFG & UCTXIFG) == 1);
}

void writeCmd(int b){

//    while((UCA0IFG & UCTXIFG) == 1);

    writeCmdFlag = 1;
    pos = 0; // set packet index to 0
    data_len = 1; // update length

    unsetDC();
    UCA0TXBUF = b; // send first byte
    smdel();
    setDC();

//    setDC();
}

void SPI_send(char *bytes, int len){
    int i;
    for(i = 0;i<len; i++){
        packet[i] = *bytes;
        bytes++;
    }

    pos = 0; // set packet index to 0
    data_len = len; // update length
    UCA0TXBUF = packet[pos]; // send first byte
}

void initTFT(){
    TFTreset();
    writeCmd(SLPOUT);
    delay_ms(150);
    writeCmd(COLMOD);
    writeByte(0x05);
    writeCmd(DISPON);
}

void WriteWord (int w)
{
    writeByte(w >> 8); // write upper 8 bits
    writeByte(w & 0xFF); // write lower 8 bits
}

void Write565(int data, unsigned int count)
{
    for (;count>0;count--)
    {
        writeByte(data >> 8); // write hi byte
        writeByte(data & 0xFF); // write lo byte
    }
}

void clearDisplay(){
    SetAddrWindow(0,0,XMAX,YMAX);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    for (i=40960;i>0;--i) // byte count = 128*160*2
     {
//        writeByte(0xFF);
        UCA0TXBUF = 0x00;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty

     }
}

void DrawPixel (int x, int y, int color)
{
    SetAddrWindow(x,y,x,y); // set active region = 1 pixel
    writeCmd(RAMWR); // memory write
//    Write565(color,1); // send color for this pixel
    // 0xF81F

    int hb = color >> 8;
    int lb = color;
    writeByte(hb);
    writeByte(lb);

//    writeByte(0x0A);
//    writeByte(0x16);
}

void PixelTest(){ // draws 4000 pixels on the screen
 int i;
 for (i=4000; i>0; i--) // do a whole bunch:
 {
  int x = rand() % XMAX; // random x coordinate
  int y = rand() % YMAX; // random y coordinate
  DrawPixel(x,y,GREEN); // draw pixel at x,y
  delay_ms(50);
 }
}

void smdel(){
    int i,j;
    for(i=0;i<11;i++){
    }
}

void SetAddrWindow(int x_0, int y_0, int x_1, int y_1)
{
 writeCmd(CASET); // set column range (x0,x1)

// x_0
 writeByte(0x0);
 writeByte(x_0);

// x1
 writeByte(0x0);
 writeByte(x_1);

 writeCmd(RASET); // set row range (y0,y1)

// WriteWord(y0);
 writeByte(0x0);
 writeByte(y_0); //y0

// WriteWord(y1);
 writeByte(0x0);
 writeByte(y_1);
}

int main(void)
{
    setClock16Mhz();
    init();

    initTFT();

    clearDisplay();

//    delay_ms(100);
//    PixelTest();
//    int x = rand() % XMAX; // random x coordinate
//    int y = rand() % YMAX; // random y coordinate
//    DrawPixel(x,y,BLACK); // draw pixel at x,y

    int w = 0;
    int v = 10;
    int t = 0;
    int back_col;

    while(1){

//        SPI_send(test, sizeof(test));
//        delay_ms(5);
        P6OUT ^= BIT0;

//        if(w>1){
//            w++;
//        } else {
//            w = 0;
//            v++;
//        }
//        DrawPixel(w++,v,MAGENTA); // draw pixel at x,y

        back_col = colors[rand() % 7];

        SetAddrWindow(0,0,XMAX,YMAX);
        writeCmd(RAMWR); // memory write
        unsigned int i;
        for (i=40960;i>0;--i) // byte count = 128*160*2
         {
    //        writeByte(0xFF);
            UCA0TXBUF = back_col >> 8;
            UCA0TXBUF = back_col;

            while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty

         }

        // random fade
//        t++;
//        if(t> 200){
//            back_col = colors[rand() % 7];
//        }
//
//        int x = rand() % 128; // random x coordinate
//        int y = rand() % 170; // random y coordinate
//        DrawPixel(x,y, back_col); // draw pixel at x,y

    }

    return 0;
}
// -----------------------------------/
// ISRs ------------------------------/

//#pragma vector = PORT4_VECTOR
//__interrupt void ISR_PORT4_S1(void){
//    //pos = 0;
//    //UCA0TXBUF = packet[pos];
//    UCA0TXBUF = 0xEE;
//    P4IFG &= ~BIT1;                 // clear flag
//}

//#pragma vector = PORT2_VECTOR
//__interrupt void ISR_PORT2_S2(void){
//    UCA0TXBUF = 0x37;
//    P2IFG &= ~BIT3;                 // clear flag
//}

//#pragma vector = EUSCI_A0_VECTOR
//__interrupt void ISR_EUSCI_A0(void){
////    if(pos == data_len-1){
////            if(writeCmdFlag == 1){
////                setDC();
////                writeCmdFlag = 0;
////            }
////        }
//
//    pos++;
//    if(pos < data_len){
//        UCA0TXBUF = packet[pos];
//    } else {
//        UCA0IFG &= ~UCTXIFG;            // clear flag
//    }
//}

// TIMER (delay_ms)
#pragma vector=TIMER0_B0_VECTOR
__interrupt void ISR_TB0_CCR0(void){
    ms_count++;
    if(ms_count == ms_thresh){
        ms_flag = 1;
        ms_count = 0;
    }

    TB0CCTL0 &= ~CCIFG;
}
