#ifndef CULTIVO_H
#define CULTIVO_H
#include "producto.h"
#include <string>

using namespace std;

class Cultivo : public Producto {
  protected:
  Especie especie;
  
  public:
  Cultivo();
  Cultivo(Cultivo &b);
  Cultivo(int h);
  void vender(Especie especie, int mes, int cantidad);
  void comprar(Especie especie, int mes, int cantidad);
};
Cultivo::Cultivo(){
  hectareas = 100;
}
Cultivo::Cultivo(Cultivo &b){
  hectareas = b.hectareas;
}
Cultivo::Cultivo(int h){
  hectareas = h;
}
void Cultivo::vender(Especie especie, int mes, int cantidad){
  
}
void Cultivo::comprar(Especie especie, int mes, int cantidad){

}



#endif