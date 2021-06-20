//Décimo sexto programa. Usando While (2/2)
// Hace un login, y repite en caso de que los datos ingresados sean diferentes, hasta que se cumpla que son iguales.f

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) 
{
	
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	string nickname;
	string pass;
	cout<<"Ingrese su nombre de usuario: ";
	cin>>nickname;
	string nicknamei;
		cout<<"Vuelva a ingresar su nombre de usuario: ";
		cin>>nicknamei;
		while (nicknamei!=nickname)
		{
				cout<<"Ha ingresado un dato diferente, por favor vuelva \n a escribir su nombre de usuario: ";
						cin>>nicknamei;
		}
	cout<<"Ingrese su contraseña: ";
	cin>>pass;
	cout<<"Vuelva a ingresar su contraseña: ";
	string passi;
	cin>>passi;
	while (pass!=passi)
		{
				cout<<"Ha ingresado un dato diferente, por favor vuelva \n a escribir su contraseña: ";
						cin>>passi;
		}
	cout<<"Genial. Usted ha sido logeado con éxito. ";
	
	
	return 0;
}
