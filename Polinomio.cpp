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

Polinomio Polinomio::operator+(Polinomio* p){
  vector<Polinomio*> poli;
  for (int i = 0; i < poli.size(); i++) {
  //  cout<<"ola"<<endl;
    cout<<i << ". " << poli.at(i)->toString()<<endl;
  }//fin for
  int o1, o2;
  cout<<"Seleccione el Polinomio que desea"<<endl;
  cin>>o1;
  cout<<"Seleccione el segundo Polinomio"<<endl;
  cin>>o2;
  if (poli[o1]->getPotencia() == poli[o2]->getPotencia()) {
  //  cout<<"entre"<<endl;
    stringstream respuesta;
    cout<<poli[o1]->getPotencia()<<poli[o2]->getPotencia()<<endl;

    for (int i = poli[o1]->getPotencia()-1; i > 0; i--) {
      //cout<<"entre 2";
      std::cout << poli.size() << '\n';
      int sum1 = poli.at(o1)->getCoeficiente(i);
      int sum2 = poli.at(o2)->getCoeficiente(i);
      int suma = sum1 + sum2;
      respuesta<< " + " << suma<<"x"<<"^"<<i;
    }//fin for
    cout<<"resultado: "<<respuesta.str()<<endl;
    //cout<<"termine"<<endl;
  } else if (poli[o1]->getPotencia() > poli[o2]->getPotencia()) {
    stringstream respuesta;
    int diferencia = poli[o1]->getPotencia() - poli[o2]->getPotencia();
    for (int i = poli[o1]->getPotencia()-1; i>=diferencia; i--) {
      respuesta<<poli[o1]->getCoeficiente(i)<<"x^"<<i<<" + ";
    }
    for (int i = poli[o2]->getPotencia()-1; i >= 0; i--) {
      int suma = poli[o1]->getCoeficiente(i) + poli[o2]->getCoeficiente(i);
      respuesta<<" + "<< suma<<"x"<<"^"<<i;
    }//fin for
    cout<<"respuesta: "<<respuesta.str()<<endl;
  }

}

Polinomio Polinomio::operator-(Polinomio* p){
  vector<Polinomio*> poli;
  for (int i = 0; i < poli.size(); i++) {
  //  cout<<"ola"<<endl;
    cout<<i << ". " << poli.at(i)->toString()<<endl;
  }//fin for
  int o1, o2;
  cout<<"Seleccione el Polinomio que desea"<<endl;
  cin>>o1;
  cout<<"Seleccione el segundo Polinomio"<<endl;
  cin>>o2;
  if (poli[o1]->getPotencia() == poli[o2]->getPotencia()) {
  //  cout<<"entre"<<endl;
    stringstream respuesta;
    cout<<poli[o1]->getPotencia()<<poli[o2]->getPotencia()<<endl;

    for (int i = poli[o1]->getPotencia()-1; i > 0; i--) {
      //cout<<"entre 2";
      std::cout << poli.size() << '\n';
      int sum1 = poli.at(o1)->getCoeficiente(i);
      int sum2 = poli.at(o2)->getCoeficiente(i);
      int suma = sum1 - sum2;
      respuesta<< " + " << suma<<"x"<<"^"<<i;
    }//fin for
    cout<<"resultado: "<<respuesta.str()<<endl;
    //cout<<"termine"<<endl;
  } else if (poli[o1]->getPotencia() > poli[o2]->getPotencia()) {
    stringstream respuesta;
    int diferencia = poli[o1]->getPotencia() - poli[o2]->getPotencia();
    for (int i = poli[o1]->getPotencia()-1; i>=diferencia; i--) {
      respuesta<<poli[o1]->getCoeficiente(i)<<"x^"<<i<<" + ";
    }
    for (int i = poli[o2]->getPotencia()-1; i >= 0; i--) {
      int suma = poli[o1]->getCoeficiente(i) - poli[o2]->getCoeficiente(i);
      respuesta<<" + "<< suma<<"x"<<"^"<<i;
    }//fin for
    cout<<"respuesta: "<<respuesta.str()<<endl;
}
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
  std::cout << "Aqui" << coeficientes.at(a) << '\n';
  return coeficientes.at(a);
}

string Polinomio::toString(){
  stringstream pol;
  for (int i = potencia-1; i >= 0; i--) {
    pol << " + " << coeficientes.at(i)<<"x^"<<i;
  }//fin for
  return pol.str();
}

Polinomio::~Polinomio(){
  cout<<"Liberando memoria Polinomio"<<endl;
}
