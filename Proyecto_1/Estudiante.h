//
// Created by Pablo Alcolea Sesse on 14/10/24.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "Persona.h"

class Estudiante : public Persona {
    std::string grado;

public:
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrarDetalles();
};

#endif
