#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"

class Alumno : public Persona
{
public:
    Alumno();
    ~Alumno();
    Alumno(string personaNombre, string personaApellido, string personaDni);

    void setNotas(vector<int> m);
    void setNotas2(int m[3]);
    double getMedia();
    vector<int> getNotas();
    int getNotas2();
    string toString();
     int notas1[3];

     void setMedia(double value);


private:
     double media;
     vector<int> notas;
};


#endif // ALUMNO_H
