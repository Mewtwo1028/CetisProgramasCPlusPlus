#include <iostream>

using namespace std;

char caracteres [10];
int numeros [10];


int main ()

{

	for (int i=1; i<=10; i++)
	{
		cout<<"Ingresa un numero: ";
		cin>>numeros[i];
	}
	
		for (int j=1;  j<=10; j++)
	{
	cout<<"Ingresa una letra: ";
		cin>>caracteres[j];	
	}
	
	for (int k=1; k<=10; k++)
	{
	
		for (int l=1; l<=10; l++)
		{
			cout<<numeros[k];
			cout<<caracteres[l]<<endl;
				
		}
		
	}
	
	return 0;
}
