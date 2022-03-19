#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string>
#include <chrono>
#include <sys/time.h>
#include <ctime>

using namespace std;
string timeToString(::chrono::system_clock::time_point &t)
{
	time_t time = ::chrono::system_clock::to_time_t(t);
    string time_str = ::ctime(&time);
    time_str.resize(time_str.size() - 1);
    return time_str;
}

int main(int argc, char** argv) {
     int opcion, NUMT;
	char NOM[50] = {};
	char APLL[50] = {};
	char ID[50] = {};
	char EMAIL[50] = {};
	char Carrera[300] = {};
	char Ticket[500] = {};
	
    cout << "Bienvenido al sistema sistema de quejas y sugerencias de la universidad XYZ" << endl;
    string resp = "";
    cout << "Mantiene activa la matricula?"<< endl;
    cin >> resp;
    if(resp == "si")
    {
        cout << "Puede acceder al sistema" << endl;
    }
    else
    {
        cout << "Este servicio solo se brinda a los estudiantes que mantienen su matricula activa"<< endl;
    }

    string usuario, clave ="";
cout << "Ingrese su usuario" << endl;
cin >> usuario;

cout << "Introduzca la clave: "<< endl;
    cin >> clave ;
    if(clave == "123c")
    {
        cout << "Credenciales validas, ha iniciado sesion."<< endl;
        
        
        auto time_p = ::chrono::system_clock::now();
        
    cout << "Fecha y hora de ingreso: " << timeToString(time_p) << endl;
    
	string nuevaclave;

        cout << "\nINICIO DE SESION EXITOSO\n"<< endl;

        while (true)
        {
            cout << "\nPor favor cambie la clave:"<< endl;
            cin >> nuevaclave;
                break;
        }    
    }
    else
    {
        cout << "Credenciales incorrectas." << endl;
    }
    
    {    
    cout<<"-----------------"<<endl;
	cout<<"Bienvenido."<<endl;
	cout<<"1.Subir un ticket"<<endl;
	cout<<"2. Ver Tickets"<<endl;
	cout<<"3. Salir"<<endl;
    cin>>opcion;

	 switch (opcion) {
    break;
	 case 1:{
	 
	    cout<<"Bienvenido al sistema de tickets. Por favor, llene los datos de acuerdo a lo que se le pida."<<endl;
	
		cout<<"Nombre: "<<endl;
	cin.getline(NOM,50);
	cin.getline(NOM,50);
	
	cout<<" "<<endl;
	
		cout<<"Apellido: "<<endl;
	cin.getline(APLL,50);
	
	cout<<" "<<endl;
	
		cout<<"ID: "<<endl;
	cin.getline(ID,50);
	
	cout<<" "<<endl;
	
		cout<<"Correo: "<<endl;
	cin.getline(EMAIL,50);
	
	cout<<" "<<endl;
	
		cout<<"Carrera: "<<endl;
	cin.getline(Carrera,300);
	
	cout<<" "<<endl;
	
    	cout<<"Motivo del ticket: "<<endl;
	cin.getline(Ticket,500);
	
	cout<<" "<<endl;
    
    cout<<"Su numero de caso: "<<endl;
     srand(time(0));
 for(int i = 0; i<1; i++)
 printf(" %d ", rand());
     
     cout<<"Utilice este numero para rastrear el progreso de su caso."<<endl; }
     break;
 
    case 2: 
     cout<<"Ingrese el numero de su ticket: ";
	 cin>>NUMT;
	 cout<<"---------------------"<<endl;
	 cout<<"Nombre completo: "<<NOM<<" "<<APLL<<endl;
	 cout<<"Identificacion: "<<ID<<endl;
	 cout<<"Email: "<<EMAIL<<endl;
	 cout<<"Carrera: "<<Carrera<<endl;
	 cout<<"Motivo del Ticket: "<<Ticket<<endl;
	 break;
	   case 3: 
     cout <<"---------------------------------"<<endl;
	auto time_p = ::chrono::system_clock::now();
    cout << "Fecha y hora de cierre de sesion: " << timeToString(time_p) << endl;
    cout << "\nSESION CERRADA EXITOSAMENTE\n";
    cout << "---------Universidad XYZ---------"<<endl;
    cout <<"---------------------------------"<<endl;
    break;
	 }

}
return(0);
}
