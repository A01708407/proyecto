#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Vehiculo.h"
using namespace std;

// Clase del gestor de ventas de los vehículos
class Vendedor {
    private:
    string nombre; // Nombre del vendedor
    int id; // Identificador único
    int ventas; // Contador de las ventas
public:
    Vendedor();
    Vendedor(string n, int i, int v);
    bool venderVehiculo(Vehiculo* vehiculo); // Venta por puntero
    bool venderVehiculo(string modelo); // Sobrecarga en venta por modelo
    string getNombre(); // Devuelve el nombre
    int getId(); // Devuelve el ID
    int getVentas(); // Devuelve las ventas totales
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