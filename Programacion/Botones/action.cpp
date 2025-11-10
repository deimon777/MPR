#include <Arduino.h>
#include "action.h"
#ifndef _DEFINE_H_
#include "define.h"
#endif

void seleccionarAccion(int accion) {
  switch (accion) {
    case ENTRADA_A:
      if (DEBUG) {
        Serial.println("A-");
      }
      ledAzul();
      break;
    case ENTRADA_B:
      if (DEBUG) {
        Serial.println("B-");
      }
      ledRojo();
      break;
    case ENTRADA_C:
      if (DEBUG) {
        Serial.println("C-");
      }
      ledVerde();
      break;
    case ENTRADA_D:
      if (DEBUG) {
        Serial.println("D-");
      }
      ledAmarillo();
      break;
  }
}

/* 
 * Programar las acciones en concreto
 */
void ledAzul() {
  digitalWrite(SALIDA_A, HIGH);
  digitalWrite(SALIDA_B, LOW);
  digitalWrite(SALIDA_C, LOW);
  digitalWrite(SALIDA_D, LOW);
  delay(2000);
}
void ledRojo() {
  digitalWrite(SALIDA_A, LOW);
  digitalWrite(SALIDA_B, HIGH);
  digitalWrite(SALIDA_C, LOW);
  digitalWrite(SALIDA_D, LOW);
  delay(2000);
}
void ledVerde() {
  digitalWrite(SALIDA_A, LOW);
  digitalWrite(SALIDA_B, LOW);
  digitalWrite(SALIDA_C, HIGH);
  digitalWrite(SALIDA_D, LOW);
  delay(2000);
}
void ledAmarillo() {
  digitalWrite(SALIDA_A, LOW);
  digitalWrite(SALIDA_B, LOW);
  digitalWrite(SALIDA_C, LOW);
  digitalWrite(SALIDA_D, HIGH);
  delay(2000);
}

void accionFinal() {
  delay(1000);
  digitalWrite(SALIDA_A, LOW);
  digitalWrite(SALIDA_B, LOW);
  digitalWrite(SALIDA_C, LOW);
  digitalWrite(SALIDA_D, LOW);
  for (int i = 0; i < 5; i++) {
    digitalWrite(SALIDA_A, HIGH);
    digitalWrite(SALIDA_B, HIGH);
    digitalWrite(SALIDA_C, HIGH);
    digitalWrite(SALIDA_D, HIGH);
    delay(500);
    digitalWrite(SALIDA_A, LOW);
    digitalWrite(SALIDA_B, LOW);
    digitalWrite(SALIDA_C, LOW);
    digitalWrite(SALIDA_D, LOW);
    delay(500);
  }
}