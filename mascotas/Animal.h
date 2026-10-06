//
// Created by jfaus on 01/10/2026.
//

#ifndef MASCOTAS_ANIMAL_H
#define MASCOTAS_ANIMAL_H
using namespace std;
#include <string>

class Animal {
private:
    string likes;
    int    edad;
public:
    Animal();  //constructor
    ~Animal(); //destructor
    string getLikes();
    void setLikes(string likes);
    int  getEdad();
    void setEdad(int edad);
    virtual void emite_sonido() = 0;
};


#endif //MASCOTAS_ANIMAL_H
