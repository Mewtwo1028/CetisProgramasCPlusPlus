#include <iostream>


using namespace std;

char cadena [30];
char temp=0;
int cont=0;
void encripta (char[30]);

int main  ()

{
	
	cout<<"Dame una palabra"<<endl;
	cin>>cadena;
	
	encripta (cadena);
	return 0;
}


void encripta (char x [30])

{
	for (int i=0; i<30; i++)

{
	cont++;
	
	if (cont==3)
	{
		temp=cadena[i-1];
		cadena[i-1]=cadena[i];
		cadena[i]=temp;
		cont=0;
	}
	
}

cout<<cadena;
	
}
