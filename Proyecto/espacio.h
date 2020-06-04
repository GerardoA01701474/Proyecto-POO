#ifndef ESPACIO_H
#define ESPACIO_H

#include <string>

using namespace std;

class Espacio{
  protected: 
  unsigned int capacidad;
  float largo;
  float ancho;

  public:
  Espacio();
  Espacio(float l, float a);
  Espacio(unsigned int c, float l, float a);
  unsigned int get_capacidad();
  void set_capacidad(unsigned int c);
};

Espacio::Espacio(){
  capacidad = 25;
  largo = 10;
  ancho = 5;
}
Espacio::Espacio(float l, float a){
  largo= l;
  ancho= a;
}
Espacio::Espacio(unsigned int c, float l, float a){
  capacidad = c;
  largo = l;
  ancho = a;
}

unsigned int Espacio::get_capacidad(){
  return capacidad;
}
void Espacio::set_capacidad(unsigned int c){
  capacidad = c;
}





#endif