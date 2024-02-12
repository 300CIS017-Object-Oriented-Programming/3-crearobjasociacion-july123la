#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"


int main() {

    // Instanciar
    Raza* Napolitano = new Raza("Mastin Napolitano", "Italia");
    Raza* Maltes = new Raza("Maltes", "Italia");

    Perro* Baloo = new Perro("Baloo",3,"Yorki","Negro","Pequenio");
    Baloo -> ladrar();
    Baloo->agregarPropietario("Juliana", "1109184984");
    cout << Baloo->getPropietario()->getDocIdentidad()<<endl;
    Baloo->agregarVeterinario("Sandra",15);
    cout<<Baloo->getVeterinario()->getNombre()<<endl;

    Propietario* Amparo = new Propietario("Amparo");
    Amparo->setDocIdentidad("9620092465");
    Amparo->setEdad(75);
    Amparo->mostrarInfo();

    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    firulais.setcRaza(Napolitano);
    cout<<firulais.getcRaza()->getNombre()<<", "<<firulais.getcRaza()->getPaisOrigen()<<endl;

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    return 0;
}
