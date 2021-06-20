#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy (int, int);
int var=0;
int z;
int main ()
{
cout<<"¿Desde que columna desea iniciar?"<<endl;
cin>>var;
system ("cls");
// cout<<"Ingrese el simbolo que desea escribir";
 
while (z<=30)
{
	
	for (int y=1; y<=39; y++)
{
	gotoxy (var,y);
cout<<"*"<<endl;
	}
	var=var+2;
	z++;
}
	
}

void gotoxy (int x, int y)

{
	HANDLE hcon;
	hcon=GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon, dwPos);
	
	
}
