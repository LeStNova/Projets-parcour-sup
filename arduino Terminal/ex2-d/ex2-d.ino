#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
const int buttonPin0 = 3;
int buttonState0 = 0;
char var;
int x = 0;


void setup()
{
  pinMode(buttonPin0, INPUT);
  lcd.begin(16, 2);
  var = 65;
}


void loop() {
  buttonState0 = digitalRead(buttonPin0);
  if (buttonState0 == LOW && var <= 92 && x == 1) {
    lcd.setCursor(0, 0);
    lcd.print("L'alphabet:");
    lcd.setCursor(12, 0);
    lcd.print(var);
    var = var + 1;
    x = 0;
    delay(250);
  }

  buttonState0 = digitalRead(buttonPin0);
  if (buttonState0 == HIGH) {
    x = 1;
    delay(250);
  }

  if (var == 92) {
    lcd.clear();
    lcd.setCursor(7, 0);
    lcd.print("FIN");
    var = 65;
  }
}
