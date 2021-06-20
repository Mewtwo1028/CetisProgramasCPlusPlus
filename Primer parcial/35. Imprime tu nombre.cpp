//Imprime tu nombre dentro de un cuadro :D

#include <iostream>
#include <String>
#include <windows.h>
using namespace std;
char caracter;
int nombre=0;
string Say_My_Name;
void gotoxy (int, int);



int main ()


{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	

cout<<"Cuantas letras tiene tu nombre?"<<endl;
cin>>nombre;
cout<<"Ingresa tu nombre"<<endl;
cin>>Say_My_Name;
cout<<"Cuántos segundos deseas que dure en pantalla tu nombre? ";
int delay;
cin>>delay;

system ("cls");
cout<<"Por favor, espere. Estamos trabajando."<<endl;
Sleep (2000);
system ("cls");
system ("pause");
system ("cls");
Sleep (2200);

int hori=39+nombre;
int mid=hori/2;

for (int x=9; x<=hori;x++)
{
gotoxy (x,hori);
cout<<"*"<<endl;
gotoxy (x,9);
cout<<"*"<<endl;

	}	
	
	for (int y=9; y<=hori; y++)
	{
		gotoxy (hori,y);
		cout<<"*"<<endl;
gotoxy (9,y);
cout<<"*"<<endl;

}
hori=hori-mid;
	gotoxy (mid,hori);
cout<<Say_My_Name;
delay=delay*1000;

Sleep (delay);
system ("cls");
system ("pause");
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
