#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <vector>

using namespace std;

class Persona
{
public:
    Persona();
    ~Persona();

    Persona(string personaNombre, string personaApellido, string personaDni);
    void setNombre(string value);
    void setApellidos(string value);
    void setDni(string value);

    string getNombre();
    string getApellidos();
    string getDni();

private:
    string nombre;
    string apellidos;
    string dni;


};

#endif // PERSONA_H
