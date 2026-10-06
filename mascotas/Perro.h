//
// Created by jfaus on 06/10/2026.
//

#ifndef MASCOTAS_PERRO_H
#define MASCOTAS_PERRO_H
#include <string>

#include "Animal.h"

class Perro : public Animal {
public:
    Perro();
    Perro(string raza, string nombre, int edad) :
        Animal(raza, nombre, edad) {}
    void emite_sonido() override;
};

#endif //MASCOTAS_PERRO_H
