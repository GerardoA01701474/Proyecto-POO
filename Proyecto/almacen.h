#ifndef ALMACEN_H
#define ALMACEN_H
#include "producto.h"
//#include "dinero.h"
#include <string>

using namespace std;


class Almacen : public Producto{
  protected:
  int costalesAbono;
  int cajasAlimento;
  

  public:
  Almacen();
  Almacen(int cab, int cal, float pab, float pal);
  int get_costalesAbono();
  int get_cajasAlimento();
  void set_costalesAbono(int ab);
  void set_cajasAlimento(int al);
  void reabastecer();
};

Almacen::Almacen(){
  //Producto(340,100);
  precioAbono = 340;
  precioAlimento = 100;
  costalesAbono = 20;
  cajasAlimento = 20;
  capacidad = 50;
}
Almacen::Almacen(int cab, int cal, float pab, float pal){
  Producto(pab, pal);
  costalesAbono = cab;
  cajasAlimento = cal;
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
  float nuevaInversion = get_inversion()-get_precioAlimento()*(capacidad-cajasAlimento) -get_precioAbono()*(capacidad - costalesAbono);
  set_inversion(nuevaInversion);
  set_costalesAbono(capacidad);
  set_cajasAlimento(capacidad);
  //cajasAlimento = capacidad;
  //costalesAbono = capacidad;
}


#endif