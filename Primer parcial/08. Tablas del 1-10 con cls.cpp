//Séptimo programa. Tablas del 1-10, se despliega una, y la otra cada vez que el usuario presiona cualquier tecla

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
	
	
	for  (int i=1; i<=10; i++)
	{
		for (int e=1; e<=10; e++)
		{
			int operacion=e*1;
			
		cout<<i<<"*"<<e<<"="<<operacion<<endl;
			
		}
				system ("pause");
		
	}
	
	return 0;
}
