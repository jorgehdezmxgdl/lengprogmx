//
// Created by jfaus on 01/10/2026.
//

#include "Animal.h"

#include <iostream>
#include <ostream>
using namespace std;

Animal::Animal() {
    cout << "Invocando al constructor" << endl;
}
Animal::~Animal() {
    cout << "Invocando al destructor" << endl;
}
string Animal::getLikes() {
    return this->likes;
}
void Animal::setLikes(string likes) {
    this->likes = likes;
}
int Animal::getEdad() {
    return this->edad;
}
void Animal::setEdad(int edad) {
    this->edad = edad;
}

void Animal::info() const {
    cout << "Nombre: " << this->nombre << endl;
    cout << "Edad  : " << this->edad   << endl;
    cout << "Raza  : " << this->raza   << endl;
    cout << "Gustos: " << this->likes  << endl;
}
