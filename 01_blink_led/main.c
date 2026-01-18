#include <avr/io.h>
#include <util/delay.h>

int main(void){
    DDRB = 0b11111111;// Configure pins in register B for output.
    uint8_t leds= 8;
    uint8_t i= 0;
while (1)// main loop
{
    while (i < leds)
    
    { PORTB = (1<< i);// Turn led on the i'th index on;
    _delay_ms(2000);
    i++;// move to next led on next iteration
    }
    while(i > 0){
        PORTB = (1 << i);// Turn led on the i'th index on;
         i--; // move to the previous led on next iteration
        _delay_ms(2000); // delay for the leds on and off to be clear.
        
    }

}
   
return 0;
}
