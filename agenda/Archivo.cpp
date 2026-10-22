//
// Created by jfaus on 15/10/2026.
//

#include "Archivo.h"
#include <string>
#include <fstream>
#include <iostream>

void Archivo::escribe_datos(Persona *persona) {
    string nombre=persona->getNombre();
    string correo=persona->getCorreo();
    string telefono=persona->getTelefono();
    ofstream archivo;
    archivo.open("archivo.txt",ios::app);
    if (archivo.is_open()) {
        archivo<<nombre<<endl;
        archivo<<correo<<endl;
        archivo<<telefono<<endl;
        archivo.close();
    }
}

void Archivo::busqueda(string nombre) {
    ifstream archivo;
    string nombre_leido, correo, telefono;
    bool presente = false;

    archivo.open("archivo.txt");
    if (archivo.is_open()) {
        while (getline(archivo,nombre_leido)) {
            if (!getline(archivo,correo)) {
                break;
            }
            if (!getline(archivo,telefono)) {
                break;
            }
           if (nombre_leido==nombre) {
               cout << "Persona encontrada" << endl;
               cout << "Nombre Persona: " << nombre_leido << endl;
               cout << "Correo:" << correo << endl;
               cout << "Telefono: " << telefono << endl;
               presente = true;
               //break; si solo deseamos mostrar el primero encontrado
           }
        }
        archivo.close();
    }
    if (!presente) {
       cout << "Persona no encontrada" << endl;
    }
}
