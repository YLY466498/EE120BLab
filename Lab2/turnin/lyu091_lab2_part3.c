/*	Author: lyu091
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;
    DDRC = 0x00; PORTC = 0x00;
    unsigned char cntfull = 0x00;

    /* Insert your solution below */
    while (1) {
	cntfull = 0x00;
        PORTC = 0x00;
	cntfull = ((PINA & 0x08) >> 3) + ((PINA & 0x04) >> 2) + ((PINA & 0x02) >> 1) + (PINA & 0x01);
	PORTC = 4 - cntfull;
	if(cntfull == 4){
	    PORTC = (PORTC | 0x80);
	}
    }
    return 1;
}
