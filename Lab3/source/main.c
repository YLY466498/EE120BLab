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
    DDRB = 0xFF; PORTB = 0xFF;                             
    DDRC = 0xFF; PORTC = 0x00;

    unsigned char sum = 0x00;
    /* Insert your solution below */
    while (1) {
	PORTC = 0x00;
	sum = PINA & 0x0F;
	if (sum >= 13){
	    PORTC = PORTC | 0x3F;
	}
	else if (sum >= 10){
	    PORTC = PORTC | 0x3D;
	}
	else if (sum >= 7){
	    PORTC = PORTC | 0x3C;
	}
	else if (sum >= 5){
	    PORTC = PORTC | 0x38;
	}
	else if (sum >= 3){
	    PORTC = PORTC | 0x70;
	}
	else if (sum >= 1){
	    PORTC = PORTC | 0x60;
	}
	else {PORTC = 0x40;}
	if ((PINA & 0x10) && (PINA & 0x20) && !(PINA & 0x40)){
	    PORTC = PORTC | 0x80;
	}
    }
    return 1;
}
