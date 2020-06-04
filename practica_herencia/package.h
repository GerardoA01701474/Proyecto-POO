#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

using namespace std;

class Package{
  protected:
string destinatario;
string remitente;
float peso;
float costo; 

 public:
Package();
Package(string d, string r, float p, float c);
float calculateCost();
};
Package::Package(){
  destinatario= "desconocido";
  remitente="desconocido";
  peso= 0;
  costo=0;
}
Package::Package(string d, string r,float p, float c){
destinatario= d;
remitente=r;
if (p >= 0){
  peso= p;
}
else {
  peso = p*-1;
}
if (c >= 0){
  costo= c;
}
else {
  costo = c*-1;
};

}
float Package::calculateCost(){
  float p;
  float c;
  p=peso;
  c=costo;
  return p*c;
}




#endif