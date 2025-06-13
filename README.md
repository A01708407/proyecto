# Proyecto Inventario Agencia de Autos
Este proyecto implementa un sistema orientado a objetos en C++ para la gestión de una agencia de vehículos. Permite registrar autos y motocicletas, asignarlos a vendedores, calcular precios y eliminar vehículos según su modelo.

# Casos que harían que el proyecto deje de funcionar o produciría resultados incorrectos:

1. Entrada no válida en el menú:
   - Si el usuario escribe letras, enter sin número, etc., el programa se puede cometer errores.
2. Más de 100 vehículos o vendedores:
   - Los arreglos tienen tamaño fijo (100). Si se sobrepasan, puede haber un error.
3. Uso de punteros antes de su inicialización:
   - Si se intenta acceder a vendedor o vehículo antes de que sea inicializado, se produce un error.
4. Aceptación de valores inválidos:
   - Se aceptan valores inválidos como precios negativos, cilindrada 0 o IDs repetidos.
