#ifndef PERSONAL_H
#define PERSONAL_H
#include "producto.h"
#include "almacen.h"
#include <string>

using namespace std;

class Personal{
  protected:
  int salario;

  public:
  Personal();
  Personal(int s);
  int get_salario();
  void set_salario(int s);
  void ponerAbono(Almacen &a);
  void alimentar(Almacen &a);
  void cobrar(Producto &a);
};

Personal::Personal(){
  salario = 700;
}
Personal::Personal(int s){
  salario = s;
}
int Personal::get_salario(){
  return salario;
}
void Personal::set_salario(int s){
  salario = s;
}
void Personal::ponerAbono(Almacen &a){
  a.set_costalesAbono(a.get_costalesAbono()-1);
}
void Personal::alimentar(Almacen &a){
  a.set_cajasAlimento(a.get_cajasAlimento()-1);
}
void Personal::cobrar(Producto &a){
  a.set_pagoEmpleados(a.get_pagoEmpleados()- get_salario());
}


#endif