#include <Arduino.h>
#include "matriz.h"

  matriz::matriz(){
    }

  void matriz::Definirmatriz(int a, int b, int c, int d, int e, int f, int g, int h){
      Display[0].Definirled(a,10);
      Display[1].Definirled(b,10);
      Display[2].Definirled(c,10);
      Display[3].Definirled(d,10);
      Display[4].Definirled(e,10);
      Display[5].Definirled(f,10);
      Display[6].Definirled(g,10);
      Display[7].Definirled(h,10);
    }
    

  void matriz::ApagarTodo(){
    int i;
    for(i=0;i<7;i++){
      Display[i].Apagar();
    }
  }
  void matriz::Getdisplay(){
    
  }
  void matriz::Random(){
    int x;
   
    x=random(1,6);
  
    switch (x) {
    
    case 1:
      Display[1].Prende();
       Display[2].Prende();
       break;
       
    case 2:
      Display[0].Prende();
      Display[1].Prende();
      Display[6].Prende();
      Display[4].Prende();
      Display[3].Prende();
  break;
  
    case 3:
      Display[0].Prende();
      Display[1].Prende();
      Display[6].Prende();
      Display[2].Prende();
      Display[3].Prende();
        break;
      
    case 4:
      Display[5].Prende();
      Display[6].Prende();
      Display[1].Prende();
      Display[2].Prende();
        break;
      
    case 5:
      Display[0].Prende();
      Display[5].Prende();
      Display[6].Prende();
      Display[2].Prende();
      Display[3].Prende();
        break;
      
    case 6:
      Display[5].Prende();
      Display[6].Prende();
      Display[4].Prende();
      Display[3].Prende();
      Display[2].Prende();
      Display[0].Prende();
        break;
   
    

    }  
  }
