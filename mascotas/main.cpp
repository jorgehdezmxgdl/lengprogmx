#include <iostream>
#include "Animal.h" //invocacion a la clase
#include "Perro.h"

int main() {
    /*
   int edad;
   Animal* animal = new Animal(); //constructor

   cout << "Dame la edad del animal: " << endl;
   cin  >> edad; //capturar desde el teclado la edad del animal
   animal->setEdad(edad); //llamado a método
   cout << "El animal tiene de edad: " << animal->getEdad()
        << " anios" << endl;
   delete animal; // eliminar objeto
*/
   Animal *scooby = new Perro("gran danes",
       "scooby doo",5);
   scooby->setLikes("toda la comida");
   scooby->info();
   delete scooby;

    return 0;
}
