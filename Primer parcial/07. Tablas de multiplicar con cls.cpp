/* Sexto programa. Tablas de multiplicar a partir de un dato ingresado por el usuario, se elimina el 
resultado anterior, y aparece el nuevo cada vez que el usuario presione cualquier tecla*/

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
	
	
	int entrada=0;
	int operacion=0;
	cout<<"Ingrese el numero del cual desea obtener las tablas"<<endl; cin>>entrada;
	
	for (int  i=1; i<=10; i++)
	{
		operacion=entrada*i;
		cout<<entrada<<"*"<<i<<"="<<operacion<<endl;
		system ("pause");
		system ("cls");
	}
	
	return 0;
}
