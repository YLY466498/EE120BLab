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
    DDRB = 0x00; PORTB = 0x00;                             
    DDRD = 0x00; PORTD = 0x00;

    unsigned char sum = 0x00;
    /* Insert your solution below */
    while (1) {
	PORTB = 0x00;
	PORTD = 0x00;
	if(PIND >= 0x23){
	    PORTB = PORTB | 0x02;
	}
	else if(((PIND << 1) + (PINB & 0x01)) > 5){
	    PORTB = PORTB | 0x04;
	}
    }
    return 1;
}
