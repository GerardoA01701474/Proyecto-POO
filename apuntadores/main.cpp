#include <iostream>
#include "grader.h"
using namespace std;

int main(int argc, char* argv[]) {
	Grader Correctas(string("112341423114322314231442314231223422"));
  Grader Estudiante(string("11 3 1133 22322314231432211231 34 2"));
  cout<<"Las respuestas correctas: " << Correctas.toString()<<endl;
  Correctas.score(Estudiante);
  Correctas.~Grader();
  Estudiante.~Grader();
}