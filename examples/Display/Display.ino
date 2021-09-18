 /*!
  * file Display.ino
  * brief display.
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
}

void loop() {
    // Turn off the display:
    lcd.noDisplay();
    delay(500);
    // Turn on the display:
    lcd.display();
    delay(500);
}

