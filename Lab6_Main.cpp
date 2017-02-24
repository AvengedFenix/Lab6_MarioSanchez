#include <iostream>
#include <vector>
#include "Polinomio.h"

using namespace std;

int main(){
  Polinomio* p;
  vector<Polinomio*> poli;
  char resp ='s';
  while(resp == 's'){
    cout<<"Ingrese la opcion que desea\n1. Crear Polinomio\n2. Sumar\n3. Restar\n 4. Dividir\n5. Factor comun\n6. Evaluar si dos fonciones son iguales\n 7. Evaluar si son diferentes\n8. Flujo de salida";
    int op;
    cin>>op;
    switch (op) {
      case 1:{
        cout<<"Ingrese la potencia maxima del Polinomio"<<endl;
        int pot;
        cin>>pot;
        poli.push_back(p = new Polinomio(pot));
        for (int i = 0; i < pot; i++) {
          cout<<"Ingrese el coeficiente"<<endl;
          int num;
          poli[0]->setCoeficiente(num);
        }//Fin for
      }//fin case 1
    }//fin switch

  }//Fin while
}
