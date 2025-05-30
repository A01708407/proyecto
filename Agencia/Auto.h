#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"
#include <iostream>
using namespace std;

class Auto:public Vehiculo {
    int numPuertas;
public:
    double calcularPrecio();
    string mostrarInfo();
};

double Auto::calcularPrecio() {
    return precio + numPuertas * 500;
}

string Auto::mostrarInfo() {
    string m = Vehiculo::mostrarInfo();
    cout << "Número de puertas: " << numPuertas << endl;
    return m;
}

#endif