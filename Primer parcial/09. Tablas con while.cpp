//Noveno programa.  Tablas de multiplicar a partir de un dato ingresado por el usuario, usando el ciclo while

#include <iostream>

using namespace std;
int entrada=0;


int main(int argc, char** argv) 

{
	 	 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:	Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n \n \n \n" ;
	
		cout<<"Ingrese el numero: "<<endl;
cin>>entrada;
int i=0;
	while (i<=9)
	{
			 i++;
		int operacion=0;
		operacion=i*entrada;
		cout<<entrada<<"*"<<i<<"="<<operacion<<endl;
			}
return 0;
}
