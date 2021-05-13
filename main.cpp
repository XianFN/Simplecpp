#include <QCoreApplication>
#include <iostream>
#include <persona.h>
#include <alumno.h>
#include <profesor.h>
#include <string>

using namespace std;
int aleatorio(){
    return 1+rand()%(11-1);
}

int main()
{

    Profesor p1("Juan", "Garcia Dominguez","78845667E");


    Alumno a1= p1.AnhadirAlumno("Xian","Garcia Nogueira","65548997R");
    Alumno a2=p1.AnhadirAlumno ("Mario", "Alvarez Gonzalez","21145798R");
    Alumno a3=p1.AnhadirAlumno ("Maria", "Pereira Fernandez","123845795E");
    Alumno a4=p1.AnhadirAlumno ("Juan Carlos", "Lopez Gonzalez","64487945G");
    Alumno a5=p1.AnhadirAlumno ("Pablo", "Blanco lopez","322164487U");
    Alumno a6=p1.AnhadirAlumno ("Silvia", "Alvares De Celis","32216497Z");
    Alumno a7=p1.AnhadirAlumno ("Sara", "Fernandez Gonzalez","3326447Y");
    cout  << endl;

      cout << "ALUMNOS Y SU MEDIA:" << endl<< endl;

    a1 = p1.setNotas(a1,1,2,3);

    a2 = p1.setNotas(a2,aleatorio(),aleatorio(),aleatorio());
    a3 = p1.setNotas(a3,10);
    a4 = p1.setNotas(a4,5);
    a5 = p1.setNotas(a5,aleatorio(),aleatorio());
    a6 = p1.setNotas(a6,aleatorio(),aleatorio(),aleatorio());
    a7 = p1.setNotas(a7,aleatorio(),aleatorio(),aleatorio());
    /*
     FUNCION PARA ACTUALIZAR LOS USUARIOS
    p1.borrarLista();

    a1=p1.AnhadirAlumno(a1.getNombre(),a1.getApellidos(),a1.getDni());
    a2=p1.AnhadirAlumno(a2.getNombre(),a2.getApellidos(),a2.getDni());
    a3=p1.AnhadirAlumno(a3.getNombre(),a3.getApellidos(),a3.getDni());
    a4=p1.AnhadirAlumno(a4.getNombre(),a4.getApellidos(),a4.getDni());
    a5=p1.AnhadirAlumno(a5.getNombre(),a5.getApellidos(),a5.getDni());
    a6=p1.AnhadirAlumno(a6.getNombre(),a6.getApellidos(),a6.getDni());
    a7=p1.AnhadirAlumno(a7.getNombre(),a7.getApellidos(),a7.getDni());
    */
    // Otra opcion para calcular la media, por vector de enteros, que tampoco funciona
    //p1.imprimirVector();


    p1.imprimirVector2();

    p1.mejorMedia();








    return 0;
}

