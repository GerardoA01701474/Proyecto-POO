#ifndef ESTABLO_H
#define ESTABLO_H
#include "producto.h"
#include "ganado.h"
#include <string>

using namespace std;

const int MAX = 50; 
class Establo : public Producto {
  protected:
  Especie especie;
  //Employee* employees[SIZE];
  Ganado* arregloGanado[MAX];
  int count; 
  public:
  Establo();
  Establo(Establo &b);
  Establo(int c);
  ~Establo();
  Especie get_especie();
  int get_count();
  void agregar(Ganado *b);
  void vender(int cantidad);
  void comprar(int cantidad);
};
Establo::Establo(){
  count = 0;
}
Establo::~Establo(){
  
}
void Establo::agregar(Ganado *b){
  if (count < MAX){
    arregloGanado[count] = b;
    count ++;
  }
}
/*Establo::Establo(int c){
  cabezas = c;
  arregloGanado = new Ganado[cabezas];
  for (int i=0; i< cabezas; i++){
    Ganado k;
    arregloGanado[i] = k; 
  }
}*/

Especie Establo::get_especie(){
  return especie;
}
int Establo::get_count(){
  return count;
}
void Establo::vender(int cantidad){
  float valor = arregloGanado[0]->get_valorVenta();//
  float total = valor * cantidad;
  Producto::set_inversion(Producto::get_inversion()+total);
  //borrar una sola localidad del arreglo
}
void Establo::comprar(int peso){
  int porKilo;
  if (especie == PORCINO){ //porcino
    porKilo = 26;
  }
  else if(especie == BOVINO){  //bovino
    porKilo = 50;
  }
  else if(especie == CAPRINO){  //caprino
    porKilo = 42;
  }
  float total = porKilo * peso; 
  Producto::set_inversion(Producto::get_inversion()-total);
  Ganado *k;
  agregar(k);
}



#endif