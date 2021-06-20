// Décimo noveno programa. Te dice que no te quiere.

#include <iostream>

using namespace std;
int genero;
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
	  
	cout<<"Eres hombre o mujer? \n presiona 0 si eres hombre\n 1 si eres mujer";
	cin>>genero;
	
	switch (genero)
	{
		case (0):
			cout<<"Ella no te quiere :'v ";
		break;
		
		case (1):
			cout<<"El no te quiere :v"<<endl;;
		break;
	}
	
	return 0;
}
