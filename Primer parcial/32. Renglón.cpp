// Despliega asteriscos de manera horizontal, dando un espacio de dos renglones entre cada uno.

#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy (int, int);
int var=0;
int z;
int main ()
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	
cout<<"¿Desde que renglón desea iniciar?"<<endl;
cin>>var;
system ("cls");
// cout<<"Ingrese el simbolo que desea escribir";
 
while (z<=30)
{
	
	for (int y=1; y<=39; y++)
{
	gotoxy (y,var);
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
