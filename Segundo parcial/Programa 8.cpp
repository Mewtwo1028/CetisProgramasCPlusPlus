#include <iostream>

using namespace std;

int conta;
int conte;
int conti;
int conto;
int contu;

int main ()

{
	char arreglo [30];
	
	cout<<"Ingresa tu nombre: ";
	cin>>arreglo;
	
	cout<<"Tu nombre es: "<<arreglo<<endl;
	
	for (int i=0; i<=30; i++)
	{
		if (arreglo[i]=='a'|| arreglo[i]=='A')
		{	
			conta++;
			
			
		}
		if (arreglo[i]=='e'|| arreglo[i]=='E')
		{
		
			conte++;
			
		}
		if (arreglo[i]=='i'|| arreglo[i]=='I')
		{
		
			conti++;
			
		}
		if (arreglo[i]=='O'|| arreglo[i]=='o')
		{
		
			conto++;
			
		}
		if (arreglo[i]=='u'|| arreglo[i]=='U')
		{
		
			contu++;
		}
	}
	
	cout<<"Tu nombre tiene: "<<conta<<" numero de a"<<endl;
	cout<<"Tu nombre tiene: "<<conte<<" numero de e"<<endl;
	cout<<"Tu nombre tiene: "<<conti<<" numero de i"<<endl;
	cout<<"Tu nombre tiene: "<<conto<<" numero de o"<<endl;
	cout<<"Tu nombre tiene: "<<contu<<" numero de u"<<endl;
	return 0;
}
