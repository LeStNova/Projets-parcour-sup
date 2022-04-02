#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
int adcPin = A0;
float adcIn = 0;
const int buttonPin0 = 3;
int buttonState0 = 0;
boolean x = true;
float volt = 0;

void setup()
{
  Serial.begin(9600); // init serial to 9600b/s
  Serial.println("Potentiometre Test !!");
  lcd.begin(16, 2);
  pinMode(buttonPin0, INPUT);
}


void loop()
{
  if (x == true) {
    adcIn = analogRead(adcPin);
    delay(100);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("POTENTIOMETRE");
    lcd.setCursor(5, 1);
    volt = adcIn * 5 / 1023;
    lcd.print(volt);
    lcd.setCursor(10, 1);
    lcd.print("V     ");
  }

  if (x == false) {
    adcIn = analogRead(adcPin);
    delay(100);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("POTENTIOMETRE");
    lcd.setCursor(5, 1);
    volt = adcIn * 5 / 1023 * 1000 ;
    lcd.print(volt);
    lcd.setCursor(9, 1);
    lcd.print(" mV    ");   
  }

  buttonState0 = digitalRead(buttonPin0);
  if (buttonState0 == LOW) {
    buttonState0 = digitalRead(buttonPin0);
    while (buttonState0 == LOW)
    {
      buttonState0 = digitalRead(buttonPin0);
    }
    x =! x;
  }
}
