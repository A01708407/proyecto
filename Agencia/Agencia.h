#ifndef AGENCIA_H
#define AGENCIA_H

#include <string>
#include <iostream>
#include "Vehiculo.h"
#include "Vendedor.h"
using namespace std;

// Administra los vehículos y vendedores
class Agencia {
    Vehiculo** vehiculos; // Arreglo de punteros (dinámico) de vehículos
    Vendedor** vendedores; // Arreglo de vendedores (dinámico) de vendedores
    string nombre; // Nombre de la agencia
    string direccion; // Dirección de la agencia
    int contadorVehiculos; // Contador de Vehiculos
    int contadorVendedores; // Contador de Vendedores
public:
    Agencia();
    Agencia(Vehiculo** veh, Vendedor** ven, string n, string d, int cveh, int cven);

    void agregarVehiculo(Vehiculo* vehiculo); // Añade Vehículo
    void agregarVendedor(Vendedor* vendedor); // Añade Vendedor
    bool eliminarVehiculo(string& modelo); // Borra por modelo
    void mostrarVehiculos(); // Lista los vehículos
};

Agencia::Agencia()
: nombre(""), direccion(""), contadorVehiculos(0), contadorVendedores(0) {
    vehiculos = new Vehiculo*[100];
    vendedores = new Vendedor*[100];
}

Agencia::Agencia(Vehiculo** veh, Vendedor** ven, string n, string d, int cveh, int cven)
: vehiculos(veh), vendedores(ven), nombre(n), direccion(d), contadorVehiculos(cveh), contadorVendedores(cven) {
}

void Agencia::agregarVehiculo(Vehiculo* vehiculo) {
    if (contadorVehiculos < 100) {
        vehiculos[contadorVehiculos++] = vehiculo;
    } else {
        cout << "Error: No se puede agregar más vehículos, límite alcanzado." << endl;
    }
}

void Agencia::agregarVendedor(Vendedor* vendedor) {
    if (contadorVendedores < 100) {
        vendedores[contadorVendedores++] = vendedor;
    } else {
        cout << "Error: No se puede agregar más vendedores, límite alcanzado." << endl;
    }
}

bool Agencia::eliminarVehiculo(string& modelo) {
    for (int i = 0; i < contadorVehiculos; i++) {
        if (vehiculos[i]->mostrarInfo() == modelo) {
            // desplazamos hacia atrás
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