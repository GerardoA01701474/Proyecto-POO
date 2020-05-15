#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <string>
#include <cmath>
using namespace std;

class Triangulo {
  protected:
          float ladoA;
          float ladoB;
  public:
          Triangulo();
          Triangulo(float a, float b);
          float getLadoA();
          float getLadoB();
          void setLadoA(float a);
          void setLadoB(float b);
          float perimetro(float a, float b);
          float area(float a, float b);

};
Triangulo::Triangulo(){
        ladoA=1;
        ladoB=2;
}

Triangulo::Triangulo(float a, float b){
  ladoA=a;
  ladoB=b;
}
float Triangulo::getLadoA(){
  return ladoA;
}
float Triangulo::getLadoB(){
  return ladoB;
}
void Triangulo::setLadoA(float a){
  ladoA=a;
}
void Triangulo::setLadoB(float b){
  ladoB=b;
}
float Triangulo::perimetro(float a, float b){
  float peri;
  peri = (a*2)+b;
  return peri;
}
float Triangulo::area(float a, float b){
  float h;
  h= sqrt(pow(a,2)-pow(b/2,2));
  float area;
  area = b * h / 2;
  return area; 
}
#endif