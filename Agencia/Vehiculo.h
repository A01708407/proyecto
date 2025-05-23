#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int anio;
    double precio;
    int cilindrada;
    string tipoCombustible;
public:
    virtual double calcularPrecio();
    virtual string mostrarInfo();
};

#endif