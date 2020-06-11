#ifndef CULTIVO_H
#define CULTIVO_H
#include "producto.h"
#include <string>

class Cosecha{
  protected:
  float valorVenta;
  float toneladas;
  Especie especie;

  public:
  Cosecha();
  Cosecha(Cosecha &b);
  Cosecha(float t, Especie e);
  float get_valorVenta();
  float get_toneladas();
  Especie get_especie();
  void set_valorVenta(float v);
  void set_toneladas(float t);
  void set_especie(Especie e);
};
Cosecha::Cosecha(){
  toneladas = 100;
  especie = MAIZ;
  valorVenta = 400000;
}
Cosecha::Cosecha(Cosecha &b){
  toneladas = b.toneladas;
  especie = b.especie;
  valorVenta = b.valorVenta;
}
Cosecha::Cosecha(float t, Especie e){
  toneladas = t;
  especie = e;
  int porTonelada;
  if (especie == MAIZ){ 
    porTonelada = 4000;
  }
  else if(especie == FRIJOL){  
    porTonelada = 10000;
  }
  else if(especie == SORGO){  
    porTonelada = 3000;
  }
  valorVenta = porTonelada * toneladas; 
}
float Cosecha::get_valorVenta(){
  return valorVenta;
}
float Cosecha::get_toneladas(){
  return toneladas;
}
Especie Cosecha::get_especie(){
  return especie;
}
void Cosecha::set_valorVenta(float v){
  valorVenta = v;
}
void Cosecha::set_toneladas(float t){
  toneladas = t;
}
void Cosecha::set_especie(Especie e){
  especie = e;
}


#endif