#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"
#include <iostream>
using namespace std;

class Auto : public Vehiculo {
    int numPuertas;
public:
    Auto(string ma, string mo, int an, double pr, int cil, string tc, int puertas);

    double calcularPrecio();
    string mostrarInfo();
};

Auto::Auto(string ma, string mo, int an, double pr, int cil, string tc, int puertas)
: Vehiculo(ma, mo, an, pr, cil, tc), numPuertas(puertas) {
}

double Auto::calcularPrecio() {
    return precio + numPuertas * 500;
}

string Auto::mostrarInfo() {
    string m = Vehiculo::mostrarInfo();
    cout << "Número de puertas: " << numPuertas << endl;
    return m;
}

#endif