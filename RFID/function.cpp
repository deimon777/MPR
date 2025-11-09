#include <Arduino.h>
#include "function.h"
#ifndef _DEFINE_H_
#include "define.h"
#endif
#ifndef _SELECT_ACTION_H_
#include "select_action.h"
#endif

int memoria[MEMORIA];
int posicion_array = 0;

void iniciarSecuencia() {
  /*
  // prensar en agregar lo de las interrupciones 
  noInterrupts();
  interrupts();
  */
  for (int i = 0; i < posicion_array; i++) {
    seleccionarAccion(memoria[i]);
  }
  if (DEBUG) {
    Serial.println("-----------");
  }
}

void cargarSecuencia(int valor) {
  memoria[posicion_array] = valor;
  posicion_array++;
  delay(300);
}

void borrarSecuencia() {
  posicion_array = 0;
  /*for (int x = 0; x < sizeof(memoria) / sizeof(memoria[0]); x++)
  {
    memoria[x] = 0;
  }*/
}
