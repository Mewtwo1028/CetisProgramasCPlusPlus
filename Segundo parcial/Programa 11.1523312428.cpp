#include <iostream>
#include <string>

using namespace std;	

char cond;
string texto;
string temporal;
int main ()

{
	cout<<"Ingrese el texto: ";
	cin>>texto;
	cout<<"Presione e para usar el encriptador, d para el desencriptador: ";
	cin>>cond;
	if (cond=='e')
	{
	/*	for (int i=0; i<=texto.length(); i++)
		{
			
		
		}*/
	
		if (texto.length()>=1 && texto.length()<=5)
		{
			temporal=texto;
			
			texto[4]=texto[2];
			texto[2]=temporal[4];
			texto[0]='$';
			texto[3]=temporal[0];
			texto[1]=temporal[5];
			
				cout<<texto;
	}

			if (texto.length()>=1 && texto.length()<=8)
		{
			
		}
		
}
		
	
			
	

	
	return 0;
}
