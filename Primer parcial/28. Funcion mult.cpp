// Multiplicación. Segundo ejercicio con funciones

#include <iostream>

using namespace std;



void mult ();

int main ()

{
	 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	mult ();
	system ("pause");
	
	return 0;
	
}

void mult ()

{
	int v1,v2,v3;
	int res;
	cout<<"Dame un numero"<<endl;
	cin>>v2;
		cout<<"Dame un numero"<<endl;
	cin>>v3;
		cout<<"Dame un numero"<<endl;
	cin>>v1;
	res=v1*v2*v3;
		cout<<"El resultado es: "<<res<<endl;

}
