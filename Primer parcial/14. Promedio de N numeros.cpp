//Décimo cuarto programa. Promedio de N numeros a partir de datos ingresados por el usuario

#include <iostream>

using namespace std;
int n=0;
int i=0;
int b=0;
int suma=0;
double promedio=0;

int main(int argc, char** argv) 
{
	 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	cout<<"¿Cuantos numeros deseas leer?"<<endl;
	cin>>n;
	while (i<=n)
	{
		i++;
		cout<<"ingrese el numero "<<i<<endl;
		cin>>b;
		suma=suma+b;
	}
	
	promedio=suma/n;
	
	cout<<"El promedio es: "<<promedio<<endl;
	return 0;
}
