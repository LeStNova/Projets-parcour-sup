#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int buttonPin0 = 3;
const int buttonPin2 = 8;
int buttonState0 = 0;
int buttonState2 = 0;


void setup()
{
  pinMode(buttonPin0, INPUT);
  pinMode(buttonPin2, INPUT);
  lcd.begin(16, 2);
}


void loop() {
  buttonState0 = digitalRead(buttonPin0);
  buttonState2 = digitalRead(buttonPin2);


  if (buttonState0 == LOW && buttonState2 == HIGH) {
    lcd.setCursor(4, 0);
    lcd.print("bonjour  ");
  }

  if (buttonState2 == LOW && buttonState0 == HIGH) {
    lcd.setCursor(4, 0);
    lcd.print("au revoir");
  }

  if (buttonState0 == HIGH && buttonState2 == HIGH) {
    lcd.setCursor(4, 0);
    lcd.print("attente  ");
  }
}
