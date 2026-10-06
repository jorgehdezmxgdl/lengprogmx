//
// Created by jfaus on 06/10/2026.
//

#include "Perro.h"

#include <iostream>
using namespace std;

Perro::Perro() {
    cout << "Invocando al constructor del Perro" << endl;
}

void Perro::emite_sonido() {
    cout << "Guau, guau y guau!" << endl;
}
