#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
#include <iostream>


using namespace std;

class Veterinario{
private:
    string nombre;
    int aniosExperiencia;

public:
    Veterinario(string, int);
    string getNombre();
    int getAniosExperiencia();
    void setNombre(string);
    void setAniosExperiencia(int);
};

#endif