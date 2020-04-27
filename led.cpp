#include <Arduino.h>
#include "led.h"

led::led(){
  Modo=0;
}
void led::Definirled( int puerto, int tiempo){
  Puerto=puerto;
  Tiempo=tiempo;

  pinMode(Puerto,OUTPUT);
}
void led::Prende(){
  Modo=1;
  digitalWrite(Puerto, Modo);
  delay (Tiempo);
  
}
void led::Apagar(){
  Modo=0;
  digitalWrite(Puerto, Modo);
  delay(Tiempo);
  
}
