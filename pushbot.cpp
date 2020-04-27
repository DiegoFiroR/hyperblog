#include <Arduino.h>
#include "pushbot.h"

  pushbot::pushbot(){
    
  }
  void pushbot::Definir(int puerto){
    Puerto=puerto;
    pinMode (Puerto, INPUT);
    
  }
  void pushbot::Bot(){
    int x=0;
    while(x==0){
      Boton=digitalRead(Puerto);
      if (Boton==1){
        x=1;
      }
    }
  }
