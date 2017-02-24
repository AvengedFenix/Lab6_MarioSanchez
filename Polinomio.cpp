#include <iostream>
#include <vector>
#include "Polinomio.h"
#include <sstream>

using namespace std;

Polinomio::Polinomio(){

}

Polinomio::Polinomio(int p){
  this->potencia = p;
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

int Polinomio::getCoeficiente(int a){
  return coeficientes[a];
}

string Polinomio::toString(){
  stringstream pol;
  for (int i = potencia; i > 0; i--) {
    pol << " + " << coeficientes[i]<<"x^"<<i;
  }//fin for
  return pol.str();
}

Polinomio::~Polinomio(){
  cout<<"Liberando memoria Polinomio"<<endl;
}
