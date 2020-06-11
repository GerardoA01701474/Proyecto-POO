#include <iostream>
#include <string>
#include "producto.h"
#include "personal.h"
#include "almacen.h"
#include "ganado.h"
#include "cultivo.h"
#include "establo.h"
#include "cosecha.h"
using namespace std;

int main(int argc, char* argv[]) { 
  Almacen A;
  cout<< "capacidad: "<<A.get_capacidad()<<endl;
  cout << "precio alimento: "<<A.get_precioAlimento()<<endl;
  //Producto N;
  cout << "inversion en A: " << A.get_inversion() << "\n";
  cout << "cajas de alimento en A: " << A.get_cajasAlimento()
                                      << "\n"<<endl;
  A.reabastecer();
  cout << "cajas de alimento en A: " << A.get_cajasAlimento()                                     <<"\n";
  cout << "inversion en A, despues: " << A.get_inversion() << "\n";  
  Personal P;
  P.cobrar(A);
  cout << "destinado a pagos: "<< A.get_pagoEmpleados()<<endl;
  Establo E;
  cout << "cantidad de "<<E.get_especie()<<"en el establo E: "<< E.get_count() <<endl;
  E.comprar(20);
  cout << "cantidad de "<<E.get_especie()<<"en el establo E: "<<E.get_count() <<endl;
  E.vender(1);
  cout << "cantidad de "<<E.get_especie()<<"en el establo E: "<<E.get_count() <<endl;
  cout << "inversion en E: " << E.get_inversion() << "\n";
  cout << "inversion en A: " << A.get_inversion() << "\n"; 
}