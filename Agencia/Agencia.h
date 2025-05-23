#ifndef AGENCIA_H
#define AGENCIA_H

#include <list>
#include <string>
#include "Vehiculo.h"
#include "Vendedor.h"
using namespace std;

class Agencia {
    list<Vehiculo> inventario;
    list<Vendedor> empleados;
    string nombre;
    string direccion;
public:
    void agregarVehiculo(Vehiculo vehiculo);
    bool eliminarVehiculo(string modelo);
    void mostrarInventario();
    Vehiculo buscarVehiculo(string modelo);
};

#endif
