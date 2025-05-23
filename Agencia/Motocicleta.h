#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include <array>
#include "Vehiculo.h"
#include "Rueda.h"
using namespace std;

class Motocicleta:public Vehiculo {
    double peso;
    array<Rueda, 2> ruedas;
public:
    double calcularPrecio();
    string mostrarInfo();
};

#endif