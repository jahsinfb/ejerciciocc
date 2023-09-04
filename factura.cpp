#include <iostream>
using namespace std;
 // Definición de la clase
class MiClase {
  private:
    int numero;
   public:
    // Constructor
    MiClase(int num) {
        numero = num;
    }
     // Método
    void imprimirNumero() {
        cout << "El número es: " << numero << endl;
    }
};
 int main() {
    // Crear un objeto de la clase MiClase
    MiClase objeto(5);
     // Llamar al método imprimirNumero
    objeto.imprimirNumero();
     return 0;
}