#include <iostream>
#include "grader.h"
using namespace std;

int main(int argc, char* argv[]) {
	Grader Correctas(string("123456789"));
  Grader Estudiante(string("A01701474"),string("123456 89"));
  cout<<"Las respuestas correctas son: " << Correctas.toString()<<endl;
  Correctas.score(Estudiante);
  Correctas.~Grader();
  Estudiante.~Grader();
}