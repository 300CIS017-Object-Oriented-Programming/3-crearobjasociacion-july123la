//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
using namespace std;

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario(string nombre);
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre, std::string docIdentidad);
    void mostrarInfo();
    std::string getNombre();
    void setDocIdentidad(string doc);
    void setEdad(int edad);
    void setNombre(std::string nombre);



};


#endif //PROPIETARIO_H
