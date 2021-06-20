//Décimo quinto programa. Primero reto usando el while. (1/2).
//Pregunta la edad, si es un mayor de edad, puede entrar a un prostíbulo. Repite hasta que se cumpla que es mayor de edad.

#include <iostream>

using namespace std;
int a;


int main() 
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
cout<<"Ingrese su edad"<<endl;
cin>>a;

while (a<=17)	
	{
		cout<<"Usted es menor de edad, no puede entrar. \n"<<endl;
		system ("pause");
		system ("cls");
		cout<<"Vuelva a ingresar su edad: ";
		cin>>a;
		cout<<"\n";
	}
cout<<"Usted es Mayor de edad. Puede entrar."<<endl;


return 0;
	}
