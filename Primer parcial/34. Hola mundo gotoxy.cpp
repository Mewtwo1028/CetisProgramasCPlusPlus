//Imprime el Hola mundo, usando Gotoxy

#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy (int, int);
int main ()
{
	gotoxy (99,70);
cout<<"HOLA MUNDO";
	
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
