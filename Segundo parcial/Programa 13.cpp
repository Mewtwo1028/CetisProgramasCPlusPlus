#include <iostream>
#include <conio.h>
using namespace std;
int a=0;
char dato;
int main ()
{
	do 
	{
	cout<<a<<endl;
	dato=getch ();
	a++;	
	}
	while (dato!=13);


	return 0;
}
