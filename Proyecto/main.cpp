#include <iostream>
#include <string>
#include "espacio.h"
#include "dinero.h"
#include "almacen.h"
using namespace std;

int main(int argc, char* argv[]) {
  Almacen A;
  A.get_capacidad();
  A.get_cajasAlimento();
  Dinero D;
  D.get_inversion();
  cout << "inversion en D: " << D.get_inversion() << "\n";
  cout << "cajas de alimento en A: " << A.get_cajasAlimento()
                                      << "\n";
  A.reabastecer();
  cout << "cajas de alimento en A: " << A.get_cajasAlimento()                                     <<"\n";
  cout << "inversion en D, despues: " << D.get_inversion() << "\n";  
}