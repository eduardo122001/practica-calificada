#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>

class Empleado
{
    public:

        Empleado(string nom,string ape,double mont);
        string getnombre();
        string getapellido();
        double getsueldo();
        double setsueldo();


    private:
     string apellido[];
     string nombre[];
     double sueldo;
};

#endif // EMPLEADO_H
