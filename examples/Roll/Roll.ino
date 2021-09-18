 /*!
  * file Roll.ino
  * brief Roll show 'hello, world!'.
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
    // scroll 13 positions (string length) to the left
    // to move it offscreen left:
    for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(150);
    }

    // scroll 29 positions (string length + show length) to the right
    // to move it offscreen right:
    for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
        // scroll one position right:
        lcd.scrollDisplayRight();
        // wait a bit:
        delay(150);
    }

    // scroll 16 positions (show length + string length) to the left
    // to move it back to center:
    for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
        // scroll one position left:
        lcd.scrollDisplayLeft();
        // wait a bit:
        delay(150);
    }

    // delay at the end of the full loop:
    delay(1000);

}

