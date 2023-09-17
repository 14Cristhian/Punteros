#include <Arduino.h>

// put function declarations here:
void  duplicar(int *punteroNumero);
int numero = 10;

void setup() {
  Serial.begin(115200);
}



void loop() {
Serial.print("En loop(): numero = ");
Serial.println(numero);
duplicar(&numero);
delay(1000);
}

void duplicar(int *punteroNumero) {
  *punteroNumero = *punteroNumero  * 2;
  Serial.print("En duplicar(): punteroNumero=");
  Serial.println(*punteroNumero);
}   