#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>
using namespace std;

// Clase base abstracta para cualquier vehículo
class Vehiculo {
protected:
    string marca; // marca del vehículo
    string modelo; // modelo del vehículo
    int anio; // año de fabricación
    double precio; // precio base
    int cilindrada; // Cilindrada del motor
    string tipoCombustible; // Tipo de combustible (gasolina, diesel, etc)
public:
    Vehiculo();
    Vehiculo(string ma, string mo, int an, double pr, int cil, string tc);

    virtual double calcularPrecio() = 0; //Clase abstracta
    virtual string mostrarInfo() = 0; //Clase abstracta
    virtual ~Vehiculo() { }
};

Vehiculo::Vehiculo()
: marca(""), modelo(""), anio(0), precio(0.0), cilindrada(0), tipoCombustible("") {
}

Vehiculo::Vehiculo(string ma, string mo, int an, double pr, int cil, string tc)
: marca(ma), modelo(mo), anio(an), precio(pr), cilindrada(cil), tipoCombustible(tc) {
}

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