 /*!
  * file Blink.ino
  * brief blink.
  * @n This example Set the volume size and play music snippet.
  *
  * Copyright	[DFRobot](http://www.dfrobot.com), 2016
  * Copyright	GNU Lesser General Public License
  *
  * version  V1.0
  * date  2018-1-13
  */

#include <Wire.h>
#include "DFRobot_LCD.h"

DFRobot_LCD lcd(16,2);  //16 characters and 2 lines of show

void setup() {
    // initialize
    lcd.init();

    // Print a message to the LCD.
    lcd.print("hello, world!");
    
    delay(1000);
}

void loop() {
    // Turn off the blinking cursor:
    lcd.stopBlink();
    delay(3000);
    // Turn on the blinking cursor:
    lcd.blink();
    delay(3000);
}
