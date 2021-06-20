#include <iostream>
#include <conio.h>

char a[50];
char b[50];
char letra;
int cont=0;
int x=0;
int bandera=1;
char var;
int vidas=3;

using namespace std;
int main ()
{
	cout<<"Ingresa una letra y presiona ENTER para terminar"<<endl;
	do
	{
		var=getch();
		a[cont]=var;
		cont++;
	} while ((var!=27)and (cont<49));
	
	do
	{
		cout<<"Dame una letra: ";
		cin>>letra;
		
		do
		{
				for (x=1; x<=cont; x++)
				{
			if (letra==a[x])
			{
				b[x]=a[x];
				a[x]=0;
			}
				}
			
		} while (x<cont);
	} while (vidas>0);
	
	return 0;
}
