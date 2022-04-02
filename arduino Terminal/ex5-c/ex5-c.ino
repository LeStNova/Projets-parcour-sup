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

  if (sensorValue1 >= 600) {
    lcd.setCursor(2, 0);
    lcd.print("X= ");
    lcd.print("AVANT  ");
    delay(200);
  }

  if (sensorValue1 <= 400) {
    lcd.setCursor(2, 0);
    lcd.print("X= ");
    lcd.print("ARRIERE");
    delay(200);
  }

  if (sensorValue2 >= 600) {
    lcd.setCursor(2, 1);
    lcd.print("Y= ");
    lcd.print("GAUCHE");
    delay(200);
  }

  if (sensorValue2 <= 400) {
    lcd.setCursor(2, 1);
    lcd.print("Y= ");
    lcd.print("DROITE");
    delay(200);
  }

  if (sensorValue1 < 600 && sensorValue1 > 400 && sensorValue2 < 600 && sensorValue2 > 400) {
    lcd.setCursor(2, 0);
    lcd.print("X= ");
    lcd.print("ARRET  ");
    lcd.setCursor(2, 1);
    lcd.print("Y= ");
    lcd.print("ARRET  ");
    delay(200);
  }
}
