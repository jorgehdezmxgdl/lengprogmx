#include <iostream>
#include "Animal.h" //invocacion a la clase

int main() {
   int edad;
   Animal* animal = new Animal(); //constructor

   cout << "Dame la edad del animal: " << endl;
   cin  >> edad; //capturar desde el teclado la edad del animal
   animal->setEdad(edad); //llamado a método
   cout << "El animal tiene de edad: " << animal->getEdad()
        << " anios" << endl;
   delete animal; // eliminar objeto
   return 0;
}