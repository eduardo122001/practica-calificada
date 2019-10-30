#include <iostream>
#include "Empleado.h"
#include <string>

using namespace std;

int main()
{   Empleado empleado1("Jose","Pinto",12.45);//"Jose","Pinto"
    Empleado empleado2("Jose","Pinto",45.67);//"Jose","Pinto"

    cout<<empleado1.getsueldo()<<endl;
    cout<<empleado2.getsueldo()<<endl;

    empleado1.sueldo=(empleado1.sueldo*10)/100;
    empleado2.sueldo=(empleado2.sueldo*10)/100;

    cout<<empleado1.getsueldo()<<endl;
    cout<<empleado2.getsueldo()<<endl;







}
