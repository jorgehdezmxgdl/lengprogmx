#include <iostream>

#include "Archivo.h"
#include "Persona.h"

void inserta_persona();
void buscar_persona();
void menu_principal();

int main() {
    menu_principal();
    return 0;
}

void inserta_persona() {
    Persona *persona=new Persona();
    Archivo *archivo=new Archivo();
    string dato;

    cout<<"Ingrese Nombre"<<endl;
    cin>>dato;
    persona->setNombre(dato);
    cout<<"Ingrese Telefono"<<endl;
    cin>>dato;
    persona->setTelefono(dato);
    cout<<"Ingrese Correo"<<endl;
    cin>>dato;
    persona->setCorreo(dato);
    archivo->escribe_datos(persona);
    delete archivo;
    delete persona;
    cout << "Informacion registrada..." << endl;
}

void buscar_persona() {
   string dato;
   cout << "Ingrese Nombre"<<endl;
   cin>>dato;
   Archivo *archivo=new Archivo();
   archivo->busqueda(dato);
   delete archivo;
}

void menu_principal() {
    char opcion;
    do {
      cout << "Agenda" << endl;
      cout << "1. Alta" << endl;
      cout << "2. Edicion" << endl;
      cout << "3. Eliminar" << endl;
      cout << "4. Listado General" << endl;
      cout << "5. Buscar persona" << endl;
      cout << "6. Salir" << endl;
      cin >> opcion;
      switch (opcion) {
          case '1':
              inserta_persona();
              break;
          case '5':
              buscar_persona();
              break;
      }
    } while (opcion != '6');
}