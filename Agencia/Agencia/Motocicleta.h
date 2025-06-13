#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "Vehiculo.h"
#include <iostream>
using namespace std;

// Clase de moto con su peso específico
class Motocicleta : public Vehiculo {
    private:
    double peso; // Peso en kg
public:
    Motocicleta(string ma, string mo, int an, double pr, int cil, string tc, double p);
    double calcularPrecio(); // Calcula el precio dependiendo del peso
    string mostrarInfo(); // Regresa la información
};

Motocicleta::Motocicleta(string ma, string mo, int an, double pr, int cil, string tc, double p)
: Vehiculo(ma, mo, an, pr, cil, tc), peso(p) {
}

double Motocicleta::calcularPrecio() {
    return precio + peso * 100;
}

string Motocicleta::mostrarInfo() {
    string m = Vehiculo::mostrarInfo();
    cout << "Peso: " << peso << endl;
    return m;
}

#endif
