// Vigésimo quinto programa. Ingresas un número y te pregunta si deseas ordenarlos de manera ascendente o descendente
//NO TERMINADO :C
#include <iostream>


using namespace std;
int a,b,c;
int num1,num2,num3;
char orden;
int main ()

{
cout<<"Ingrese el primer numero"<<endl;
cin>>a;
cout<<"Ingrese el segundo numero"<<endl;
cin>>b;
cout<<"Ingrese el tercer numero"<<endl;
cin>>c;

cout<<"\n";
	cout<<"Desea mostrarlos de manera ascendente (a) o descendente (d)?"<<endl;
cin>>orden;

/*if (orden==a)
{
	
	
	
	
	
}*/

if ((a>b) && (a>c))
{
	num3=a;
	if (b>c)
	{
		num2=b;
		num1=c;
		
	}
else 
{
num2=c;
num1=b;	
}

}

if ((b>a) && (b>c))
{
	num3=b;
	
	if (a>c)
	{
		num2=a;
		num1=c;
	}
	else 
	{
		num2=b;
		num1=a;
	}
}

return 0;	
}
