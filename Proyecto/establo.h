#ifndef ESTABLO_H
#define ESTABLO_H
#include "espacio.h"
#include <string>

using namespace std;

class Establo : public Espacio {
  public:
  Establo();
  Establo(unsigned int c, float l, float a);
};


#endif