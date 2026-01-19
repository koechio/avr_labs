#include <avr/io.h>
#include "my_usart.h"
#include <util/delay.h>
#include <avr/power.h>
int main(void) {
    initUSART(); // Initialize USART communication
    DDRB = 0xff; // Set PORTB as output
while(1){
for (uint8_t i = 0; i < 8; i++) {
    transmitByte('U'); // Sends 8 numbers in a row
    _delay_ms(500);
    transmitByte(i + '0'); // Sends 8 numbers in a row
    transmitByte(i);
    _delay_ms(500);
};};
return 0;
}