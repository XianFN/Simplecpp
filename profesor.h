#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include "alumno.h"

class Profesor : public Persona
{
private:
    vector<Alumno> listaAlumnos;
    int a;
public:
    Profesor();
    Profesor(string personaNombre, string personaApellido, string personaDni);
    Alumno AnhadirAlumno(string personaNombre, string personaApellido, string personaDni);
    Alumno setNotas(Alumno a, int n1,int n2, int n3);
    Alumno setNotas(Alumno a, int n1,int n2);
    Alumno setNotas(Alumno a, int n1);
    void imprimirVector();
     void imprimirVector2();
    void mejorMedia();
    void borrarLista();

};

#endif // PROFESOR_H
