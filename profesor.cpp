#include "profesor.h"
#include "alumno.h"

Profesor::Profesor()
{
     cout << "SOY EL PROFESOR" << endl;
}
Profesor::Profesor(string personaNombre, string personaApellido, string personaDni):Persona (personaNombre,personaApellido,personaDni)
{
     cout << "HOLA SOY EL PROFESOR " << personaNombre<<" Estos son mis Alumnos que luego les pondre las notas: "<< endl<< endl;

}






Alumno Profesor::AnhadirAlumno(string personaNombre, string personaApellido, string personaDni)
{
    Alumno a (personaNombre,personaApellido,personaDni);
    this->listaAlumnos.push_back(a);
    return a;

}


Alumno Profesor::setNotas(Alumno a,int n1,int n2,int n3)
{
    //pruebo con 2 vectores distintos
    vector<int> notas;
    int notas2 [3];

    notas2[0]=n1;
    notas2[1]=n2;
    notas2[2]=n3;
    notas.push_back(n1);

    notas.push_back(n2);
    notas.push_back(n3);

    double media=(n1+n2+n3)/3.0;
    a.setMedia(media);


    a.setNotas(notas);
    a.setNotas2(notas2);
     return  a;


}

 Alumno Profesor::setNotas(Alumno a,int n1,int n2)
 {
     //pruebo de las 2 formas
     int notas2 [3];
     notas2[0]=n1;
     notas2[1]=n2;
     notas2[2]=NULL;
     vector<int> notas;
     notas.push_back(n1);
     notas.push_back(n2);

     double media=(n1+n2)/2.0;
     a.setMedia(media);


     a.setNotas(notas);
     a.setNotas2(notas2);
      return  a;

 }
 Alumno Profesor::setNotas(Alumno a,int n1)
 {
     int notas2 [3];
     notas2[0]=n1;
     notas2[1]=NULL;
     notas2[2]=NULL;
     vector<int> notas;
     notas.push_back(n1);

     a.setMedia(n1);
     a.setNotas(notas);
      return  a;

 }

void Profesor:: imprimirVector()
{

    double media;


    for (int i =0;i<7;i=i+1) {

        Alumno aux=listaAlumnos[i];
        vector<int> vectorNotas = aux.getNotas();

        for (int i=0;i<vectorNotas.size();i++) {

        }

        if (vectorNotas.size()==1) {

            media=vectorNotas[1];

        }else if(vectorNotas.size()==2) {
            double totalNotas= vectorNotas[0]+vectorNotas[1];
            media= (double)totalNotas/2.0;

        }else {
            double totalNotas= vectorNotas[0]+vectorNotas[1]+vectorNotas[2];
            media= (double)totalNotas/3.0;

        }


        cout << aux.toString() << "  Media: "<< media << endl;
    }


}
void Profesor:: imprimirVector2()
{

    double media;


    //la nota de la variable nota de alumno es 1 pero devuelve un numero aleatorio
    cout<<"NOTA 1: "<<listaAlumnos[0].notas1[0]<<endl;

    for (int i =0;i<7;i=i+1) {

        Alumno aux=listaAlumnos[i];
        //el valor de media es completamente modificado y sin sentido.
        cout << aux.toString() << "  Media: "<< aux.getMedia() << endl;
    }


}
void Profesor:: mejorMedia()
{

    Alumno posicionMasNota;
    double auxiliarMedia=0;
    cout <<"MEJOR MEDIA  "<< endl;
    for (int i =0;i<7;i=i+1) {
        vector<int> vectorNotas = listaAlumnos[i].getNotas();
        if (vectorNotas[2]!=NULL){
            double totalNotas= vectorNotas[0]+vectorNotas[1]+vectorNotas[2];
            double media= (double)totalNotas/3.0;
            if (media>auxiliarMedia) {
                auxiliarMedia=media;
                posicionMasNota=listaAlumnos[i];
            }
        }
    }
  //  if (auxiliarMedia!=0) {
        cout << endl<<"EL ALUMNO CON MAS MEDIA ES: "<< posicionMasNota.getNombre()<<" Con una Nota Media de : "<<auxiliarMedia<< endl;
  //  }

}
void Profesor:: borrarLista()
{
    this->listaAlumnos.clear();
}
