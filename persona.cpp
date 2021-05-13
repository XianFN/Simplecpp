#include "persona.h"

Persona::Persona()
{

}
Persona::~Persona()
{

}
Persona::Persona(string personaNombre, string personaApellido, string personaDni)
{
    this->nombre = personaNombre;
    this->apellidos = personaApellido;
    this->dni = personaDni;
}

void Persona::setNombre(string value)
{
    nombre = value;
}
void Persona::setApellidos(string value)
{
    apellidos = value;
}
void Persona::setDni(string value)
{
    dni = value;
}

string Persona::getNombre()
{
    return nombre;
}
string Persona::getApellidos()
{
    return apellidos;
}
string Persona::getDni()
{
    return dni;
}

