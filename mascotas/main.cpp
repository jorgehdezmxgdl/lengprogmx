#include <iostream>
#include "Animal.h" //invocacion a la clase
<<<<<<< HEAD
#include "FileManager.h"
=======
<<<<<<< HEAD
#include "FileManager.h"
=======
>>>>>>> 3ed1b6dbcea3de1736849df3e54f553262f39f45
>>>>>>> 35f02211c0d3914b31cc6f8ba180bb62d0b1661c
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
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======
*/
>>>>>>> 3ed1b6dbcea3de1736849df3e54f553262f39f45
>>>>>>> 35f02211c0d3914b31cc6f8ba180bb62d0b1661c
   Animal *scooby = new Perro("gran danes",
       "scooby doo",5);
   scooby->setLikes("toda la comida");
   scooby->info();
   delete scooby;
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 35f02211c0d3914b31cc6f8ba180bb62d0b1661c
*/
    FileManager *fileManager = new
           FileManager("block.txt");
    fileManager->writeData("Es un texto de prueba");
    fileManager->readData();
    delete fileManager;
<<<<<<< HEAD
=======
=======

>>>>>>> 3ed1b6dbcea3de1736849df3e54f553262f39f45
>>>>>>> 35f02211c0d3914b31cc6f8ba180bb62d0b1661c
    return 0;
}
