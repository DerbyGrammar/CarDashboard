#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

String firstLine = "DGS Racing"; // you can change this :)

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

   lcd.print(firstLine);
   lcd.setCursor(0,1);

   lcd.print("VLT: ");
   lcd.print(volt);
   lcd.print(" | AMP: ");
   lcd.print(amp);
   lcd.setCursor(0,2);

   lcd.print("TMP: ");
   lcd.print(temp);
   lcd.print(" | MPH: ");
   lcd.print(mphspeed);
   lcd.setCursor(0,3);

   lcd.print("TMP: ");
   lcd.print(temp2);
   lcd.print(" | FAN: ");
   lcd.print(isFanOn ? "ON" : "OFF");
   lcd.setCursor(0,4);

   //do stuff here

   lcdGoing = false;
  }
}

