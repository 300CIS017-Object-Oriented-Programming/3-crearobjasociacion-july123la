#include "Veterinario.h"
#include <iostream>

Veterinario::Veterinario(string name, int years){
    nombre = name;
    aniosExperiencia = years;
}

string Veterinario:: getNombre(){
    return nombre;
}

int Veterinario:: getAniosExperiencia(){
    return aniosExperiencia;
}

void Veterinario:: setAniosExperiencia(int anios){
    aniosExperiencia = anios;
}

void Veterinario:: setNombre(string nombre){
    this->nombre = nombre;
}