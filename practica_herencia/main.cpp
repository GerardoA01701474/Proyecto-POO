//Gerardo Peña Pérez
//A01701474
#include <iostream>
#include <string>
#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"
using namespace std;
int main(int argc, char* argv[]) {
	Package p("sender1", "recipient1", 10, 2.35);  
	TwoDayPackage t("sender2", "recipient2", 10, 2.35, 14.44); 
	OverNightPackage o("sender3", "recipient3", 10, 2.35, 5.0); 
	
	cout << "Cost package p: " << p.calculateCost() << "\n";
	cout << "Cost package t: " << t.calculateCost() << "\n";
	cout << "Cost package o: " << o.calculateCost() << "\n";
	return 0;
}