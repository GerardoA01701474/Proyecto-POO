#ifndef GRADER_H
#define GRADER_H

#include <iostream>
#include <sstream>

using namespace std;

class Grader{
  private:
  int *answer;
  int size;

  public: 
  Grader();
  Grader(const Grader &b);
  Grader(string ans);
  ~Grader();
  void score(const Grader &b);
  string toString() const;
};

Grader::Grader(){
size = 1; 
answer = new int [size];
answer[0] = 0;
}
Grader::Grader(const Grader &b){
  size = b.size;
  answer = new int [size];
  for (int i = 0; i < size; i++){
    answer[i] = b.answer[i];
  }
}
Grader::Grader(string ans){
  size = ans.size();
  answer = new int [size];
  int i, j = 0; 
	for (i = 0; i < size;  i++) {
		answer[j] = ans[i] - '0';
		j++;
}
}
Grader::~Grader() {
	delete [] answer;
	answer = 0;
	size = 0;
}
void Grader::score(const Grader &b){
  int cien = size*2;
  string nota;
  int grade = 0;
  //grade = new int[size];
  for (int i=0; i<size; i++){
    if (answer[i] != b.answer[i]){
      grade = grade - 1;
    } 
    else if(answer[i] = b.answer[i]){
      grade = grade + 2;
    }//cout<< grade<<endl;
  }

  delete [] answer;

  int aux = grade * 100 / cien;
  cout<< "porcentaje: "<<aux<<"%"<<endl;
  if (aux >= 90 && aux <= 100){
    nota = "A";
  }
  else if (aux >= 80 && aux < 90){
    nota = "B";
  } 
  else if (aux >= 70 && aux < 80){
    nota = "C";
  } 
  else if (aux >= 60 && aux < 70){
    nota = "D";
  } 
  else if (aux >= 50 && aux < 60){
    nota = "E";
  }   
  else if (aux >= 0 && aux < 50){
    nota = "F";
  } 
  else{
    nota = "";
  }
  cout <<"Puntaje: "<< grade <<endl;
  cout <<"Nota: "<< nota << endl;
}


string Grader::toString() const {
	stringstream output;

	for (int i = 0; i<size; i++) {
    output << answer[i];
	}
  //cout << output.str()<< endl;
	return output.str();
}

#endif