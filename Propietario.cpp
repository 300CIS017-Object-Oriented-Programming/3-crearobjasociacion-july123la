//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"
//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

Propietario:: Propietario(string nombre){
    this->nombre = nombre;
}

string Propietario:: mostrarInfo(){
    string ans = nombre + ", " + docIdentidad + " y " + to_string(edad);
    cout<<nombre<<", "<<docIdentidad<<" y "<<edad<<endl;
    return ans;
}

int Propietario:: getEdad(){
    return edad;
}

string Propietario:: getDocIdentidad(){
    return docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario:: setEdad(int edad){
    this->edad = edad;
}

void Propietario::setDocIdentidad(string doc){
    docIdentidad = doc;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}