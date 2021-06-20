#include <iostream>

using namespace std;

char caracteres [60];
int numeros [60];
int contc;
int contn;

int main ()

{
	cout<<"Cuantos numeros desea ingresar?";
	cin>>contn;
	cout<<"Cuantas letras desea ingresar?";
	cin>>contc;
	
	for (int i=1; i<=contn; i++)
	{
		cout<<"Ingresa un numero: ";
		cin>>numeros[i];
	}
	
	for (int j=1;  j<=contc; j++)
	{
	cout<<"Ingresa una letra: ";
		cin>>caracteres[j];	
	}
	
	for (int k=1; k<=contn; k++)
	{
	
		for (int l=1; l<=contc; l++)
		{
			cout<<numeros[k];
			cout<<caracteres[l]<<endl;
				
		}
		
	}
	
	return 0;
}
