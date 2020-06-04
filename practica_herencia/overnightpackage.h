//Gerardo Peña 
//A01701474
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "package.h"
#include <string>

using namespace std;

class OverNightPackage : public Package{
  protected:
  float tarifaFija;

  public:
  OverNightPackage();
  OverNightPackage(string d, string r, float p,float c, float tf);
  float calculateCost();
};

OverNightPackage::OverNightPackage()
  : Package(), tarifaFija(3) { 
}
OverNightPackage::OverNightPackage(string d, string r, float p,float c, float tf) 
  : Package(d,r,p,c), tarifaFija(tf){
}

float OverNightPackage::calculateCost(){
  float p = peso;
  float c= costo;
  float tf= tarifaFija;
  return Package::calculateCost() + (tf*p);
}

#endif