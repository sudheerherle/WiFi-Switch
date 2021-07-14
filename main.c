/*
 * File:   main.c
 * Author: I14746
 *
 * Created on July 1, 2021, 11:49 AM
 */


#include <xc.h>

#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISA3 = 0;
    
    while(1)
    {
        PORTA = 0x08;
        
//        __delay_ms(3000);
//        
//        PORTA = 0x00;
//        
//        __delay_ms(3000);
    }
    
    
}
