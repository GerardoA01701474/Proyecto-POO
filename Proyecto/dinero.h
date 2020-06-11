#ifndef DINERO_H
#define DINERO_H
#include "almacen.h"
#include <string>

using namespace std;
/*IMPORTANTE:  esta clase ya no será usada, la dejé aquí para usarla como referencia para algunos métodos de la clase producto.*/
class Dinero{
  protected:
  float pagoEmpleados;
  float inversion;

  public:
  Dinero();
  Dinero(float p, float i);
  void set_pagoEmpleados(float p);
  void set_inversion(float i);
  float get_pagoEmpleados();
  float get_inversion();
};
Dinero::Dinero(){
  pagoEmpleados = 17000;
  inversion = 17000;
}
Dinero::Dinero(float p, float i){
  pagoEmpleados = p;
  inversion = i;
}
void Dinero::set_pagoEmpleados(float p){
  pagoEmpleados = p;
}
void Dinero::set_inversion(float i){
  inversion = i;
}
float Dinero::get_pagoEmpleados(){
  return pagoEmpleados;
}
float Dinero::get_inversion(){
  return inversion;
}




#endif