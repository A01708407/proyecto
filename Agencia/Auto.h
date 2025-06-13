#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"
#include <iostream>
using namespace std;

// Clase de auto con su número de puertas
class Auto : public Vehiculo {
    int numPuertas; // número de puertas (2 ó 4)
public:
    Auto(string ma, string mo, int an, double pr, int cil, string tc, int puertas);
    double calcularPrecio(); // Calcula el precio dependiendo el número de puertas
    string mostrarInfo(); // Regresa la información
};

Auto::Auto(string ma, string mo, int an, double pr, int cil, string tc, int puertas)
: Vehiculo(ma, mo, an, pr, cil, tc), numPuertas(puertas) {
}

// Sobre escritura
double Auto::calcularPrecio() {
    return precio + numPuertas * 500;
}

// Sobre escritura
string Auto::mostrarInfo() {
    string m = Vehiculo::mostrarInfo();
    cout << "Número de puertas: " << numPuertas << endl;
    return m;
}

#endif