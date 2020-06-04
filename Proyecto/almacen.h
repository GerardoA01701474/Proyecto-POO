#ifndef ALMACEN_H
#define ALMACEN_H
#include "espacio.h"
#include "dinero.h"
#include <string>

using namespace std;


class Almacen : public Espacio{
  protected:
  int costalesAbono;
  int cajasAlimento;

  public:
  Almacen();
  Almacen(int c, float l, float a, int ab, int al);
  int get_costalesAbono();
  int get_cajasAlimento();
  void set_costalesAbono(int ab);
  void set_cajasAlimento(int al);
  void reabastecer();
};

Almacen::Almacen(){
  Espacio(7,10,10);
  costalesAbono = 20;
  cajasAlimento = 20;
}
Almacen::Almacen(int c, float l, float a, int ab, int al){
  Espacio(c,l,a);
  costalesAbono = ab;
  cajasAlimento = al;
}

int Almacen::get_costalesAbono(){
  return costalesAbono;
}
int Almacen::get_cajasAlimento(){
  return cajasAlimento;
}
void Almacen::set_costalesAbono(int ab){
  costalesAbono = ab;
}
void Almacen::set_cajasAlimento(int al){
  cajasAlimento = al;
}
void Almacen::reabastecer(){
  set_inversion(get_inversion()-30*(capacidad-cajasAlimento)                         -25*(capacidad - costalesAbono));
  set_costalesAbono(capacidad);
  set_cajasAlimento(capacidad);
  //cajasAlimento = capacidad;
  //costalesAbono = capacidad;
}


#endif