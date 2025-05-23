#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Vehiculo.h"
using namespace std;

class Vendedor {
    string nombre;
    int id;
public:
    bool venderVehiculo(Vehiculo vehiculo);
};

#endif