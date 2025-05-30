#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
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

double Vehiculo::calcularPrecio() {
    return precio;
}

string Vehiculo::mostrarInfo() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << anio << endl;
    cout << "Precio base: " << precio << endl;
    cout << "Cilindrada: " << cilindrada << endl;
    cout << "Tipo de combustible: " << tipoCombustible << endl;
    return modelo;
}

#endif