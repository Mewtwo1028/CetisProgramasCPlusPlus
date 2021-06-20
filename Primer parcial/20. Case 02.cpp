//Vigésimo programa. Usando case (2/2). Te pide que ingreses el primer numero.

#include <iostream>

using namespace std;
int a;

int main(int argc, char** argv) 
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	  
	  system ("pause");
	  system ("cls");
	
	cout<<"Ingresa el numero"<<endl;
	cin>>a;
	
	switch (a)
	{
		case (1): 
		cout<<"Ese es el primero numero";
	break;
	
	
	default: cout<<"Ese no es el primer numero";
	break;
	}
	
	return 0;
}
