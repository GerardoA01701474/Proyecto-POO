#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
enum especie {PORCINO,BOVINO,CAPRINO,MAIZ,FRIJOL,SORGO};
typedef enum especie Especie;

using namespace std;

class Producto{
  protected:
  int cabezas;
  int hectareas;
  float precioAbono;
  float precioAlimento;
  int pagoEmpleados;
  float inversion;
  int capacidad;

  public:
  Producto();
  Producto(float pab, float pal);
  Producto(const Producto &b);
  void set_cabezas(int c);
  void set_hectareas(int h);
  void set_precioAbono(float pab);
  void set_precioAlimento(float pal);
  void set_pagoEmpleados(int pe);
  void set_inversion(float inv);
  int get_cabezas();
  int get_hectareas();
  float get_precioAbono();
  float get_precioAlimento();
  int get_pagoEmpleados();
  float get_inversion();
  //virtual void vender(Especie especie, int mes, int cantidad);
  //virtual void comprar(Especie especie, int mes, int cantidad);
  int get_capacidad();
  void set_capacidad(int c);
};

Producto::Producto(){
  cabezas = 0;
  hectareas = 0;
  precioAbono = 340;
  precioAlimento = 340;
  pagoEmpleados = 700;
  inversion = 70000;
}
Producto::Producto(float pab, float pal){
  precioAbono = pab;
  precioAlimento = pal;
}
Producto::Producto(const Producto &b){
  cabezas = b.cabezas;
  hectareas = b.hectareas;
  precioAbono = b.precioAbono;
  precioAlimento = b.precioAlimento;
  pagoEmpleados = b.pagoEmpleados;
  inversion = b.inversion;
}
void Producto::set_cabezas(int c){
  cabezas = c;
  }
void Producto::set_hectareas(int h){
  hectareas = h;
}
void Producto::set_precioAbono(float pab){
  precioAbono = pab;
}
void Producto::set_precioAlimento(float pal){
  precioAlimento = pal;
}
void Producto::set_pagoEmpleados(int pe){
  pagoEmpleados = pe;
}
void Producto::set_inversion(float inv){
  inversion = inv;
}
int Producto::get_cabezas(){
  return cabezas;
}
int Producto::get_hectareas(){
  return hectareas;
}
float Producto::get_precioAbono(){
  return precioAbono;
}
float Producto::get_precioAlimento(){
  return precioAlimento;
}
int Producto::get_pagoEmpleados(){
  return pagoEmpleados;
}
float Producto::get_inversion(){
  return inversion;
}
int Producto::get_capacidad(){
  return capacidad;
}
void Producto::set_capacidad(int c){
  capacidad = c;
}
/*void Producto::vender(Especie especie, int mes, int cantidad){
  
}
void Producto::comprar(Especie especie, int mes, int cantidad){

}*/

#endif