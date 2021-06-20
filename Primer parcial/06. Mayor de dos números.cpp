//Quinto programa. Determina cuál de dos número ingresados por el usuario, es el mayor.

#include <iostream>

using namespace std;

int main(int argc, char** argv) 

{
 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:	Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n \n \n \n" ;
	
	int a=0;
	int b=0;
	
	cout<<"Ingrese el primer numero"<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>b;
	
	if (a>b)
	{
		cout<<"El mayor numero es: "<<a;
	}

if (b>a)
{
	cout<<"El mayor numero es: "<<b;
	}	
	
	else if (a==b)
	{
		cout<<"Ambos numeros son iguales."<<endl;
		
	}
	
	return 0;
}
