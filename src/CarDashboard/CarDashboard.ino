#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  
}

void loop() {
  
}

void lcdPrint(int volt, int amp, int temp, int temp2, int mphspeed, bool isFanOn) {
  bool lcdGoing;

  if(!lcdGoing) {
   lcdGoing = true;

   //do stuff here

   lcdGoing = false;
  }
}

