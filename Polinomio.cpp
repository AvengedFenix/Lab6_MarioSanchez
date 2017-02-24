#include <iostream>
#include <vector>
#include "Polinomio.h"

using namespace std;

Polinomio::Polinomio(){

}

Polinomio::Polinomio(int){

}

void Polinomio::setPotencia(int p){
  this->potencia=p;
}

void Polinomio::setCoeficiente(int c){
  this->coeficientes.push_back(c);
}

int Polinomio::getPotencia(){
  return potencia;
}

Polinomio::~Polinomio(){
  cout<<"Liberando memoria Polinomio"<<endl;
}
