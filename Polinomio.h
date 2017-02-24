#pragma once
#include <vector>
#include <sstream>

using namespace std;

class Polinomio{
  private:
    int potencia;
    vector<int> coeficientes;

  public:
    Polinomio();
    Polinomio(int);
    void setPotencia(int);
    void setCoeficiente(int);
    int getPotencia();
    int getCoeficiente(int);
    string toString();
    ~Polinomio();
};
