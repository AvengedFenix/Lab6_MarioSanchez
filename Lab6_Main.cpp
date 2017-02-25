#include <iostream>
#include <vector>
#include "Polinomio.h"
#include <string>
#include <sstream>

using namespace std;

int main(){
  //Polinomio* p;
  vector<Polinomio*> poli;
  char resp ='s';
  while(resp == 's'){
    cout<<"Ingrese la opcion que desea\n1. Crear Polinomio\n2. Sumar\n3. Restar\n4. Dividir\n5. Factor comun\n6. Evaluar si dos fonciones son iguales\n7. Evaluar si son diferentes\n8. Flujo de salida"<<endl;
    int op;
    cin>>op;
    switch (op) {
      case 1:{
        cout<<"Ingrese la potencia maxima del Polinomio"<<endl;
        int pot;
        cin>>pot;
        poli.push_back(new Polinomio(pot));
        for (int i = 0; i < pot; i++) {
          cout<<"Ingrese el coeficiente"<<endl;
          int num;
          cin>>num;
          poli[poli.size()-1]->setCoeficiente(num);
          std::cout << poli[0]->getCoeficiente(i) << '\n';
        }//Fin for
        break;
      }//fin case 1
      case 2:{
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
        break;
      }//fin case 2
      case 3:{
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
      }//fin case 3
      case 4:{
        for (int i = 0; i < poli.size()-1; i++) {
          cout<<poli[i]<<endl;
        }//fin for
        int o1, o2;
        cout<<"Seleccione el Polinomio que desea"<<endl;
        cin>>o1;
        cout<<"Seleccione el segundo Polinomio"<<endl;
        cin>>o2;
        break;
      }//fin case 4
      case 8:{
        for (int i = 0; i < poli.size(); i++) {
          cout<<i << ". " << poli.at(i)->toString()<<endl;
        }//fin for
        break;
      }//fin case 8
    }//fin switch

  }//Fin while
}
}
