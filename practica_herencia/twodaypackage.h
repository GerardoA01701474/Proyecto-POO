//Gerardo Peña Pérez
//A01701474
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "package.h"
#include <string>

using namespace std;

class TwoDayPackage : public Package{
  protected:
float tarifaFija;

public:
TwoDayPackage();
TwoDayPackage(string d, string r, float p,float c, float tf);
float calculateCost();
};

TwoDayPackage::TwoDayPackage()
  : Package(), tarifaFija(3){
}

TwoDayPackage:: TwoDayPackage(string d, string r, float p,float c, float tf)
   : Package(d,r,p,c), tarifaFija(tf){
} 

float TwoDayPackage::calculateCost(){
  float p = peso;
  float c= costo;
  float tf= tarifaFija;
  return Package::calculateCost() + tf;
}



#endif