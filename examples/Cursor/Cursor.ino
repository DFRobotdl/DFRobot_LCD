 /*!
  * file Cursor.ino
  * brief cursor.
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
    // Turn off the cursor:
    lcd.noCursor();
    delay(500);
    // Turn on the cursor:
    lcd.cursor();
    delay(500);
}

