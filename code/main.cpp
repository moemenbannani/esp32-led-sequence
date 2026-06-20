#include <Arduino.h>
/*
  Projet: Feux de circulation avec ESP32
  LEDs:
  - Verte  -> GPIO18
  - Jaune  -> GPIO19
  - Bleue  -> GPIO21
*/

const int GREEN_LED = 18;
const int YELLOW_LED = 19;
const int BLUE_LED = 21;

void setup()
{
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
}

void loop()
{
  // Vert
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  delay(5000);

  // Jaune
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(BLUE_LED, LOW);
  delay(2000);

  // Bleu
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(BLUE_LED, HIGH);
  delay(5000);

  // Éteindre tout pendant 1 seconde
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  delay(1000);
}