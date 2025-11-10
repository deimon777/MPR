#include <Arduino.h>
#ifndef _DEFINE_H_
#include "define.h"
#endif 
#ifndef _ACTION_H_
#include "action.h"
#endif 


/**************************************************************/
/** GENERICAS *************************************************/
/**************************************************************/
void accionDeInicio() {
  delay(100);
}
void accionDeCierre() {
  delay(100);
}

/**************************************************************/
/** PERSONALIZADAS ********************************************/
/**************************************************************/
void avanzar() {
  digitalWrite(S_SALIDA_A, HIGH);
  digitalWrite(S_SALIDA_B, LOW);
  digitalWrite(S_SALIDA_C, LOW);
  digitalWrite(S_SALIDA_D, LOW);
  delay(2000);
}
void retroceder() {
  digitalWrite(S_SALIDA_A, LOW);
  digitalWrite(S_SALIDA_B, HIGH);
  digitalWrite(S_SALIDA_C, LOW);
  digitalWrite(S_SALIDA_D, LOW);
  delay(2000);
}
void girarDerecha() {
  digitalWrite(S_SALIDA_A, LOW);
  digitalWrite(S_SALIDA_B, LOW);
  digitalWrite(S_SALIDA_C, HIGH);
  digitalWrite(S_SALIDA_D, LOW);
  delay(2000);
}
void girarIzquierda() {
  digitalWrite(S_SALIDA_A, LOW);
  digitalWrite(S_SALIDA_B, LOW);
  digitalWrite(S_SALIDA_C, LOW);
  digitalWrite(S_SALIDA_D, HIGH);
  delay(2000);
}
void esperar() {
  delay(2000);
}