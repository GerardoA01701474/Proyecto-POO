/*----------------------------------
 *
 * Laboratorio: Apuntadores en C++
 * Fecha: 29/05/2020
 * Autor: A01701474 Gerardo Peña Pérez
 *
 *----------------------------------*/

#include <string>
#include <iostream>
#include <sstream>
#include "prueba.h"
typedef unsigned uint;
using namespace std;

#include <iostream>
#include <string.h>
#include "prueba.h"

using namespace std;

int main(int argc, char* argv[])
{
  BigInteger *c;
  //Aquí van los números que quiera sumar
  BigInteger a("3562138565");
  BigInteger b("2147483647");

  //a.MostrarNumero();
  //b.MostrarNumero();

  //Aquí se suman
  c=a.Add(b);

  //Linberamos espacio
  a.~BigInteger();
  b.~BigInteger();
  //cout<<c;

  //Resultado
  c->MostrarNumero();

  return 0;
}




                                          //prueba del for loop
  /*
  string num = "732792";
  int size;
  string aux;
  int aux1;
  size = num.length();
  cout << "tamaño: " << size<< endl;
  int arreglo[size];
  for (int i = 0; i <= (size-1); i++){
    aux = num[i];
    aux1 = stoi(aux);
    arreglo[i] = aux1;
    cout<< arreglo[i];
  }

  cout <<endl<< "el arreglo de enteros es: "<< arreglo<<endl; */


