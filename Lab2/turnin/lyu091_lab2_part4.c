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
    DDRA = 0x00; PORTA = 0x00;
    DDRB = 0x00; PORTB = 0x00;
    DDRC = 0x00; PORTC = 0x00;
    DDRD = 0x00; PORTD = 0x00;

    unsigned char tolWeight = 0x00;
    unsigned char errorWeight = 0x00;

    /* Insert your solution below */
    while (1) {
	tolWeight = 0x00;
        errorWeight = 0x00;
	PORTD = 0x00;
	tolWeight = PINA + PINB + PINC;
	if(PINA > PINC){
	    errorWeight = PINA - PINC;
	}
	else{
	    errorWeight = PINC - PINA;
	}
	if(tolWeight > 0x8C){
	    PORTD = (PORTD | 0x01);
	}
	if(errorWeight > 0x50){
	    PORTD = (PORTD | 0x02);
	}
	PORTD = PORTD | (tolWeight & 0xFC);
    }
    return 1;
}
