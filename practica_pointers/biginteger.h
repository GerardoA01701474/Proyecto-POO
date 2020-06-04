/*----------------------------------
 *
 * Laboratorio: Apuntadores en C++
 * Fecha: 29/05/2020
 * Autor: A01701474 Gerardo Peña Pérez
 *
 *----------------------------------*/
#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <string>
#include <iostream>
#include <sstream>
typedef unsigned uint;
using namespace std;

class BigInteger{
  private:
  int *arreglo;
  uint size;
  
  public:
  BigInteger();
  BigInteger(string num);
  BigInteger(const BigInteger &b);
  ~BigInteger();
  string add(BigInteger &b);
};
BigInteger(){
  size = 48;
  arreglo = new int[size];
}
BigInteger(const BigInteger &b){
  size = b.size;
  arreglo = new int[size];
}

BigInteger::BigInteger(string num){
  
  string aux;
  int aux1;
  size = num.length();
  arreglo = new int[size];
  for (int i = (size-1); i >= 0; i--){
    aux = num[i];
    aux1 = stoi(aux);
    arreglo[i] = aux1; 
  }
}
BigInteger::~BigInteger(){
  delete [] arreglo;
}

string BigInteger::add(BigInteger &b){
  max = (size > b.size)? size : b.size;
  int suma[max];
  for i = 0:max-1:i++{
    suma = arreglo[i] + b.arreglo[i];
  }
stringstream aux;
  max = (suma[max] == 0) ? max-1 : max;
   for (int i = max; i>= 0; i--){
     aux << suma[i];
   }
   return aux.str();
}

/*BigInteger* BigInteger::add(BigInteger &b){ 
  int *suma;       
  suma = new int[size];                
  for (int i = (size-1); i >= 0; i--){ 
    suma[i] = b.arreglo[i] + arreglo[i];
}
//BigInteger *total= new BigInteger(suma);
return suma;
}*/








/*string BigInteger::toString() const {
	stringstream aux;
	for (int i = 1; i <= size; i++) {
		aux << i;	
	}
	return aux.str();
}*/


#endif