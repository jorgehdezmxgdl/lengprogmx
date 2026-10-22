//
// Created by jfaus on 13/10/2026.
//

#include "FileManager.h"

#include <iostream>
#include <fstream>
using namespace std;

/*
* std::ios::app: Añade el contenido al final del archivo en lugar de sobrescribirlo.
* std::ios::trunc: Borra el contenido previo del archivo si ya existe (es el valor por defecto).
* std::ios::binary: Abre el archivo en modo binario.
*/

FileManager::~FileManager() {
    cout << "El objeto se ha eliminado" << endl;
}

void FileManager::writeData(char *information) const {
    ofstream myfile;
    myfile.open(this->NOMBRE_ARCHIVO, ios::app);
    if (myfile.is_open()) {
        myfile << information << "\n";
        myfile.close();
    }
}

void FileManager::readData() const {
    ifstream file(this->NOMBRE_ARCHIVO, ios::in);
    string line;
    while(!file.eof()){
        getline(file, line);
        cout << line << endl;
    }
    file.close();
}

