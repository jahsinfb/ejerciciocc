#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string>

class Mamifero {
private:
    std::string especie;
    std::string colorPelo;
    int cantidadDientes;

public:
    Mamifero();
    Mamifero(std::string especie, std::string colorPelo, int cantidadDientes);

    std::string getEspecie();
    void setEspecie(std::string especie);

    std::string getColorPelo();
    void setColorPelo(std::string colorPelo);

    int getCantidadDientes();
    void setCantidadDientes(int cantidadDientes);
};

#endif
