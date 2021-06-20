#include <iostream>

using namespace std;

char cond;
void ascii ();
char cadena[30];

int main ()

{
	
	cout<<"MENU\n\n\n\n\n"<<endl;
	
	cout<<"Presione e para encriptar, d para desencriptar. Cualquier otra cosa para salir: ";
	cin>>cond;
	if (cond=='e')
	{
		cout<<"Ingrese el texto a encriptar";
		cin>>cadena;
		
		ascii ();
	}
	
	if (cond=='d')
	{
		
	}
	
	else
	{
		
	}
	
	return 0;
}


void ascii ()
{
	string texto;
	
	for (int j=0; j<texto.length(); j++)
	{
		cadena[j]=texto;
	}
	
	for (int i=0; i<30; i++)
	
	{
		if (cadena [i]='a')
		{
			cout<<"97 ";
		}
		if (cadena [i]='b')
		{
			cout<<"98 ";
		}
		if (cadena [i]='c')
		{
			cout<<"99 ";
		}
		if (cadena [i]='d')
		{
			cout<<"100 ";
		}
		if (cadena [i]='e')
		{
			cout<<"101 ";
		}
		if (cadena [i]='f')
		{
			cout<<"102 ";
		}
		if (cadena [i]='g')
		{
			cout<<"103 ";
		}
		if (cadena [i]='h')
		{
			cout<<"104 ";
		}
		if (cadena [i]='i')
		{
			cout<<"105 ";
		}
		if (cadena [i]='j')
		{
			cout<<"106 ";
		}
		if (cadena [i]='k')
		{
			cout<<"107 ";
		}
		if (cadena [i]='l')
		{
			cout<<"108 ";
		}
		if (cadena [i]='m')
		{
			cout<<"109 ";
		}
		if (cadena [i]='n')
		{
			cout<<"110 ";
		}
		if (cadena [i]='o')
		{
			cout<<"111 ";
		}
		if (cadena [i]='p')
		{
			cout<<"112 ";
		}
		if (cadena [i]='q')
		{
			cout<<"113 ";
		}
		if (cadena [i]='r')
		{
			cout<<"114 ";
		}
		if (cadena [i]='s')
		{
			cout<<"115 ";
		}
		if (cadena [i]='t')
		{
			cout<<"116 ";
		}
		if (cadena [i]='u')
		{
			cout<<"117 ";
		}
		if (cadena [i]='v')
		{
			cout<<"v ";
		}
		if (cadena [i]='w')
		{
			cout<<"119 ";
		}
		if (cadena [i]='x')
		{
			cout<<"120 ";
		}
		if (cadena [i]='y')
		{
			cout<<"121 ";
		}
		if (cadena [i]='z')
		{
			cout<<"122 ";
		}
		
		}
		
		
	}

