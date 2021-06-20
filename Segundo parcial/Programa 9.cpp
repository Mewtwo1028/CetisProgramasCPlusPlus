#include <iostream>
#include <string.h>
using namespace std;

int main ()

{
	
	int contconson=0;
string nombre;

	char arreglo [30];
	cout<<"Ingresa tu nombre: ";
	cin>>nombre;
	
	for (int j=0; j<=nombre.length(); j++)
	{
		arreglo[j]=nombre[j];
	}
	
	cout<<"Tu nombre es: "<<arreglo<<endl;
	
	for (int i=0; i<nombre.length(); i++)
	{
		
		if (arreglo[i]!='A'&& arreglo[i]!='a'&&arreglo[i]!='e'&&arreglo[i]!='E'&&arreglo[i]!='I'
		&&arreglo[i]!='i'&&arreglo[i]!='o'&&arreglo[i]!='O'&&arreglo[i]!='U'&&arreglo[i]!='u')   
		{
			contconson++;
		}
	
	}
	
	cout<<"El numero de consonantes es: "<<contconson;
	
	return 0;
}
