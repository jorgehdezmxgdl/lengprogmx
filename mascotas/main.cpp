#include <iostream>
#include "Animal.h" //invocacion a la clase
<<<<<<< HEAD
#include "FileManager.h"
=======
>>>>>>> 3ed1b6dbcea3de1736849df3e54f553262f39f45
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
*/
>>>>>>> 3ed1b6dbcea3de1736849df3e54f553262f39f45
   Animal *scooby = new Perro("gran danes",
       "scooby doo",5);
   scooby->setLikes("toda la comida");
   scooby->info();
   delete scooby;
<<<<<<< HEAD
*/
    FileManager *fileManager = new
           FileManager("block.txt");
    fileManager->writeData("Es un texto de prueba");
    fileManager->readData();
    delete fileManager;
=======

>>>>>>> 3ed1b6dbcea3de1736849df3e54f553262f39f45
    return 0;
}
