#include "Raza.h"
#include <iostream>

Raza::Raza(string name, string pais){
    nombre = name;
    paisOrigen = pais;
}

string Raza:: getNombre(){
    return nombre;
}

string Raza:: getPaisOrigen(){
    return paisOrigen;
}

void Raza:: setPaisOrigen(string pais){
    paisOrigen = pais;
}

void Raza:: setNombre(string nombre){
    this->nombre = nombre;
}