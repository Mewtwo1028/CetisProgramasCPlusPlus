//Crea un cuadro

#include <iostream>
#include <windows.h>

using namespace std;
void gotoxy (int, int);
int main ()
{
for (int x=1; x<=69;x++)
{
gotoxy (x,1);
cout<<"*"<<endl;
gotoxy (x,30);
cout<<"*"<<endl;
	}	
	
	for (int y=1; y<=29; y++)
	{
		gotoxy (1,y);
cout<<"*"<<endl;
gotoxy (69,y);
cout<<"*"<<endl;
		
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
