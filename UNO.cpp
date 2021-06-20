#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main ()
{
cout<<"Bienvenido al juego del UNO"<<endl;

unsigned int jugador1 [7];
unsigned int jugador2 [7];
cout<<"Ingrese un numero: ";

for (int i=0; i<=7; i++)
{
	jugador1[i]=srand(unsigned int Seed);
	cout<<judador1[i];
}


return 0;
}
