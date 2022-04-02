int adcPin = A0; // entrée analogique relié potentiometer
int adcIn = 0;   // variable to store the value coming from the sensor
void setup()
{
    Serial.begin(9600); // init serial to 9600b/s
    Serial.println("Potentiometre Test !!");
}
void loop()
{
    adcIn = analogRead(adcPin);
    Serial.println(adcIn);
    Serial.println("VOLT");
    delay(100);
}
