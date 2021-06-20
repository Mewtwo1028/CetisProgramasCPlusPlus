//Vigésimo quinto programa. Te da tu signo zodiacal a partir de un dato que ingreses.

#include <iostream>

using namespace std;
int mes_nacimiento=0;
int dia_nacimiento=0;

int main ()

{
	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n \n \n \n" ;
	
	do
	{
	
	cout<<"Ingresa el numero de tu mes de nacimiento"<<endl;
	cin>>mes_nacimiento;
	}
while (mes_nacimiento>=13);
	cout<<"Ingresa el numero de tu dia de nacimiento"<<endl;
	cin>>dia_nacimiento;
	

	
	switch (mes_nacimiento)
	{
		case 1:
		cout<<"Naciste en enero "<<endl;
		
		if (dia_nacimiento<=20)
		{
			cout<<"Tu signo zodiacal es Capricornio \n"<<endl;
			cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
				}
				else
				{
					cout<<"Tu signo Zodiacal es Acuario"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
		
		break; 
		
		case 2: 
		cout<<"Naciste en febrero"<<endl;
		if (dia_nacimiento<=19)
		{
			cout<<"Tu signo Zodiacal es Acuario"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
		else
		{
		 
		cout<<"Tu signo Zodiacal es Piscis"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		
	}
		break;
		
		case 3: 
		cout<<"Naciste en marzo"<<endl;
		
		if (dia_nacimiento<=20)
		{
			cout<<"Tu signo Zodiacal es Piscis"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
		else 
		{
			cout<<"Tu signo Zodiacal es Aries"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
		
		break;
		
		case 4:
			cout<<"Naciste en abril"<<endl;
			if (dia_nacimiento<=19)
			{
				cout<<"Tu signo Zodiacal es Aries"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
			}
			else
			{
				cout<<"Tu signo Zodiacal es Tauro"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
			}
			
			break;
			
			case 5:
				cout<<"Naciste en Mayo"<<endl;
				
				if (dia_nacimiento<=20)
				{
					cout<<"Tu signo Zodiacal es Tauro"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
					
				}
				
				else 
				{
					cout<<"Tu signo Zodiacal es Geminis"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
				}
				
				break;
				case 6:
					
					cout<<"Naciste en Junio"<<endl;
					
					if (dia_nacimiento<=21)
					{
						cout<<"Tu signo Zodiacal es Geminis"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
						
					}
					
					else 
					{
						cout<<"Tu signo Zodiacal es Cancer"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
					}
				break;
				
				case 7:
					cout<<"Naciste en Julio"<<endl;
					
					if (dia_nacimiento<=23)
					{
						cout<<"Tu signo Zodiacal es Cancer"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
						
					}
					
					else 
					{
						cout<<"Tu signo Zodiacal es Leo"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
						
					}
					
					break;
	
	case 8:
		
		
		cout<<"Naciste en Agosto"<<endl;
		
		if (dia_nacimiento<=23)
	{
		cout<<"Tu signo Zodiacal es Leo"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;	
	}
		else 
		{
			cout<<"Tu signo Zodiacal es Virgo"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
	break;
	
	case 9:
	cout<<"Naciste en Septiembre"<<endl;
	
	if (dia_nacimiento<=22)
	
	{
		cout<<"Tu signo Zodiacal es Virgo"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}	
	else
	{
		cout<<"Tu signo Zodiacal es Libra"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
	}
	break;
	
	case 10:
		cout<<"Naciste en Octubre"<<endl;
		
		if (dia_nacimiento<=22)
		{
			cout<<"Tu signo Zodiacal es Libra"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
		else 
		{
			cout<<"Tu signo Zodiacal es Escorpio"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
		
		break;
	case 11:
		cout<<"Naciste en Noviembre"<<endl;
		
		if (dia_nacimiento<=21)
		{
			cout<<"Tu signo Zodiacal es Escorpio"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
	
		else 
		{
			cout<<"Tu signo Zodiacal es Sagitario"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
		}
	break;
	
	case 12:
		cout<<"Naciste en Diciembre"<<endl;
		
		if (dia_nacimiento<=21)
		
		{
			cout<<"Tu signo Zodiacal es Sagitario"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
			
		}
		
		else
	 {
	 	cout<<"Tu signo Zodiacal es Capricornio"<<endl;
					cout<<"Segun los Caballeros del Zodiaco, Geminis es tu enemigo \n"<<endl;
			
		}
		break;
		
		default:
			cout<<"Opcion no valida";
		
	}
	cout<<"Todos son enemigos de Geminis =)";
	
	return 0;
}
