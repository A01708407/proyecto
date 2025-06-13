#include <iostream>
#include "Vehiculo.h"
#include "Auto.h"
#include "Motocicleta.h"
#include "Vendedor.h"
#include "Agencia.h"

using namespace std;

int main() {
    string marca, modelo, tipo, nombre;
    int anio, cilindrada, puertas, id;
    double precio, peso;
    int op = -1;

    // Inicialización
    Agencia agencia;
    Vendedor* vendedor;  // Puntero a vendedor sin valor

    // Registrar vendedor
    cout << "Ingresa nombre del vendedor: ";
    cin >> nombre;
    cout << "Ingresa ID del vendedor: ";
    cin >> id;
    vendedor = new Vendedor(nombre, id, 0);
    agencia.agregarVendedor(vendedor);

    // Menú principal
    while (op != 0) {
        cout << "\n1. Agregar auto\n";
        cout << "2. Agregar motocicleta\n";
        cout << "3. Vender vehículo\n";
        cout << "4. Mostrar vehículos\n";
        cout << "5. Eliminar vehículo\n";
        cout << "6. Mostrar ventas vendedor\n";
        cout << "0. Salir\n";
        cout << "Elige opción: ";
        cin >> op;

        if (op == 1) {
            // Agregar auto
            cout << "Ingresa marca modelo año precio cilindrada tipoCombustible numPuertas: ";
            cin >> marca >> modelo >> anio >> precio >> cilindrada >> tipo >> puertas;
            Vehiculo* a = new Auto(marca, modelo, anio, precio, cilindrada, tipo, puertas);
            agencia.agregarVehiculo(a);
        }
        else if (op == 2) {
            // Agregar motocicleta
            cout << "Ingresa marca modelo año precio cilindrada tipoCombustible peso: ";
            cin >> marca >> modelo >> anio >> precio >> cilindrada >> tipo >> peso;
            Vehiculo* m = new Motocicleta(marca, modelo, anio, precio, cilindrada, tipo, peso);
            agencia.agregarVehiculo(m);
        }
        else if (op == 3) {
            // Vender y eliminar vehículo
            cout << "Ingresa modelo a vender: ";
            cin >> modelo;
            if (vendedor->venderVehiculo(modelo)) {
                agencia.eliminarVehiculo(modelo);
                cout << "Venta exitosa y vehículo removido.\n";
            } else {
                cout << "Venta fallida.\n";
            }
        }
        else if (op == 4) {
            // Mostrar vehículos
            cout << "--- Vehículos ---\n";
            agencia.mostrarVehiculos();
        }
        else if (op == 5) {
            // Eliminar vehículo directamente
            cout << "Ingresa modelo a eliminar: ";
            cin >> modelo;
            if (agencia.eliminarVehiculo(modelo)) {
                cout << "Vehículo eliminado.\n";
            } else {
                cout << "No encontrado.\n";
            }
        }
        else if (op == 6) {
            // Mostrar ventas
            cout << "Ventas de " << vendedor->getNombre()
                 << ": " << vendedor->getVentas() << "\n";
        }
        else if (op == 0) {
            // Salir
            cout << "Saliendo...\n";
        }
        else {
            cout << "Opción inválida.\n";
        }
    }
    return 0;
}