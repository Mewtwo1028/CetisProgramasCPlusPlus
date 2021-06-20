//Décimo segundo programa. Determina si es un niño, joven o adulto, a partir de un dato ingresado por el usuario

#include <iostream>

using namespace std;

int main(int argc, char** argv)
 {
 	 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	
	int entrada=0;
	
	cout<<"Ingrese la edad"<<endl;
	cin>>entrada;
	
	while ((entrada>=13) && (entrada<=14)) 
{
		cout<<"Por favor, vuelve a ingresar tu edad"<<endl;
		cin>>entrada;
		}
		
		if ((entrada>=1) && (entrada==12))
		{
			cout<<"Eres un niño"<<endl;
		}
		
		if  ((entrada>=15) && (entrada<=20))
		{
			cout<<"Eres un joven"<<endl;
		}
		if (entrada>=21)
		{
			cout<<"Eres un adulto"<<endl;
		}
		
	
	
	return 0;
}
