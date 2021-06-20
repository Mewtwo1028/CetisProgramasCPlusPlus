// Primer Proyecto (Reto). Programa que despliega las tablas de multiplicar de un númerp ingresado por el usuario.

#include <iostream>
double entrada=0;
double resultado=0;
using namespace std;
int main() 
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"		Bienvenido al programa de:	Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n \n \n \n" ;
	
	cout<<"Ingrese el multiplicando"<<endl;
	cin>>entrada;
	
	for (double i=1; i<=10; i++) 
	{
		resultado= entrada*i;
		cout<<entrada<<"x"<<i<< " = "<<resultado<<endl;
		
	}

	return 0;
}
