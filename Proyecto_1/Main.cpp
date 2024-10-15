//
// Created by Pablo Alcolea Sesse on 14/10/24.
//

#include <iostream>
#include <Proyecto_1/Persona.h>
#include <Proyecto_1/Estudiante.h>

int suma(int a, int b){
    return a+b;
}
int g = 20;
int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona_1;
    persona_1.setNombre("Pablo") ;
    persona_1.setEdad(18);
    persona_1.setGenero("Masculino");

    Estudiante estudiante_1;
    estudiante_1.setNombre("Pablo");
    estudiante_1.setEdad(18);
    estudiante_1.setGenero("Masculino");
    estudiante_1.setGrado("Ingieneria Informatica") ;
    estudiante_1.mostrarDetalles();



    return 0;
}

