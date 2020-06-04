#ifndef RANCHO_H
#define RANCHO_H

#include <string>

using namespace std;

class Rancho{
  protected:
  float largo;
  float ancho;

  public:
  Rancho();
  Rancho(int l, int a);
  float area(int l, int a);
};

Rancho::Rancho(){
  largo = 5;
  ancho = 3;
}


#endif