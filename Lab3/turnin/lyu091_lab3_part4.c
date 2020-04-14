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
    DDRB = 0x00; PORTB = 0xFF;                             
    DDRC = 0xFF; PORTC = 0x00;
    /* Insert your solution below */
    while (1) {
	PORTB = 0x00;
	PORTC = 0x00;
	PORTB = PORTB | (PINA >> 4);
	PORTC = PORTC | (PINA << 4);
    }
    return 1;
}
