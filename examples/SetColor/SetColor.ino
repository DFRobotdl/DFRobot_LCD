 /*!
  * file SetColor.ino
  * brief SetColor;Only RGB modules use this program.
  *
  * Copyright	[DFRobot](http://www.dfrobot.com), 2016
  * Copyright	GNU Lesser General Public License
  *
  * version  V1.0
  * date  2018-1-13
  */

#include <Wire.h>
#include "DFRobot_LCD.h"

char dtaUart[15];
char dtaLen = 0;

DFRobot_LCD lcd(16,2);  //16 characters and 2 lines of show

void setup() {
	Serial.begin(115200);
    // initialize
    lcd.init();
    // Print a message to the LCD.
    lcd.print("set cllor");
}

void loop() {
    if(dtaLen == 11) {
        int r = (dtaUart[0]-'0')*100 + (dtaUart[1] - '0')*10 + (dtaUart[2] - '0');          // get r
        int g = (dtaUart[4]-'0')*100 + (dtaUart[5] - '0')*10 + (dtaUart[6] - '0');
        int b = (dtaUart[8]-'0')*100 + (dtaUart[9] - '0')*10 + (dtaUart[10] - '0');
        
        dtaLen = 0;
        
        lcd.setRGB(r, g, b);

        Serial.println("get data");
        
        Serial.println(r);
        Serial.println(g);
        Serial.println(b);
        Serial.println();

    }
}

void serialEvent() {
    while(Serial.available()) {
        dtaUart[dtaLen++] = Serial.read();
    }
}

