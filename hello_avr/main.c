/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: master
 */

#include <avr/io.h>
#include <util/delay.h>


int main (){


	/*Set pin direction as output */
DDRA = 0b11111111   ;
	/*set pin value*/


while (1){
	PORTB= 0b11111111  ;
_delay_ms(1000) ;
	PORTB= 0b00000000  ;
	_delay_ms(1000) ;

}

}
