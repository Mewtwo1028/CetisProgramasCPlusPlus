// Vigésimo primer programa. Calculadora sencilla. Programa utilizando while, do while y case.

#include <iostream>

using namespace std;
int a;
int n;
int b;
int suma;
int resta;
int multiplicando;
							int multiplicador;
							int resultado_m;
							int z=1;
int main() 
{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	  
	  system ("pause");
	  system ("cls");
	
	cout<<"Qué operación desea hacer? \n Presione: \n 1 para suma \n 2 para resta \n 3 para división"<<endl;
	cin>>a;
	switch (a)
{ 
	case (1): 
	cout<<"Cuántos numeros desea sumar?"<<endl;
	cin>>n;
		
		for (int i=1; i<=n; i++)
		{
			cout<<"Ingresa el numero "<<i<<endl;
			cin>>b;
			suma=suma+b;
			
			}
		cout<<"El resultado es: "<<suma;
		break;
		case (2):
			int num_mg;
						cout<<"Por favor, ingresa el número más grande";
						cin>>num_mg;
			cout<<"Cuántos números deseas restar?";
			cin>>n;
			for (int i=1; i<=n; i++)
			{
				cout<<"Ingresa el numero: "<<i<<endl;
				cin>>b;
				resta=resta+b;
			
					}
					
					resta=num_mg-resta;
					cout<<"El resultado es: "<<resta;
					break;
					case (3):
						cout<<"Cuántas divisiones le gustaría realizar? ";
						cin>>n;
						int i=1;
					
						do {
						
						cout<<"Ingrese el dividendo: ";
						int dividendo;
						int divisor;
						double resultado_d;
						cin>>dividendo;
						cout<<"Ingresa el divisor: ";
						cin>>divisor;
						resultado_d=dividendo/divisor;
						cout<<"El resultado de la división numero "<<i<<" es: "<<resultado_d<<endl;
						i++;
						} while (i<=n);
						break;
						
						
					/*	case (4):
								cout<<"Cuántas multiplicaciones le gustaría realizar? ";
						cin>>n;
						
						do {
							
							cout<<"Ingrese el multiplcando"<<endl;
							cin>>multiplicando;
							cout<<"Ingrese el multiplicador"<<endl;
							cin>>multiplicador;
							resultado_m=multiplicando*multiplicador;
							cout<<"El resultado de la multiplicación número "<<z<<" es: "<<resultado_m<<endl;
							z++;
						}
						while (z<=n);
					 
						break;
						*/
	
		
	}

/*	if (a==4)
	{
		cout<<"Cuántas multiplicaciones le gustaría realizar? ";
						cin>>n;
						
						do {
							
							
							cout<<"Ingrese el multiplcando"<<endl;
							cin>>multiplicando;
							cout<<"Ingrese el multiplicador"<<endl;
							cin>>multiplicador;
							resultado_m=multiplicando*multiplicador;
							cout<<"El resultado de la multiplicación número "<<z<<" es: "<<resultado_m<<endl;
							z++;
						}
						while (z<=n);
		*/
	
	return 0;
}
