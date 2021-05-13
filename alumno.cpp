#include "alumno.h"

Alumno::Alumno()
{

}
Alumno::~Alumno()
{

}
Alumno::Alumno(string personaNombre, string personaApellido, string personaDni):Persona (personaNombre,personaApellido,personaDni)
{
cout << "SOY EL ALUMNO " << personaNombre <<" "<<personaApellido<< " Con DNI : "<<personaDni<< endl;

}




double Alumno::getMedia()
{
    //el valor que recibe con el get que lo muestra por pantalla, luego la que muestra es completamente diferente
   cout<<"SACO LA MEDIA QUE ES:  "<<media<<endl;
   return media;
}

vector<int> Alumno::getNotas()
{

    return this->notas;
}

string Alumno::toString()
{



    return getNombre()+" "+getApellidos()+" DNI: "+getDni()+" Mis Notas son ";
}



void Alumno::setMedia(double value)
{
    cout<<"RECIBO EL VALOR : "<<value<<"PARA EL VALOR MEDIA COMO ATRIBUTO DE ALUMNO"<<endl;
    media = value;

}
void Alumno::setNotas(vector<int> m){

    this->notas = m;


}
void Alumno::setNotas2(int m[3]){

    this->notas1[0]=m[0];
     this->notas1[1]=m[1];
    this->notas1[2]=m[2];
//Aquí me guarda las notas de forma correcta, pero luego al pedirlas con el get cambia completamente el valor



}
