#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.print("hello, world!");
  delay(1000);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print(millis() / 1000);
  delay(100);
}
