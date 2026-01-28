#include <avr/io.h>
#include "my_usart.h"
#include <util/delay.h>
#include <avr/power.h>
int main(void) {
    initUSART(); // Initialize USART communication
    DDRB = 0xff; // Set PORTB as output
while(1){
transmitByte('U'); // Sends 8 numbers in a row
uint8_t data = receiveByte();
DDRB = data;
PORTB = data;
}
return 0;
}