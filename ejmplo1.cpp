#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string nombre;
    int edad;
public:
    Animal(string n, int e) {
        nombre = n;
        edad = e;
    }
    virtual void sonido() {
        cout << "Este animal hace ruidos extraños" << endl;
    }
};

class Mamifero : public Animal {
protected:
    string pelaje;
    int cantidadDientes;
public:
    Mamifero(string n, int e, string p, int cd) : Animal(n, e) {
        pelaje = p;
        cantidadDientes = cd;
    }
    void sonido() {
        cout << "Este mamífero emite un sonido particular" << endl;
    }
};

class Ave : public Animal {
protected:
    string plumaje;
    int longitudAlas;
public:
    Ave(string n, int e, string pl, int la) : Animal(n, e) {
        plumaje = pl;
        longitudAlas = la;
    }
    void sonido() {
        cout << "Este ave emite un canto particular" << endl;
    }
};

class Reptil : public Animal {
protected:
    string tipoEscamas;
    bool venenoso;
public:
    Reptil(string n, int e, string te, bool v) : Animal(n, e) {
        tipoEscamas = te;
        venenoso = v;
    }
    void sonido() {
        cout << "Este reptil emite un sonido particular" << endl;
    }
};

int main() {
    Animal* animales[6];
    animales[0] = new Mamifero("Perro", 5, "Corto", 42);
    animales[1] = new Mamifero("Gato", 3, "Suave", 30);
    animales[2] = new Ave("Gallina", 2, "Plumaje suave", 20);
    animales[3] = new Ave("Canario", 1, "Plumaje brillante", 15);
    animales[4] = new Reptil("Cocodrilo", 10, "Rugoso", true);
    animales[5] = new Reptil("Lagartija", 2, "Liso", false);

    for (int i = 0; i < 6; i++) {
        cout << "Nombre: " << animales[i]->nombre << endl;
        cout << "Edad: " << animales[i]->edad << endl;
        animales[i]->sonido();
        cout << endl;
    }

    for (int i = 0; i < 6; i++) {
        delete animales[i];
    }

    return 0;
}