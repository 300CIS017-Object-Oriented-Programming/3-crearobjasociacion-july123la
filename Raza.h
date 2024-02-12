#ifndef RAZA_H
#define RAZA_H

#include <string>
#include <iostream>


using namespace std;

class Raza{
private:
    string nombre;
    string paisOrigen;

public:
    Raza(string, string);
    string getNombre();
    string getPaisOrigen();
    void setNombre(string);
    void setPaisOrigen(string);
};

#endif