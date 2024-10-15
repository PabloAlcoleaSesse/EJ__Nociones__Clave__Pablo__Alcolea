//
// Created by Pablo Alcolea Sesse on 14/10/24.
//
#include <iostream>
#include "funciones.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * r * r)



int main()
{
    std::cout << "¡Hola Mundo!" << std::endl;
    std::cout << "El resultado de la multiplicación de 3 y 5 es: " << multiplicacion(3,5)  << std::endl;
    std::cout<< "El area del circulo de radio 5cm es: " << AREA_CIRCULO(5) << " cmˆ2" << std::endl;
    return 0;
}
