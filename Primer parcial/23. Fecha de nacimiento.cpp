//Vigésimo tercer programa. Te dice en qué mes naciste a partir de un dato ingresado.

#include <iostream>

using namespace std;
int dia=0;
int mes=0;


int main ()

{
cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:	Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n \n \n \n" ;
cout<<"¿Qué dia naciste?"<<endl;
cin>>dia;
cout<<"¿Qué mes?"<<endl;
cin>>mes;




switch (mes)

{

	case 1:
		cout<<"Naciste en enero ";
				cout<<"el "<<dia<<endl;
		break;
			case 2:
		cout<<"Naciste en febrero ";
				cout<<"el "<<dia<<endl;
		break;
			case 3:
		cout<<"Naciste en marzo ";
				cout<<"el "<<dia<<endl;
		break;
			case 4:
		cout<<"Naciste en abril ";
				cout<<"el "<<dia<<endl;
		break;
			case 5:
		cout<<"Naciste en mayo ";
				cout<<"el "<<dia<<endl;
		break;
			case 6:
		cout<<"Naciste en junio ";
				cout<<"el "<<dia<<endl;
		break;
			case 7:
		cout<<"Naciste en julio ";
				cout<<"el "<<dia<<endl;
		break;
			case 8:
		cout<<"Naciste en agosto ";
				cout<<"el "<<dia<<endl;
		break;
			case 9:
		cout<<"Naciste en septiembre ";
				cout<<"el "<<dia<<endl;
		break;
			case 10:
		cout<<"Naciste en octubre ";
				cout<<"el "<<dia<<endl;
		break;
			case 11:
		cout<<"Naciste en noviembre ";
				cout<<"el "<<dia<<endl;
		break;
			case 12:
		cout<<"Naciste en diciembre ";
				cout<<"el "<<dia<<endl;
		break;
		
		default: 
		cout<<"No válido";
	
}
	
	
	
return 0;

}
