 /*!
  * file SetCursor.ino
  * brief SetCursor.
  *
  * Copyright	[DFRobot](http://www.dfrobot.com), 2016
  * Copyright	GNU Lesser General Public License
  *
  * version  V1.0
  * date  2018-1-13
  */

#include <Wire.h>
#include "DFRobot_LCD.h"

const int numRows = 2;
const int numCols = 16;

DFRobot_LCD lcd(16,2);  //16 characters and 2 lines of show

void setup() {
    // initialize
    lcd.init();
}

void loop() {
    // loop from ASCII 'a' to ASCII 'z':
    for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++) {
        // loop over the columns:
        for (int thisCol = 0; thisCol < numRows; thisCol++) {
            // loop over the rows:
            for (int thisRow = 0; thisRow < numCols; thisRow++) {
                // set the cursor position:
                lcd.setCursor(thisRow,thisCol);
                // print the letter:
                lcd.write(thisLetter);
                delay(200);
            }
        }
    }
}

