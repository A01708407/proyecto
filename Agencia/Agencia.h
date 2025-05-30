#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>
#include <iostream>
#include "Vehiculo.h"
#include "Vendedor.h"
using namespace std;

class Agencia {
    Vehiculo** vehiculos;
    Vendedor** vendedores;
    string nombre;
    string direccion;
    int contadorVehiculos;
    int contadorVendedores;
public:
    Agencia();
    Agencia(Vehiculo** veh, Vendedor** ven, string n, string d, int cveh, int cven);
    void agregarVehiculo(Vehiculo* vehiculo);
    void agregarVendedor(Vendedor* vendedor);
    bool eliminarVehiculo(string& modelo);
    void mostrarVehiculos();
};

Agencia::Agencia()
: nombre(""), direccion(""), contadorVehiculos(0), contadorVendedores(0) {
    vehiculos = new Vehiculo*[100];
    vendedores = new Vendedor*[100];
}

Agencia::Agencia(Vehiculo** veh, Vendedor** ven, string n, string d, int cveh, int cven):vehiculos(veh), vendedores(ven), nombre(n), direccion(d), contadorVehiculos(cveh), contadorVendedores(cven) {}

void Agencia::agregarVehiculo(Vehiculo* vehiculo) {
    vehiculos[contadorVehiculos++] = vehiculo;
}

void Agencia::agregarVendedor(Vendedor* vendedor) {
    vendedores[contadorVendedores++] = vendedor;
}

bool Agencia::eliminarVehiculo(string& modelo) {
    for (int i = 0; i < contadorVehiculos; i++) {
        if (vehiculos[i]->mostrarInfo() == modelo) {
            for (int j = i; j < contadorVehiculos - 1; j++) {
                vehiculos[j] = vehiculos[j + 1];
            }
            contadorVehiculos--;
            return true;
        }
    }
    return false;
}

void Agencia::mostrarVehiculos() {
    for (int i = 0; i < contadorVehiculos; i++) {
        vehiculos[i]->mostrarInfo();
    }
}

#endif