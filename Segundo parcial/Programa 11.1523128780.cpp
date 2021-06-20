#include <iostream>
#include <string>

using namespace std;	

char cond;
char texto [15];

int main ()

{
	cout<<"Ingrese el texto: ";
	cin>>texto;
	cout<<"Presione e para usar el encriptador, d para el desencriptador: ";
	cin>>cond;
	if (cond=='e')
	{
		
		
			texto [2]=texto[0];
			texto[0]='$';
			texto[5]=texto[1];
			texto[8]=texto[4];
			texto[6]=texto[7];
			texto[3]=texto[6]
			;cout<<texto;
	}
	
	
	return 0;
}
