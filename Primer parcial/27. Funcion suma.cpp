// Suma, primer ejercicio con funciones

#include <iostream>

using namespace std;

void suma ();

int main ()
{
	 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
suma ();
system ("pause");
return 0;	
}

void suma ()

{
	int num1,num2;
	cout<<"Ingresa el numero ";
	cin>>num1;
	cout<<"Ingresa el segundo numero ";
	cin>>num2;
	cout<<"La suma de los numeros es: "<<num1+num2<<endl;
}
