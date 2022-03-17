#include "Ultrasonic.h"

const int E1 = 3; ///<Motor1 Speed
const int E2 = 11;///<Motor2 Speed
const int E3 = 5; ///<Motor3 Speed
const int E4 = 6; ///<Motor4 Speed

const int M1 = 4; ///<Motor1 Direction
const int M2 = 12;///<Motor2 Direction
const int M3 = 8; ///<Motor3 Direction
const int M4 = 7; ///<Motor4 Direction

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;


Ultrasonic ultrasonic0(A0);
Ultrasonic ultrasonic1(A1);
Ultrasonic ultrasonic2(A2);
Ultrasonic ultrasonic3(A3);

void M1_advance(char Speed) ///<Motor1 Advance
{
  digitalWrite(M1, LOW);
  analogWrite(E1, Speed);
}
void M2_advance(char Speed) ///<Motor2 Advance
{
  digitalWrite(M2, HIGH);
  analogWrite(E2, Speed);
}
void M3_advance(char Speed) ///<Motor3 Advance
{
  digitalWrite(M3, LOW);
  analogWrite(E3, Speed);
}
void M4_advance(char Speed) ///<Motor4 Advance
{
  digitalWrite(M4, HIGH);
  analogWrite(E4, Speed);
}

void M1_back(char Speed) ///<Motor1 Back off
{
  digitalWrite(M1, HIGH);
  analogWrite(E1, Speed);
}
void M2_back(char Speed) ///<Motor2 Back off
{
  digitalWrite(M2, LOW);
  analogWrite(E2, Speed);
}
void M3_back(char Speed) ///<Motor3 Back off
{
  digitalWrite(M3, HIGH);
  analogWrite(E3, Speed);
}
void M4_back(char Speed) ///<Motor4 Back off
{
  digitalWrite(M4, LOW);
  analogWrite(E4, Speed);
}



void setup() {
  Serial.begin(9600);

  for (int i = 3; i < 9; i++)
    pinMode(i, OUTPUT);
  for (int i = 11; i < 13; i++)
    pinMode(i, OUTPUT);

  pinMode(A0, OUTPUT); ///avant
  pinMode(A1, OUTPUT); ///arriere
  pinMode(A2, OUTPUT); ///droit
  pinMode(A3, OUTPUT); ///gauche
}

void loop() {
  long RangeInInches0;
  RangeInInches0 = ultrasonic0.MeasureInInches();
  long RangeInInches1;
  RangeInInches1 = ultrasonic1.MeasureInInches();
  long RangeInInches2;
  RangeInInches2 = ultrasonic2.MeasureInInches();
  long RangeInInches3;
  RangeInInches3 = ultrasonic3.MeasureInInches();

  if (RangeInInches0 * 0.0254 >= 0.01 && a == 0) {
    M1_advance(15); ///Advance
    M2_back(15);
    M3_back(15);
    M4_advance(15);
    delay(100);
  }

 if (RangeInInches0 * 0.0254 < 0.01 && RangeInInches1 * 0.0254 >= 0.01 && b == 0) {
     M1_back(15); ///Left
     M2_back(15);
     M3_back(15);
     M4_back(15);
   delay(100);
   a = 1;
   return;
 }

 if (RangeInInches1 * 0.0254 < 0.01 && RangeInInches2 * 0.0254 >= 0.05 && c == 0 && a == 1) {
     M1_back(15); ///Back
     M2_advance(15);
     M3_advance(15);
     M4_back(15);
   delay(100);
   b = 1;
   return;
 }

 if (RangeInInches2 * 0.0254 < 0.05 && RangeInInches1 * 0.0254 >= 0.01 && d == 0 && b == 1) {
     M1_back(25); ///Left
     M2_back(25);
     M3_back(25);
     M4_back(25);
   delay(100);
   c = 1;
   return;
 }

 if (RangeInInches1 * 0.0254 < 0.01 && RangeInInches0 * 0.0254 >= 0.01 && e == 0 && c == 1) {
   M1_advance(15); ///Advance
   M2_back(15);
   M3_back(15);
   M4_advance(15);
   delay(100);
   d = 1;
   return;
 }

 if (RangeInInches0 * 0.0254 < 0.01 && RangeInInches3 * 0.0254 >= 0.01 && f == 0 && d == 1) {
   M1_advance(25); ///Right
     M2_advance(25);
     M3_advance(25);
     M4_advance(25);
   delay(100);
   e = 1;
   return;
 }

 if (RangeInInches3 * 0.0254 < 0.01 && RangeInInches2 * 0.0254 >= 0.01 && g == 0 && e == 1) {
   M1_back(15); ///Back
     M2_advance(15);
     M3_advance(15);
     M4_back(15);
   delay(100);
   f = 1;
   return;
 }

 if (RangeInInches2 * 0.0254 < 0.01 && RangeInInches3 * 0.0254 >= 0.01 && h == 0 && f == 1) {
    M1_advance(25); ///Right
     M2_advance(25);
     M3_advance(25);
     M4_advance(25);
   delay(100);
   g = 1;
   return;
 }

 if (RangeInInches0 * 0.0254 >= 0.05 && g == 1) {
    M1_advance(0); ///Right
     M2_advance(0);
     M3_advance(0);
     M4_advance(0);
   delay(100);
   return;
 }
}
