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
  lcd.setCursor(0, 0);     
  lcd.print("MESURE:");
  RangeInInches = ultrasonic.MeasureInInches();  
  lcd.setCursor(4, 1);
  lcd.print(RangeInInches*0.0254);      
  lcd.print("  m");
  delay(250);
}
