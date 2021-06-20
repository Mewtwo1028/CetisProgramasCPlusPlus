//Quinto programa. Entrada de datos (2). El programa te dice cuántas pulsaciones debes tener cada diez segundos, a partir de tu edad.

#include <iostream>

using namespace std;
int main()

{
	 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:	Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n \n \n \n" ;
	
	int edad;
int formula;
	cout<<"Ingrese la edad"<<endl;
	cin>>edad;
	formula=(220-edad)/10;
	cout<<"El numero de pulsaciones que debe tener por cada 10 segundos es: "<<formula<<endl;
	return 0;
}
