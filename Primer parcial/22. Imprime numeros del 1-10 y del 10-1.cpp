// Vigésimo segundo programa. Cuenta de uno en uno, del 1-10, e inversamente. Pregunta si desea repetir.

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


string cond;
int main ()

{
	
	
	do
	{
		
		for (int a=1; a<=10; a++)
{
	cout<<a<<" ";
	Sleep (100);
	
		}		
		cout<<"\n";
		
		for (int b=10; b>=1; b--)
		{
			Sleep (200);
			cout<<b<<" ";
		}
	cout<<"\n";
	
	cout<<"Desea repetir? Si para repetir, culaquier otra cosa para no "<<endl;
	cin>>cond;
	}
	
	while (cond=="Si");
	
	return 0;
}
