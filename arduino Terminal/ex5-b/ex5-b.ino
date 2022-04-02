#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;


void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  lcd.setCursor(5, 0);
  lcd.print ("joystick");
  lcd.setCursor(2, 1);
  lcd.print("X=");
  lcd.print(sensorValue1);
  lcd.setCursor(8, 1);
  lcd.print(", Y=");
  lcd.print(sensorValue2);
  delay(200);
  lcd.clear();
}
