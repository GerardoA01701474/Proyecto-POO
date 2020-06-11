#ifndef GANADO_H
#define GANADO_H
#include <string>
#include "producto.h"

using namespace std;
class Ganado{
  protected:
  float peso;
  Especie especie;
  float valorVenta;

  public:
  Ganado();
  Ganado(Ganado &b);
  Ganado(float p, Especie es);
  ~Ganado();
  float get_peso();
  Especie get_especie();
  int get_valorVenta();
  void set_peso(float p);
  void set_especie(Especie es);
  void set_valorVenta(int v);
  //float calcular(Especie)
};

Ganado::Ganado(){
  peso = 70; 
  especie = PORCINO;
  valorVenta = 1820;
}
Ganado::Ganado(Ganado &b){
  peso = b.peso;
  especie = b.especie;
  valorVenta = b.especie;
}
Ganado::Ganado(float p, Especie es){
  peso = p;
  especie = es;
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
  valorVenta = porKilo * peso; 
}
Ganado::~Ganado(){
}
float Ganado::get_peso(){
  return peso;
}
Especie Ganado::get_especie(){
  return especie;
}
int Ganado::get_valorVenta(){
  return valorVenta;
}


#endif