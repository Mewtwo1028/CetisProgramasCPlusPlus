//Décimo primer programa. Area y perimetro de un triangulo, y determina qué tipo de triángulo es

#include <iostream>

using namespace std;

int main() 
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	int L1,L2,L3,b,h=0;
	
	cout<<"Ingrese un lado"<<endl;
	cin>>L1;
	cout<<"Ingrese otro lado"<<endl;
	cin>>L2;
	cout<<"Ingrese otro lado"<<endl;
	cin>>L3;
	cout<<"Ingrese la medida de la base"<<endl;
	cin>>b;
	cout<<"Ingrese la medida de la altura"<<endl;
	cin>>h;

if ((L1==L2) && (L1==L3) && (L2==L3))

{		
	cout<<"Es un triangulo Equilatero"<<endl;
	
}
 if ((L1!=L2) && (L1!=L3) && (L2!=L3))

{
	
	cout<<"Es un triangulo Escaleno"<<endl;
}
 else 

{		
	cout<<"Es un triangulo Isoseles"<<endl;
	
}

float perimetro=0;
float area=0;
area=b*h/2;

perimetro=L1+L2+L3;
cout<<"El perimetro es: "<<perimetro<<endl;
cout<<"El area es: "<<area<<endl;
	return 0;
}
