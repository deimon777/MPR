/*
 *
 */

#include "define.h"
#include "function.h"
#include "action.h"

void setup() {
  pinMode(INICIO, INPUT);
  pinMode(BORRAR, INPUT);
  pinMode(ENTRADA_A, INPUT);
  pinMode(ENTRADA_B, INPUT);
  pinMode(ENTRADA_C, INPUT);
  pinMode(ENTRADA_D, INPUT);
  pinMode(SALIDA_A, OUTPUT);
  pinMode(SALIDA_B, OUTPUT);
  pinMode(SALIDA_C, OUTPUT);
  pinMode(SALIDA_D, OUTPUT);
  digitalWrite(SALIDA_A, LOW);
  digitalWrite(SALIDA_B, LOW);
  digitalWrite(SALIDA_C, LOW);
  digitalWrite(SALIDA_D, LOW);
  if (DEBUG) {
    Serial.begin(9600);
    Serial.println("DEBUG");
    Serial.println("-----------");
  }
}
void loop() {
  if (digitalRead(INICIO) == HIGH) {
      Serial.println("Inicio");
      iniciarSecuencia();
      accionFinal();
  }  
  if (digitalRead(BORRAR) == HIGH) {
      Serial.println("Borrar");
      borrarSecuencia();
  }  
  if (digitalRead(ENTRADA_A) == HIGH) {
      Serial.println("A");
      cargarSecuencia(ENTRADA_A);
  }
  if (digitalRead(ENTRADA_B) == HIGH) {
      Serial.println("B");
      cargarSecuencia(ENTRADA_B);
  }
  if (digitalRead(ENTRADA_C) == HIGH) {
      Serial.println("C");
      cargarSecuencia(ENTRADA_C);
  }
  if (digitalRead(ENTRADA_D) == HIGH) {
      Serial.println("D");
      cargarSecuencia(ENTRADA_D);
  }
  delay(100);
}
