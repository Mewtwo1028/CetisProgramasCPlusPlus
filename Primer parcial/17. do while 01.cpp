//D�cimo s�ptimo programa. Usando do while (1/2). Programa que imprime los n�meros desde el numero que ingresas, hasta el 100
#include <iostream>

using namespace std;
int a;
int main() 
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS N� 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	cout<<"Ingresa un n�mero: ";
	cin>>a;
	do 
{

	cout<<"Vale:"<<a<<endl;
		a++;

	}
	while (a<=100);

	
	
	return 0;
}
