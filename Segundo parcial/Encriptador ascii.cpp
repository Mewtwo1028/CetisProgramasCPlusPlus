#include <iostream>

using namespace std;

char cond;
void ascii ();
void desascii ();
char cadena[30];
int cod[30];
	string texto;
int main ()

{
	
	cout<<"MENU\n\n\n\n\n"<<endl;
	
	cout<<"Presione e para encriptar, d para desencriptar. Cualquier otra cosa para salir: ";
	cin>>cond;
	if (cond=='e')
	{
		cout<<"Ingrese el texto a encriptar: ";
		cin>>texto;
		
		ascii ();
	}
	
	if (cond=='d')
	{
		cout<<"Ingrese el código a desencriptar: ";
	for (int i=0; i<=30; i++)
	{
	
	
		cin>>cod[i];
	
			if (cod[i] <97||cod[i]>122)
			{	
				break;
			}
	}
		desascii();
		
	}
	
	else
	{
		
	}
	
	return 0;
}


void ascii ()
{

	
	for (int j=0; j<texto.length(); j++)
	{
		cadena[j]=texto[j];
	}
	
	for (int i=0; i<=texto.length(); i++)
	
	{
		cadena[i]=texto[i];
		
		if (cadena [i]=='a')
		{
			cout<<"97 ";
		}
		if (cadena [i]=='b')
		{
			cout<<"98 ";
		}
		if (cadena [i]=='c')
		{
			cout<<"99 ";
		}
		if (cadena [i]=='d')
		{
			cout<<"100 ";
		}
		if (cadena [i]=='e')
		{
			cout<<"101 ";
		}
		if (cadena [i]=='f')
		{
			cout<<"102 ";
		}
		if (cadena [i]=='g')
		{
			cout<<"103 ";
		}
		if (cadena [i]=='h')
		{
			cout<<"104 ";
		}
		if (cadena [i]=='i')
		{
			cout<<"105 ";
		}
		if (cadena [i]=='j')
		{
			cout<<"106 ";
		}
		if (cadena [i]=='k')
		{
			cout<<"107 ";
		}
		if (cadena [i]=='l')
		{
			cout<<"108 ";
		}
		if (cadena [i]=='m')
		{
			cout<<"109 ";
		}
		if (cadena [i]=='n')
		{
			cout<<"110 ";
		}
		if (cadena [i]=='o')
		{
			cout<<"111 ";
		}
		if (cadena [i]=='p')
		{
			cout<<"112 ";
		}
		if (cadena [i]=='q')
		{
			cout<<"113 ";
		}
		if (cadena [i]=='r')
		{
			cout<<"114 ";
		}
		if (cadena [i]=='s')
		{
			cout<<"115 ";
		}
		if (cadena [i]=='t')
		{
			cout<<"116 ";
		}
		if (cadena [i]=='u')
		{
			cout<<"117 ";
		}
		if (cadena [i]=='v')
		{
			cout<<"v ";
		}
		if (cadena [i]=='w')
		{
			cout<<"119 ";
		}
		if (cadena [i]=='x')
		{
			cout<<"120 ";
		}
		if (cadena [i]=='y')
		{
			cout<<"121 ";
		}
		if (cadena [i]=='z')
		{
			cout<<"122 ";
		}
		
		}
		
	}
	
	void desascii ()
	{
		
	
	for (int i=0; i<=30; i++)
	
	{
		cod[i]=texto[i];
		
		if (cod [i]==97)
		{
			cout<<"a";
		}
		if (cod [i]==98)
		{
			cout<<"b";
		}
		if (cod [i]==99)
		{
			cout<<"c";
		}
		if (cod [i]==100)
		{
			cout<<"d";
		}
		if (cod [i]==101)
		{
			cout<<"e";
		}
		if (cod [i]==102)
		{
			cout<<"f";
		}
		if (cod [i]==103)
		{
			cout<<"g";
		}
		if (cod [i]==104)
		{
			cout<<"h";
		}
		if (cod [i]==105)
		{
			cout<<"i";
		}
		if (cod [i]==106)
		{
			cout<<"j";
		}
		if (cod [i]==107)
		{
			cout<<"k";
		}
		if (cod [i]==108)
		{
			cout<<"l";
		}
		if (cod [i]==109)
		{
			cout<<"m";
		}
		if (cod [i]==110)
		{
			cout<<"n";
		}
		if (cod [i]==111)
		{
			cout<<"o";
		}
		if (cod [i]==112)
		{
			cout<<"p";
		}
		if (cod [i]==113)
		{
			cout<<"q";
		}
		if (cod [i]==114)
		{
			cout<<"r";
		}
		if (cod [i]==115)
		{
			cout<<"s";
		}
		if (cod [i]==116)
		{
			cout<<"t";
		}
		if (cod [i]==117)
		{
			cout<<"u";
		}
		if (cod [i]==118)
		{
			cout<<"v";
		}
		if (cod [i]==119)
		{
			cout<<"w";
		}
		if (cod [i]==120)
		{
			cout<<"x";
		}
		if (cod [i]==121)
		{
			cout<<"y";
		}
		if (cod [i]==122)
		{
			cout<<"z";
		}
		
		}
	}
	

