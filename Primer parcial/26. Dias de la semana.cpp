// Vig�simo sexto programa. El usuario ingresa un n�mero, y le dice a qu� d�a de la semana corresponde

#include <iostream>
#include <conio.h>

int dia=0;

using namespace std;

int main ()

{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS N� 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	cout<<"Ingrese el dia de la semana"<<endl;
	cin>>dia;
	
	switch (dia)
	{
		case 1:
			cout<<"Ese dia es domingo"<<endl;
			break;
			
				case 2:
						cout<<"Ese dia es lunes"<<endl;
			break;
				case 3:
						cout<<"Ese dia es martes"<<endl;
			break;
				case 4:
						cout<<"Ese dia es mi�rcoles"<<endl;
			break;
				case 5:
						cout<<"Ese dia es jueves"<<endl;
			break;
				case 6:
						cout<<"Ese dia es viernes"<<endl;
			break;
				case 7:
						cout<<"Ese dia es s�bado"<<endl;
			break;
			default: 		
				cout<<"Opci�n no v�lida"<<endl;
		
	}
	
	return 0;
}
