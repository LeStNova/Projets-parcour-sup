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
  long RangeInInches;      // déclaration des variables
  long RangeInCentimeters;
  lcd.setCursor(0, 0);      // positionnement colonne 0 ligne 0
  lcd.print("La mesure est : ");
  RangeInInches = ultrasonic.MeasureInInches();  // lecture du résultat en inch
  lcd.setCursor(4, 1);
  lcd.print(RangeInInches);            //0~157 inches
  lcd.print("  inch");
  delay(1000);
}
