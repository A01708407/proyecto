#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "Vehiculo.h"
#include <iostream>
using namespace std;

class Motocicleta : public Vehiculo {
    double peso;
public:
    double calcularPrecio();
    string mostrarInfo();
};

double Motocicleta::calcularPrecio() {
    return precio + peso * 100;
}

string Motocicleta::mostrarInfo() {
    string m = Vehiculo::mostrarInfo();
    cout << "Peso: " << peso << endl;
    return m;
}

#endif
