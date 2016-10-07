#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  randomSeed(analogRead(0));
}

void loop() {
  lcdPrint(random(1,24), random(1,32), random(1,99), random(1,99), random(1,35), temp > 30 ? true : false);
}

void lcdPrint(int volt, int amp, int temp, int temp2, int mphspeed, bool isFanOn) {
  bool lcdGoing;
  if(!lcdGoing) {
   lcdGoing = true;

   //do stuff here

   lcdGoing = false;
  }
}

