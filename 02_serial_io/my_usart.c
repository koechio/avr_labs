#include <avr/io.h>
#include "my_usart.h"
#include <util/setbaud.h>

void initUSART(void){
UBRR0H = UBRRH_VALUE;                        //values obtained from setbaud.h
UBRR0L = UBRRL_VALUE;
#if USE_2X
  UCSR0A |= (1 << U2X0);
#else
  UCSR0A &= ~(1 << U2X0);
#endif
                                  /* Enable USART transmitter/receiver */
  UCSR0B = (1 << TXEN0) | (1 << RXEN0);
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);   /* 8 data bits, 1 stop bit */

}