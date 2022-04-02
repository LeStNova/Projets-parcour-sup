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
  var = 97;
}


void loop() {
  buttonState0 = digitalRead(buttonPin0);
  if (buttonState0 == LOW && var <= 122 && x == 1) {
    lcd.clear();
    lcd.setCursor(8, 0);
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

  if (var == 122) {
    var = 97;
  }
}
