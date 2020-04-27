#include "led.h"

class matriz {
 private:
  led Display[7];
  
 public:
  matriz();
  void Definirmatriz(int a, int b, int c, int d, int e, int f, int g, int h);
  void ApagarTodo();
  void Getdisplay();
  void Random();
  void Prende();
};
