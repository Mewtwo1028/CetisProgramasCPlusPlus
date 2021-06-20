//Trigésimo primer programa. Crea un cuadro, y lo rellena.

#include <iostream>
#include <windows.h>
#include <cstdlib>


using namespace std;
void gotoxy (int, int);
void gotoxy2 (int, int);
int z2;
int z4;
int z3;
int z,s;
int rh=2;
char caracter;
int main ()
{
	
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	cout<<"Ingresa el caracter con el que desea rellenar el cuadro: ";
	cin>>caracter;
system ("cls");
 system ("COLOR 5E");
 system ("pause");
 system ("cls");
while (z<=30)
{
	
	for (int x=1; x<=39; x++)
{
	gotoxy (1,x);
cout<<"*"<<endl;
	}
	z++;

}


//Comienza las horizontales

Sleep (1000);
while (z2<=30)
{

for (int x2=70; x2>=1; x2--)
{
		gotoxy2 (x2,39);
cout<<"*"<<endl;
}
z2++;
}
	
	// verticales hacia arriba
	Sleep (1000);
	while (z3<=30)
{
	
	for (int x=1; x<=39; x++)
{
	gotoxy (70,x);
cout<<"*"<<endl;
	}
	z3++;
}
	
	
	//Comienzan horizontales izquierda a derecha
	
	Sleep (1000);

while (z4<=69)
{

for (int x2=70; x2>=1; x2--)
{
		gotoxy2 (z4,1);
cout<<"*"<<endl;

}
z4++;
}
Sleep (3000);

//
while (rh<=67)
{

while (s<=67)
{
	
	for (int r=2; r<=38; r++)
{

	gotoxy (rh,r);
	Sleep (1);
	
cout<<caracter<<endl;
	}
	s++;
	rh++;
}


}
cout<<"\n"<<endl;
system ("pause");


Sleep (200);
system ("cls");



system ("pause");
	return 0;
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
void gotoxy2 (int x2, int y2)

{
	HANDLE hcon;
	hcon=GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x2;
	dwPos.Y=y2;
	SetConsoleCursorPosition(hcon, dwPos);
}

