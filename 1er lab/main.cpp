//Gerardo Peña Pérez 
//A01701474


#include <iostream>
#include <string>
#include "triangulo.h"

using namespace std;
int main(int argc, char* argv[]){
  Triangulo x;
  Triangulo y(20,30);
  cout << "perimetro de y = " << y.perimetro(y.getLadoA(),y.getLadoB())<<"\n";
  cout << "área de y = " << y.area(y.getLadoA(),y.getLadoB())<<"\n""\n"; 

  float a;
  cout << "tamaño de los lados iguales: ";
  cin >> a;
  x.setLadoA(a);

  float b;
  cout << "nueva Base: ";
  cin >> b;
  x.setLadoB(b);

  cout << "perimetro de x = " << x.perimetro(x.getLadoA(),x.getLadoB())<<"\n";
  if (a>b){
      cout << "área de x = " << x.area(x.getLadoA(),x.getLadoB())<<"\n";
  }
  else {
    cout << "el lado A debe ser mayor a la base para calcular su área";
  }

 

}
