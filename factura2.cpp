#include <iostream>
#include <string>
using namespace std;
 // Definición de la clase Cliente
class Cliente {
private:
    string nombre;
    string direccion;
    int telefono;
public:
    // Constructor
    Cliente(string nombre, string direccion, int telefono) {
        this->nombre = nombre;
        this->direccion = direccion;
        this->telefono = telefono;
    }
     // Método para mostrar los datos del cliente
    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Dirección: " << direccion << endl;
        cout << "Teléfono: " << telefono << endl;
    }
};
 // Clase Facturacion
class Facturacion {
private:
    Cliente cliente;
    string producto;
    float precio;
public:
    // Constructor
    Facturacion(Cliente cliente, string producto, float precio) {
        this->cliente = cliente;
        this->producto = producto;
        this->precio = precio;
    }
     // Método para generar la factura
    void generarFactura() {
        cout << "----- FACTURA -----" << endl;
        cliente.mostrarDatos();
        cout << "Producto: " << producto << endl;
        cout << "Precio: $" << precio << endl;
        cout << "-------------------" << endl;
    }
};
 int main() {
    // Crear un objeto de la clase Cliente
    Cliente cliente("Juan Perez", "Calle 123, Ciudad", 123456789);
     // Crear un objeto de la clase Facturacion
    Facturacion factura(cliente, "Producto A", 100.50);
     // Generar la factura
    factura.generarFactura();
     return 0;
}