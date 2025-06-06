#include <iostream>
#include "Vehiculo.h"
#include "Auto.h"
#include "Motocicleta.h"
#include "Vendedor.h"
#include "Agencia.h"

using namespace std;

int main() {
    // Creamos algunos vehículos
    Vehiculo* v1 = new Auto("Toyota", "Corolla", 2022, 200000, 1600, "Gasolina", 4);
    Vehiculo* v2 = new Motocicleta("Honda", "CBR500R", 2021, 150000, 500, "Gasolina", 180);

    // Mostramos información y precios (métodos sobreescritos con virtual)
    cout << "--- Información de Vehículos ---" << endl;
    v1->mostrarInfo();
    cout << "Precio calculado: " << v1->calcularPrecio() << endl << endl;

    v2->mostrarInfo();
    cout << "Precio calculado: " << v2->calcularPrecio() << endl << endl;

    // Creamos un vendedor y registramos ventas
    Vendedor* vendedor1 = new Vendedor("Ana Gomez", 101, 0);
    vendedor1->venderVehiculo(v1);
    vendedor1->venderVehiculo("Corolla");

    cout << "\nVentas de " << vendedor1->getNombre() << ": " << vendedor1->getVentas() << " ventas." << endl;

    // Creación de la agencia y agregamos vehículos y vendedor
    Agencia agencia;
    agencia.agregarVehiculo(v1);
    agencia.agregarVehiculo(v2);
    agencia.agregarVendedor(vendedor1);

    cout << "\n--- Vehículos en la agencia ---" << endl;
    agencia.mostrarVehiculos();

    // Eliminamos un vehículo por modelo
    string modeloBuscar = "CBR500R";
    bool eliminado = agencia.eliminarVehiculo(modeloBuscar);
    if (eliminado) {
        cout << "\nVehículo con modelo " << modeloBuscar << " eliminado de la agencia." << endl;
    } else {
        cout << "\nNo se encontró el vehículo con modelo " << modeloBuscar << endl;
    }

    cout << "\n--- Vehículos restantes en la agencia ---" << endl;
    agencia.mostrarVehiculos();

    // Destructores
    delete v1;
    delete v2;
    delete vendedor1;

    return 0;
}
