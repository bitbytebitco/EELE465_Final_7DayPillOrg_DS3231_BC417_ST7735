#include <msp430.h> 

// I2C vars
volatile int r = 0;
volatile char pkt[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

char packet[] = "Zachary";
unsigned int pos = 0;

volatile int action_select = 0;

void initI2C_slave(){
    UCB0CTLW0 |= UCSWRST;               // SW RESET enabled
    UCB0CTLW0 |= UCMODE_3 | UCSYNC;     // Put into I2C mode
    UCB0I2COA0 = 0x0058 | UCOAEN;       // Set slave address + enable

    UCB0CTLW1 |= 0xC0;             // Set UCCLTO = 11 (~34ms clock low timeout)

    // Setup ports
    P1SEL1 &= ~BIT3;            // P1.3 SCL
    P1SEL0 |= BIT3;

    P1SEL1 &= ~BIT2;            // P1.2 SDA
    P1SEL0 |= BIT2;

    UCB0CTLW0 &= ~UCSWRST;      // SW RESET OFF

    UCB0IE |= UCTXIE0 | UCRXIE0 | UCSTPIE | UCCLTOIE | UCBCNTIE | UCNACKIE;          // Enable I2C B0 Tx/Rx/Stop IRQs

    PM5CTL0 &= ~LOCKLPM5;       // Turn on I/O
    UCB0CTLW0 &= ~UCSWRST;      // SW RESET OFF
}


/**
 * main.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    initI2C_slave();

    UCA0CTLW0 |= UCSWRST;
    UCA0CTLW0 |= UCSSEL__ACLK; // 1 Mhz SMCLK

    UCA0BRW = 3; // "Low freq. Baud Rate Mode"
    UCA0MCTLW |= 0x9200; // Prescaler = 8 // Modulation = 0xD600 (from table)

    // P1.7 to use UCA0TXD
    P1SEL1 &= ~BIT7;
    P1SEL0 |= BIT7;

    // P1.5 to be UCA0CLK
    P1SEL1 &= ~BIT5;
    P1SEL0 |= BIT5;


    PM5CTL0 &= ~LOCKLPM5;        // enable I/O
    UCA0CTLW0 &= ~UCSWRST;       // put UCA0 into operating mode

    // Setup IRQs
    P1IE |= (BIT5);   // Local Interrupt enable for P1.1
    P1IFG &= ~(BIT5);     // clear P1.1 IRQ Flag

    __enable_interrupt();   // global interrupt enable

    int i = 0;
    int j = 0;
    while(1) {
        if(action_select == 1){

            // begin Bluetooth packet transmission
            UCA0IE |= UCTXCPTIE;
            UCA0IFG &= ~UCTXCPTIFG;
            pos = 0;
            UCA0TXBUF = pkt[pos++];

            // delay
            for(i = 0;i<100;i++){
                for(j = 0;j<100;j++){}
            }
        }
    }
    return 0;
}

/*
 * Bluetooth Interrupt
 */
#pragma vector = EUSCI_A0_VECTOR
__interrupt void ISR_EUSCI_A0(void)
{
    if(pos==sizeof(packet)-1){
        UCA0IE &= ~UCTXCPTIE; // turn off TX complete IRQ
    }
    else {
        UCA0TXBUF = pkt[pos];
        pos++;
    }
    UCA0IFG &= ~UCTXCPTIFG; // clear TX complete flag
}

/*
 * I2C Interrupt
 */
#pragma vector=EUSCI_B0_VECTOR
__interrupt void EUSCI_B0_TX_ISR(void){

    switch(UCB0IV){
        case 0x06: // start condition
            break;
        case 0x08:  // stop condition
            r = 0;
            if(pkt[0] == 0xAE){
                action_select = 1;       // Display temperature or perform action for #/*
            } else {
                action_select = 0;
            }
            break;
        case 0x16:                           // Receiving
            pkt[r] = UCB0RXBUF;      // Retrieve byte from buffer
            r++;

            break;
        case 0x18:
            break;
        case 0x1C: // clock low timeout
            break;
    }
}

