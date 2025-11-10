#include <Arduino.h>
#include "select_action.h"
#ifndef _DEFINE_H_
#include "define.h"
#endif
#ifndef _ACTION_H_
#include "action.h"
#endif 

void seleccionarAccion(int accion) {
  switch (accion) {
    case A_AVANZAR:
      if (DEBUG) {
        Serial.println("A-");
      }
      avanzar();
      break;
    case A_RETROCEDER:
      if (DEBUG) {
        Serial.println("B-");
      }
      retroceder();
      break;
    case A_DERECHA:
      if (DEBUG) {
        Serial.println("C-");
      }
      girarDerecha();
      break;
    case A_IZQUIERDA:
      if (DEBUG) {
        Serial.println("D-");
      }
      girarIzquierda();
      break;
  }
}