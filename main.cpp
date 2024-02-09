#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar

    Perro* Baloo = new Perro("Baloo",3,"Yorki","Negro","Pequenio");
    Baloo -> ladrar();

    Propietario* Amparo = new Propietario("Amparo");
    Amparo->setDocIdentidad("9620092465");
    Amparo->setEdad(75);
    
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    return 0;
}
