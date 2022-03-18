#include "iostream"
#include "string"
#include "stdlib.h"

using namespace std;

int main()
{   cout << "Bienvenido al sistema sistema de quejas y sugerencias de la universidad XYZ" << endl;
    string resp = "";
    cout << "Mantiene activa la matricula?"<< endl;
    cin >> resp;
    if(resp == "si")
    {
        cout << "Puede acceder al sistema" << endl;
    }
    else
    {
        cout << "Este servicio solo se brinda a los estudiantes que mantienen su matricula activa";
    }

    string usuario, clave ="";
cout << "Ingrese su usuario" << endl;
cin >> usuario;

cout << "Introduzca la clave: "<< endl;
    cin >> clave ;
    if(clave == "123c")
    {
        cout << "Credenciales validas, ha iniciado sesion."<< endl;
    }
    else
    {
        cout << "Credenciales incorrectas." << endl;
    }

    return 0;
}
