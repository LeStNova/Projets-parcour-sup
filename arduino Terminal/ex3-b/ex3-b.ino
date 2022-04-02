#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
int adcPin = A0;
float adcIn = 0;
float volt = 0;


void setup()
{
  Serial.begin(9600); // init serial to 9600b/s
  Serial.println("Potentiometre Test !!");
  lcd.begin(16, 2);
}


void loop()
{
  adcIn = analogRead(adcPin);
  delay(100);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("POTENTIOMETRE");
  lcd.setCursor(10, 1);
  lcd.print("V");
  lcd.setCursor(5, 1);
  volt = adcIn*5/1023;
  lcd.print(volt);
}
