#include <iostream>

using namespace std;	

char cond;
char texto [30];
int contador;
void desencriptador (char[30]);
void encriptador (char[30]);
int main ()

{
	
	cout<<"Presione e para usar el encriptador, d para el desencriptador: ";
	cin>>cond;
	
	
	if (cond=='e')
	{
		cout<<"Ingrese el texto: ";
	cin>>texto;
	
		encriptador (texto);
	}
	
	if (cond=='d')
	{
		cout<<"Ingrese el texto: ";
	cin>>texto;
		desencriptador (texto);
	}
		
	return 0;
}


 
 

void encriptador (char x [30])

{

	
	for (int i=0; i<30; i++)

{
	contador++;
	
	if (contador==2)
	{
		texto[i+1]=texto[i+3];
		texto[i+2]=texto[i-1];
		texto[i+3]=texto[i+2];
		texto[i+4]=texto[i-3];
		
		contador=0;
	}
}


cout<<texto;
	
}

void desencriptador (char y [30])
{	
cout<<"Al chile que no supe hacerlo, profe";

/*	for (int i=0; i<30; i++)

{
	contador++;
	
	if (contador==2)
	{
		texto[i+3]=texto[i+1];
		texto[i+1]=texto[i-2];
		texto[i+2]=texto[i+3];
		texto[i+3]=texto[i-4];
		
		contador=0;
	}
}
if (texto[0]=='$')
{
	texto[0]='o';
}
if (texto[0]=='%')
{
	texto[0]='a';
}
if (texto[0]=='&')
{
	texto[0]='e';
}
if (texto[0]=='#')
{
	texto[0]='u';
}
if (texto[0]=='@')
{
	texto[0]='i';
}
cout<<texto;*/
	
	
}


