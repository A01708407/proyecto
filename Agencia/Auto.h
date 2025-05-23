#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"
#include "Motor.h"
using namespace std;

class Auto:public Vehiculo {
    int numPuertas;
    Motor motor;
public:
    double calcularPrecio();
    string mostrarInfo();
};

#endif