#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
#include "Ultrasonic.h"
Ultrasonic ultrasonic(7);


void setup()
{
  lcd.begin(16, 2);
}


void loop()
{
  long RangeInInches;
  long RangeInCentimeters;
  RangeInInches = ultrasonic.MeasureInInches();
  RangeInInches = RangeInInches;

  if (RangeInInches <= 39.37) {
    lcd.setCursor(0, 0);
    lcd.print("MESURE:");
    lcd.setCursor(4, 1);
    lcd.print(RangeInInches * 25.4);
    lcd.setCursor(9, 1);
    lcd.print("  mm");
    delay(250);
  }

  else {
    lcd.setCursor(0, 0);
    lcd.print("MESURE:");
    lcd.setCursor(4, 1);
    lcd.print(RangeInInches * 0.0254);
    lcd.setCursor(9, 1);
    lcd.print("  m ");
    delay(250);
  }
}
