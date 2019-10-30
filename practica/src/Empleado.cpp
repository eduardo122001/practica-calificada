#include "Empleado.h"
#include <iostream>

Empleado::Empleado(string nom,string ape,double mont)
{   nombre=nom;
    apellido=ape;
    sueldo=mont;
}

string Empleado:: getnombre()
{   return nombre;
}

string Empleado:: getapellido()
{   return apellido;
}

double Empleado:: getsueldo()
{   return sueldo;
}

double Empleado:: setsueldo()
{   if(sueldo<0)
        sueldo=0;
    return sueldo;
}

