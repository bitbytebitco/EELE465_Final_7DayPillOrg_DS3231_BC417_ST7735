#include <msp430.h> 

//
static const unsigned int __attribute__ ((section(".text"))) bitmap[] = {
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xee17, 0xd34c, 0xca67, 0xca47, 0xcac9, 0xdcb1, 0xff7d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xff9e, 0xf71c, 0xff9e, 0xffff, 0xffff, 0xffff, 0xf6ba, 0xcac9, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xe4d2, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xee58, 0xd3ad, 0xcac9, 0xd36c, 0xedf7, 0xffdf, 0xffff, 0xe533, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd32b, 0xff7d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xee58, 0xcac9, 0xca27, 0xca27, 0xca27, 0xca68, 0xe595, 0xffff, 0xe4d2, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xcaea, 0xf73c, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xff5d, 0xd36c, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xcaa8, 0xee79, 0xe554, 0xca27, 0xca27, 0xca47, 0xca88, 0xca27, 0xca27, 0xd32b, 0xff9d, 0xffff, 0xff9e, 0xf73c, 0xffbe, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xedf7, 0xca47, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd38d, 0xedd6, 0xca68, 0xca27, 0xcaa9, 0xd38d, 0xca27, 0xca27, 0xdc2f, 0xffdf, 0xee17, 0xd38c, 0xcac9, 0xd3ad, 0xee79, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xe575, 0xca27, 0xca27, 0xca27, 0xca47, 0xcaea, 0xca88, 0xca27, 0xca47, 0xe4d2, 0xd32b, 0xca27, 0xd32b, 0xdcb1, 0xca27, 0xca27, 0xed95, 0xedd6, 0xca88, 0xca27, 0xca27, 0xca27, 0xcac9, 0xee79, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xf6da, 0xcaa9, 0xca27, 0xca27, 0xca27, 0xcae9, 0xe4d2, 0xd38c, 0xca27, 0xd32b, 0xdc0f, 0xca27, 0xd3cd, 0xe595, 0xca27, 0xd2ea, 0xedb5, 0xcaa9, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd36c, 0xff5d,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xedd6, 0xcac9, 0xca27, 0xca27, 0xca27, 0xd32b, 0xee38, 0xe533, 0xcae9, 0xdc4f, 0xca88, 0xdc50, 0xee58, 0xca47, 0xdc2f, 0xd38c, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca47, 0xedb6,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf6da, 0xdc50, 0xcaa9, 0xca27, 0xca27, 0xd34b, 0xf6fb, 0xf6ba, 0xe574, 0xdc0f, 0xe4f2, 0xf6fb, 0xd32b, 0xdc50, 0xca47, 0xca27, 0xca68, 0xcaea, 0xca47, 0xca27, 0xca27, 0xca27, 0xe533,
                               0xffff, 0xff9e, 0xee58, 0xe595, 0xe554, 0xe595, 0xedd6, 0xe595, 0xdcb1, 0xd3cd, 0xcae9, 0xd3ad, 0xf71c, 0xffff, 0xf6ba, 0xee38, 0xff5d, 0xe4f3, 0xd32b, 0xca27, 0xd36c, 0xe4d2, 0xcaea, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xf699,
                               0xf6db, 0xd3cd, 0xca67, 0xca27, 0xca27, 0xca27, 0xca47, 0xca88, 0xd30a, 0xdbee, 0xedb5, 0xee58, 0xee17, 0xe574, 0xe554, 0xf6da, 0xffff, 0xe574, 0xcac9, 0xe513, 0xee38, 0xd34b, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xedb6, 0xffff,
                               0xdbce, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xcac9, 0xdc2f, 0xedf7, 0xff7d, 0xf73c, 0xd36c, 0xca27, 0xca27, 0xd32b, 0xf6da, 0xe595, 0xf6ba, 0xf6fb, 0xd34b, 0xca27, 0xca27, 0xca88, 0xdc0f, 0xf699, 0xffff, 0xffff,
                               0xcaa9, 0xca27, 0xca27, 0xca27, 0xca47, 0xd34b, 0xdcb1, 0xedf7, 0xee79, 0xee38, 0xee17, 0xe533, 0xca27, 0xca27, 0xca27, 0xca27, 0xe554, 0xffff, 0xf71c, 0xd3ad, 0xcac9, 0xd3cd, 0xe513, 0xf6ba, 0xffdf, 0xffff, 0xffff, 0xffff,
                               0xcae9, 0xca27, 0xca27, 0xca27, 0xca68, 0xd2ea, 0xd2ea, 0xcaa9, 0xca67, 0xcac9, 0xe595, 0xedb6, 0xca27, 0xca27, 0xca27, 0xca27, 0xe595, 0xffdf, 0xee17, 0xdcb1, 0xdcb1, 0xdc91, 0xdc70, 0xdc50, 0xdcb1, 0xedf6, 0xff9d, 0xffff,
                               0xdbee, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd32b, 0xdc91, 0xf69a, 0xff9d, 0xdc0e, 0xca67, 0xca67, 0xdbee, 0xf71b, 0xe554, 0xd32b, 0xca67, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca47, 0xdbee, 0xff5d,
                               0xee17, 0xca68, 0xca27, 0xca27, 0xca27, 0xca27, 0xca68, 0xdc0f, 0xdc50, 0xd32b, 0xf71b, 0xf699, 0xee79, 0xee79, 0xee17, 0xff7d, 0xffff, 0xff9d, 0xee79, 0xdcb1, 0xd32b, 0xca47, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xe534,
                               0xffdf, 0xe513, 0xcaa9, 0xca67, 0xcac9, 0xdc0f, 0xedd6, 0xdc50, 0xca27, 0xdc0e, 0xf73c, 0xd38c, 0xedf6, 0xffff, 0xf6da, 0xe533, 0xee38, 0xe4f2, 0xe554, 0xedb6, 0xe595, 0xdc90, 0xd30a, 0xca47, 0xca27, 0xca27, 0xca27, 0xdc50,
                               0xffff, 0xffdf, 0xf6fb, 0xee79, 0xf71b, 0xff7d, 0xdc50, 0xca27, 0xca27, 0xe595, 0xe4f2, 0xca47, 0xe4d2, 0xe575, 0xff7d, 0xd34b, 0xd38c, 0xdc2f, 0xca88, 0xca27, 0xca47, 0xca88, 0xca88, 0xca47, 0xca27, 0xca27, 0xca27, 0xe4d2,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0xdcb1, 0xca27, 0xca27, 0xcaea, 0xe574, 0xca88, 0xca67, 0xdcb1, 0xd2ea, 0xf699, 0xe4d2, 0xca27, 0xd34b, 0xe4d2, 0xd32b, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca68, 0xee17,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xee17, 0xca68, 0xca27, 0xca27, 0xd38c, 0xd34c, 0xca27, 0xca88, 0xe513, 0xca67, 0xd3ce, 0xedf7, 0xca68, 0xca27, 0xd32b, 0xedd6, 0xdc70, 0xca68, 0xca27, 0xca27, 0xca27, 0xca27, 0xd3cd, 0xff9e,
                               0xffff, 0xffff, 0xffff, 0xffbe, 0xdbee, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xca47, 0xca27, 0xcac9, 0xedb5, 0xca68, 0xca47, 0xe4d2, 0xd34b, 0xca27, 0xca27, 0xd3ad, 0xf75c, 0xee79, 0xdc50, 0xd32b, 0xcaea, 0xdbee, 0xf6db, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xff7d, 0xd32b, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd36c, 0xee79, 0xcaa8, 0xca27, 0xcac9, 0xd36c, 0xca27, 0xca27, 0xca27, 0xe533, 0xffff, 0xffdf, 0xff7d, 0xf75c, 0xffbe, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffbe, 0xd3ce, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xdcb1, 0xf75d, 0xd30a, 0xca27, 0xca27, 0xca68, 0xca27, 0xca27, 0xca27, 0xd34c, 0xff9d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xf699, 0xd30a, 0xca27, 0xca27, 0xca27, 0xca27, 0xcaa9, 0xf6ba, 0xffdf, 0xd3ce, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xd2ea, 0xf75d, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf6fb, 0xdc91, 0xcaea, 0xca88, 0xd2ea, 0xedb5, 0xffff, 0xffff, 0xe574, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xca27, 0xdc50, 0xffdf, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffdf, 0xf73c, 0xf6ba, 0xf73c, 0xffff, 0xffff, 0xffff, 0xf75c, 0xd36c, 0xca27, 0xca27, 0xca27, 0xca47, 0xdbee, 0xf73c, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff,
                               0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf6ba, 0xd3ad, 0xcac9, 0xd38c, 0xe595, 0xff9e, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff
                             };


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

// button
volatile int top_button = 0;
volatile int ind = 0;

// SPI related vars
char test[] = {0xAA, 0xBB, 0xCC, 0xDD, 0xEE,0xFF, 0x11, 0x22};
char packet[20];
int Rx_Data;
unsigned int pos;
unsigned int data_len;
volatile int writeCmdFlag = 0;

// RTC
volatile int query_rtc_flag = 0;
char rtc_packet[] = {0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A};
int mode_b;
int r = 0;
int rtc_count = 0;

// I2C
int b1_i = 0;
char bluetooth_pkt[] = {0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0xAE};

// Saved Data
// { sec, min, hours, dow , data, mont/cent , year, bay_num }
char data[31][7] = {{ 0,0,0,0,0,0,0 }};
int data_i = 0;
int data_j = 0;

int bluetooth_cmd = 0;

// screensaver mode
int screensaver = 0;
int refill_mode = 0;

// TFT constants
#define SWRESET 0x01 // software reset
#define SLPOUT 0x11 // sleep out
#define DISPOFF 0x28 // display off
#define NORON 0x13 //
#define DISPON 0x29 // display on
#define FRMCTR1 0xB1 // framerate control
#define PWCTR1 0xC0 // Power control
#define PWCTR2 0xC1
#define PWCTR3 0xC2
#define GMCTRP1 0xE0
#define GMCTRN1 0xE1

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

char colors[] = {BLUE, RED, GREEN, LIME, CYAN, MAGENTA, YELLOW, WHITE};

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

void initRTC_master(){
     UCB0CTLW0 |= UCSWRST;          // SW RESET ON

     UCB0CTLW0 |= UCSSEL_3;         // SMCLK
     UCB0BRW = 40;                  // Divide 16 Mhz SMCLK by 160 --> 100kHz I2C clock

     UCB0CTLW0 |= UCMODE_3;         // Put into I2C mode
     UCB0CTLW0 |= UCMST;            // Set as MASTER
     UCB0CTLW0 |= UCTR;             // Put into Tx mode
     UCB0I2CSA = 0x0068;            // DS3231 RTC Slave address = 0x68

     UCB0CTLW1 |= 0xC0;             // Set UCCLTO = 11 (~34ms clock low timeout)

     UCB0CTLW1 |= UCASTP_2;         // Enable automatic stop bit
     UCB0TBCNT = sizeof(packet);    // Transfer byte count

     // Setup ports
     P1SEL1 &= ~BIT3;            // P1.3 SCL
     P1SEL0 |= BIT3;

     P1SEL1 &= ~BIT2;            // P1.2 SDA
     P1SEL0 |= BIT2;

     UCB0CTLW0 &= ~UCSWRST;      // SW RESET OFF

     UCB0IE |= UCTXIE0 | UCRXIE0 | UCCLTOIE | UCBCNTIE | UCNACKIE;          // enable I2C B0 Tx, Rx, timeout IRQ

}

void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

        // configure eUSCI_A0
        UCA0CTLW0 |= UCSWRST;           // put eUSCI_A0 into RESET mode
        UCA0CTLW0 |= UCSSEL__SMCLK;     // select SMCLK (1MHz)
//        UCA0BRW = 10;                   // divide CLK by 10
        UCA0BRW = 4;

        UCA0CTLW0 |= UCSYNC;            // SPI mode
        UCA0CTLW0 |= UCMST;             // SPI MASTER
        UCA0CTLW0 |= UCMSB;

        UCA0CTLW0 |= UCMODE1;           // 4-wire SPI with STE active LOW
        UCA0CTLW0 &= ~UCMODE0;
        UCA0CTLW0 |= UCSTEM;            // STE pin used for 4-wire SPI

        // Reed Switch
        P3DIR &= ~BIT1;
        P3REN |= BIT1;  // enable P1.1 pull up/down resistors
        P3OUT &= ~BIT1;  // set P1.1 resistor as pull DOWN
        P3IES &= ~BIT1;  // set interrupt mode for rising edge

        P3IE |= (BIT1);   // Local Interrupt enable for P3.1
        P3IFG &= ~(BIT1);     // clear P3.1 IRQ Flag



        P2DIR &= ~BIT3;                 // enable P2.3 as INPUT
        P2REN |= BIT3;                  // enable resistors
        P2OUT |= BIT3;                  // pull UP resistor
        P2IES |= BIT3;                  // H-to-L sensitivity

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

        P2IE |= BIT3;                   // enable P2.3 IRQ
        P2IFG &= ~BIT3;                 // clear flag

//        UCA0IE |= UCTXIE;               // enable A0 Tx IRQ
//        UCA0IFG &= ~UCTXIFG;            // clear flag

        initTimerB0compare();

        __enable_interrupt();           // enable global IRQ
}

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

void initI2C_master(){
     UCB1CTLW0 |= UCSWRST;          // SW RESET ON

     UCB1CTLW0 |= UCSSEL_3;         // SMCLK
     UCB1BRW = 40;                  // Divide 16 Mhz SMCLK by 40 --> 400kHz I2C clock

     UCB1CTLW0 |= UCMODE_3;         // Put into I2C mode
     UCB1CTLW0 |= UCMST;            // Set as MASTER
     UCB1CTLW0 |= UCTR;             // Put into Tx mode
     UCB1CTLW0 |= UCMSB;

     UCB1CTLW1 |= 0xC0;             // Set UCCLTO = 11 (~34ms clock low timeout)

     UCB1CTLW1 |= UCASTP_2;         // Enable automatic stop bit
     UCB1TBCNT = sizeof(packet);    // Transfer byte count

     // Setup ports
     P4SEL1 &= ~BIT7;            // P4.7 SCL
     P4SEL0 |= BIT7;


     P4SEL1 &= ~BIT6;            // P4.6 SDA
     P4SEL0 |= BIT6;

     PM5CTL0 &= ~LOCKLPM5;       // Turn on I/O
     UCB1CTLW0 &= ~UCSWRST;      // SW RESET OFF

     UCB1IE |= UCTXIE0 | UCRXIE0 | UCCLTOIE | UCBCNTIE | UCNACKIE;                  // Enable I2C TX interrupt

}

void initTFT(){
    TFTreset();
    writeCmd(SLPOUT);
    delay_ms(150);
    writeCmd(COLMOD);
    writeByte(0x05);

    writeCmd(FRMCTR1);
    writeByte(0x0);
    writeByte(0x06);
    writeByte(0x03);
    delay_ms(10);

    writeCmd(PWCTR1);
    writeByte(0x02);
    writeByte(0x70);
    delay_ms(10);

    writeCmd(PWCTR2);
    writeByte(0x05);
    delay_ms(10);

    writeCmd(PWCTR3);
    writeByte(0x01);
    writeByte(0x02);
    delay_ms(10);

    writeCmd(GMCTRP1);
    int i;
    int gm[] = {0x09, 0x16, 0x09, 0x20,       //     (Not entirely necessary, but provides
                0x21, 0x1B, 0x13, 0x19,       //      accurate colors)
                0x17, 0x15, 0x1E, 0x2B,
                0x04, 0x05, 0x02, 0x0E};
    for(i=0;i<sizeof(gm);i++){
        writeByte(gm[i]);
    }
    delay_ms(10);

    writeCmd(GMCTRN1);
    int gm2[] = {0x0B, 0x14, 0x08, 0x1E,       //     (Not entirely necessary, but provides
                0x22, 0x1D, 0x18, 0x1E,       //      accurate colors)
                0x1B, 0x1A, 0x24, 0x2B,
                0x06, 0x06, 0x02, 0x0F};
    for(i=0;i<sizeof(gm2);i++){
        writeByte(gm2[i]);
    }
    delay_ms(10);

    writeCmd(NORON);
    writeCmd(DISPON);
}

void setOrientation(){
    writeCmd(MADCTL);
    writeByte(0b11000100);
}

void WriteWord (int w)
{
    writeByte(w >> 8); // write upper 8 bits
    writeByte(w & 0xFF); // write lower 8 bits
}

void Write565(int data, unsigned int count)
{
    int hb = data >> 8;
    int lb = data;

    for (;count>0;count--)
    {
        writeByte(hb);
        writeByte(lb);
    }
}

void clearDisplay(){
    SetAddrWindow(0,0,XMAX,YMAX);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    for (i=40960;i>0;--i) // byte count = 128*160*2
     {
        UCA0TXBUF = 0xFF;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty

     }
}

void drawBitmap(int x0, int y0){
    int w = 28-1;
    SetAddrWindow(x0,y0,x0+w, y0+w);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    int hb,lb;

    for (i=0; i<784; i++){
        hb = bitmap[i] >> 8;
        lb = bitmap[i];
        UCA0TXBUF = hb;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty
        UCA0TXBUF = lb;
        while((UCA0IFG & UCTXIFG) == 0); // while buffer not empty
    }
}

void HLine(int x_0, int x_1, int y, int color){
    int w = x_1-x_0+1;
    SetAddrWindow(x_0,y,x_1,y);
    writeCmd(RAMWR); // memory write
    Write565(color,w);
}

void DrawPixel (int x, int y, int color)
{
    SetAddrWindow(x,y,x,y); // set active region = 1 pixel
    writeCmd(RAMWR); // memory write
    Write565(color,1); // send color for this pixel
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

void fillRect(int x0, int y0, int x1, int y1, int color){
    int w = x1 - x0 + 1;
    int h = y1 - y0 + 1;
    SetAddrWindow(x0, y0, x1, y1);
    writeCmd(RAMWR); // memory write
    Write565(color, w*h);
}

void fillScreen(){
    int back_col;
//    back_col = colors[rand() % 4];
    back_col = 0xB277;
    SetAddrWindow(0,0,XMAX,YMAX);
    writeCmd(RAMWR); // memory write
    unsigned int i;
    for (i=40960;i>0;--i) // byte count = 128*160*2
     {
        UCA0TXBUF = back_col >> 8;
        while((UCA0IFG & UCTXIFG) == 0); // wait for buffer to empty
        UCA0TXBUF = back_col;
        while((UCA0IFG & UCTXIFG) == 0); // wait for buffer to empty
     }
}


void queryRTC(){

    UCB0I2CSA = 0x0068;            // DS3231 RTC Slave address = 0x68
    mode_b = 1;
    UCB0CTLW0 |= UCTR;
    UCB0TBCNT = 1;
    UCB0CTLW0 |= UCTXSTT;           // Generate START condition
     while((UCB0IFG & UCSTPIFG)==0); // wait for STOP
    UCB0IFG &= ~UCSTPIFG;  // clear the stop flag

    mode_b = 2;
    UCB0CTLW0 &= ~UCTR;
    UCB0TBCNT = sizeof(rtc_packet);
    UCB0CTLW0 |= UCTXSTT;           // Generate START condition
    while((UCB0IFG & UCSTPIFG)==0); // wait for STOP
    UCB0IFG &= ~UCSTPIFG;  // clear the stop flag
}

void fillDataPacket(){
    int j;
    for(j = 0;j<sizeof(rtc_packet);j++){
        data[data_i][j] = rtc_packet[j];
    }
    data_i++;
}

void fillBluetoothPacket(char pack[]){
    int i;
    for(i=0;i<sizeof(rtc_packet);i++){
        if(i != 7){
            bluetooth_pkt[i] = pack[i];
        }
    }
}

void updateBluetooth(){
    int i;
    for(i=0;i<data_i;i++){
        fillBluetoothPacket(data[i]);

        UCB1I2CSA = 0x0058;                 // Set slave address
        mode_b = 4;
        b1_i = 0;
        UCB1CTLW0 |= UCTR;
        UCB1TBCNT = sizeof(bluetooth_pkt);
        UCB1CTLW0 |= UCTXSTT;           // Generate START condition
        while((UCB1IFG & UCSTPIFG)==0); // wait for STOP
        UCB0IFG &= ~UCSTPIFG;  // clear the stop flag

        delay_ms(50);
    }
}

void display_week(int r[7]){
    clearDisplay();

    int margin = 3;
    int width = 19;
    int k;
    int x = (XSIZE/2)-(width/2);
    int y = 4;
    int col;

    for(k=0;k<7;k++){
        if(r[k] == 0){
            col = RED;
        } else {
            col = GREEN;
        }
        fillRect(x, y, x+20, y+20, col);
        y = y + width + margin;
    }

}

int main(void)
{
    // System inits
    setClock16Mhz();
    init();

    initI2C_master();                   // Intialize master for I2C transmission

    // init & query RTC
    initRTC_master();
    queryRTC();

    // init TFT
    initTFT();
    setOrientation();
    clearDisplay();

//    delay_ms(100);
//    PixelTest();
//    int x = rand() % XMAX; // random x coordinate
//    int y = rand() % YMAX; // random y coordinate
//    DrawPixel(x,y,BLACK); // draw pixel at x,y

    int v = 10;
    int t = 0;
    int back_col;


    /*
    // beginning of box
    int w = 160/8;
    HLine(w, 2*w, 50, MAGENTA);
    HLine(3*w, 4*w, 50, MAGENTA);

    HLine(w, 2*w, 50+w, MAGENTA);
    HLine(3*w, 4*w, 50+w, MAGENTA);

    fillRect(0, 0, XSIZE/2, YSIZE/2, LIME);
    */

    char c[] = {BLUE, LIME, GREEN, WHITE};
    int col;

    drawBitmap(20,60);
//    fillScreen();
//    fillRect(40, 40, 68, 68, 0xCA27);

    int m[] = {1,1,0,0,1,1,1}; // test week data

    while(1){

//        SPI_send(test, sizeof(test));
//        delay_ms(5);
        P6OUT ^= BIT0;

        // RTC
//        if(rtc_count == 2){
        if(query_rtc_flag == 1){
            queryRTC(); // query RTC

            if(refill_mode == 0){
                fillDataPacket();
            }

            query_rtc_flag = 0;
            rtc_count = 0;
        }
//        rtc_count++;

        // look for button press
        if(top_button == 1){
            switch(ind){
                case 0: col = RED; break;
                case 1: col = WHITE; break;
                case 3: col = BLUE; break;
                case 4: col = YELLOW; break;
                case 5: col = RED; ind = 0; break;
            }
            col = BLUE;
            ind++;

            // set refill mode
            if(refill_mode == 0){
//                fillRect(0, 0, XSIZE/2, YSIZE/2, col);

                display_week(m);
                refill_mode = 1;
                screensaver = 0;
                bluetooth_pkt[7] = 0;
            } else {
                clearDisplay();
                refill_mode = 0;
                screensaver = 1;
                bluetooth_pkt[7] = 0xAE;
            }

            // begin I2C transmission
            updateBluetooth();

//            fillScreen();
            top_button = 0;
            delay_ms(600);
            P2IE |= BIT3;        // enable P2.3 IRQ
            P2IFG &= ~BIT3;                 // clear flag
        }

        if(screensaver == 1){
            // random flower bitmaps
            clearDisplay();
            drawBitmap(rand() % 100,rand() % 100);
            delay_ms(1000);
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

/*
 * Top Button Interrupt (P2.3)
 */
#pragma vector = PORT2_VECTOR
__interrupt void ISR_PORT2_S2(void){

    top_button = 1;
    P2IE &= ~BIT3;                   // disable P2.3 IRQ
//    P2IFG &= ~BIT3;                 // clear flag
}

/*
 * TIMER (delay_ms)
 */
#pragma vector=TIMER0_B0_VECTOR
__interrupt void ISR_TB0_CCR0(void){
    ms_count++;
    if(ms_count == ms_thresh){
        ms_flag = 1;
        ms_count = 0;
    }

    TB0CCTL0 &= ~CCIFG;
}


/*
 * I2C (RTC slave)
 */
#pragma vector=EUSCI_B0_VECTOR
__interrupt void EUSCI_B0_TX_ISR(void){
    switch(UCB0IV){
        case 0x16:      // ID 16: RXIFG0
            if(mode_b == 2){
                if (r == (sizeof(rtc_packet)-1)){
                    rtc_packet[r] = UCB0RXBUF;
                    r = 0;
                } else {
                    rtc_packet[r] = UCB0RXBUF;
                    r++;
                }
            }
            break;
        case 0x18:      // ID 18: TXIFG0
            // rtc pointer set
            if(mode_b == 1){
                UCB0TXBUF = 0x00;
            }

            break;
        default:
            break;
    }

}


/*
 * Reed Switch
 */
#pragma vector = PORT3_VECTOR
__interrupt void ISR_PORT3_S1(void){
    query_rtc_flag = 1;
    P3IFG &= ~BIT1;                 // clear flag
}


/*
 * I2C 2310 (slave)
 */
#pragma vector=EUSCI_B1_VECTOR
__interrupt void EUSCI_B1_TX_ISR(void){                     // Fill TX buffer with packet values
    switch(UCB1IV){
        case 0x16:      // ID 16: RXIFG0
//            lm92_packet[j] = UCB1RXBUF;
            break;
        case 0x18:      // ID 18: TXIFG0
            if(mode_b == 3){
                UCB1TXBUF = bluetooth_cmd; // test value
            } else if(mode_b == 4){
                if (b1_i == (sizeof(bluetooth_pkt)-1)){
                    UCB1TXBUF = bluetooth_pkt[b1_i];
                    b1_i = 0;
                } else {
                    UCB1TXBUF = bluetooth_pkt[b1_i];
                    b1_i++;
                }
            }
            break;
        case 0x04: // NACK
            break;
        case 0x1A: // byte count zero interrupt
            break;
        case 0x1C: // clock low timeout
            UCB0CTLW0 |= UCTXNACK;
            break;
        default:
            break;
    }
}
