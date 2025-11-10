/* 
 2024
 Robot Educativo
 Damian Blanco - blanco.damian@gmail.com

 www.WEB.com
 
 El robot se controla mediante tarjetas RFID, cada tarjeta tiene la accion a realizar.

 Para agregar nuevas funcionalidades modificar los archivos
     define.h         -> definir la nueva accion
     select_action.h  -> agregar en el switch la nueva accion
     action.h         -> crear la funcion de la accion
     action.cpp       -> crear la programacion de la accion
*/

#include "define.h"
#include "function.h"
#include "action.h"

void setup() {
  pinMode(INICIO, INPUT);
  pinMode(BORRAR, INPUT);

  pinMode(A_AVANZAR, INPUT);
  pinMode(A_RETROCEDER, INPUT);
  pinMode(A_DERECHA, INPUT);
  pinMode(A_IZQUIERDA, INPUT);
  pinMode(S_SALIDA_A, OUTPUT);
  pinMode(S_SALIDA_B, OUTPUT);
  pinMode(S_SALIDA_C, OUTPUT);
  pinMode(S_SALIDA_D, OUTPUT);
  digitalWrite(S_SALIDA_A, LOW);
  digitalWrite(S_SALIDA_B, LOW);
  digitalWrite(S_SALIDA_C, LOW);
  digitalWrite(S_SALIDA_D, LOW);
  if (DEBUG) {
    Serial.begin(9600);
    while (!Serial) {
      ; // wait for serial port to connect. Needed for native USB port only
    }
    Serial.println("DEBUG");
    Serial.println("-----------");
  }
  accionDeInicio();
}
void loop() {
  if (digitalRead(INICIO) == HIGH) {
      Serial.println("Inicio");
      iniciarSecuencia();
      accionDeCierre();
  }  
  if (digitalRead(BORRAR) == HIGH) {
      Serial.println("Borrar");
      borrarSecuencia();
  }  
  if (digitalRead(A_AVANZAR) == HIGH) {
      Serial.println("A");
      cargarSecuencia(A_AVANZAR);
  }
  if (digitalRead(A_RETROCEDER) == HIGH) {
      Serial.println("B");
      cargarSecuencia(A_RETROCEDER);
  }
  if (digitalRead(A_DERECHA) == HIGH) {
      Serial.println("C");
      cargarSecuencia(A_DERECHA);
  }
  if (digitalRead(A_IZQUIERDA) == HIGH) {
      Serial.println("D");
      cargarSecuencia(A_IZQUIERDA);
  }
  delay(100);
}
