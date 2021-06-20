//Décimo programa. Tablas con while a partir de un valor fijo.

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
	
	int valor=1;
	int a=0;
			int r=0;
	while (a<=10)
	{
		a++;
		r=valor*a;
			cout<<valor<<"x"<<a<<"="<<r<<endl;
	}

	
	return 0;
}
