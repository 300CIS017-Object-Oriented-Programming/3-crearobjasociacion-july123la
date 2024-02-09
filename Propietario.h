//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>
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
    /*La implementación de agregarPropietario le asigna a la variable de tipo Propietario* un nuevo objeto que utiliza el constructor que solo recibe 2 parametros.
    Utiliza el new por lo que el atributo no es un objeto directamente, es un apuntador hacia el objeto, de esta manera se relacionan entre sí mas que uno contenga al otro.*/

    string mostrarInfo();
    std::string getNombre();
    string getDocIdentidad();
    void setDocIdentidad(string doc);
    void setEdad(int edad);
    void setNombre(std::string nombre);



};


#endif //PROPIETARIO_H
