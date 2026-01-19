//the first off bit is the start bit. The stop bit is a 1;
// This file deals with asynchronous usart;
 #include <avr/io.h>
#include <util/delay.h>
#define BAUD 9600       //  baud rate
#include <util/setbaud.h>
#include "../AVR-Programming-Library/pinDefines.h"
#include "../AVR-Programming-Library/USART.h"

/*int main(void) {
  char serialCharacter;
  // -------- Inits --------- //
  LED_DDR = 0xff;                            /* set up LEDs for output 
  initUSART();
  printString("Hello World!\r\n");                          /* to test 
  // ------ Event loop ------ //
  while (1) {
    serialCharacter = receiveByte();
    transmitByte(serialCharacter);
    LED_PORT = serialCharacter;
                           /* display ascii/numeric value of character */
  //}                                                  /* End event loop */
  /*return (0);
} */
int main(void) {
  char serialCharacter;

  // -------- Inits --------- //
  LED_DDR = 0xff;                            /* set up LEDs for output */
  initUSART();
  printString("Hello World!\r\n");                          /* to test */

  // ------ Event loop ------ //
  while (1) {

    serialCharacter = receiveByte();
    transmitByte(serialCharacter);
    LED_PORT = serialCharacter;
                           /* display ascii/numeric value of character */

  }                                                  /* End event loop */
  return 0;
}
