 /*!
  * file HelloWorld.ino
  * brief helloworld.
  *
  * Copyright	[DFRobot](http://www.dfrobot.com), 2016
  * Copyright	GNU Lesser General Public License
  *
  * version  V1.0
  * date  2018-1-13
  */

#include <Wire.h>
#include "DFRobot_LCD.h"

  const int colorR = 255;
  const int colorG = 0;
  const int colorB = 0;

DFRobot_LCD lcd(16,2);  //16 characters and 2 lines of show

void setup() {
    // initialize
    lcd.init();
    
    lcd.setRGB(colorR, colorG, colorB);//If the module is a monochrome screen, you need to shield it
    
    // Print a message to the LCD.
    lcd.print("hello, world!");

    delay(1000);
}

void loop() {
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print(millis()/1000);

    delay(100);
}

