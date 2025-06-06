#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Vehiculo.h"
using namespace std;

class Vendedor {
    string nombre;
    int id;
    int ventas;
public:
    Vendedor();
    Vendedor(string n, int i, int v);
    bool venderVehiculo(Vehiculo* vehiculo);
    bool venderVehiculo(string modelo); // Sobrecarga
    string getNombre();
    int getId();
    int getVentas();
};

Vendedor::Vendedor()
: nombre(""), id(0), ventas(0) {
}

Vendedor::Vendedor(string n, int i, int v)
: nombre(n), id(i), ventas(v) {
}

bool Vendedor::venderVehiculo(Vehiculo* vehiculo) {
    ventas++;
    return true;
}

bool Vendedor::venderVehiculo(string modelo) {
    cout << "Venta registrada del vehículo modelo: " << modelo << endl;
    ventas++;
    return true;
}

string Vendedor::getNombre() {
    cout << nombre << endl;
    return nombre;
}

int Vendedor::getId() {
    cout << id << endl;
    return id;
}

int Vendedor::getVentas() {
    cout << ventas << endl;
    return ventas;
}

#endif