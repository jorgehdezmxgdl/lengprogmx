//
// Created by jfaus on 15/10/2026.
//

#ifndef AGENDA_PERSONA_H
#define AGENDA_PERSONA_H
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    string correo;
    string telefono;
    public:
    Persona(string nombre, string correo, string telefono):nombre(nombre), correo(correo), telefono(telefono) {}
    Persona(){};
    string getNombre();
    string getCorreo();
    string getTelefono();
    void setNombre(string nombre);
    void setCorreo(string correo);
    void setTelefono(string telefono);
};


#endif //AGENDA_PERSONA_H
