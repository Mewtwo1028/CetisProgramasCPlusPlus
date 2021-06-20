//Vigésimo noveno programa. Te dice cuánto tiempo has vivido.

#include <iostream>

using namespace std;

int anio=0;
int mes=0;
int dia=0;
int anion=0;
int dian=0;
int mesn=0;

int main()
 {
 	
 	cout<<"|==========================================================================================|\n" ;     
	    cout<<"             CENTRO DE ESTUDIOS TECNOLOGICOS INDUSTRIALES Y SERVICIOS Nº 100            \n ";
	    cout<<"|======================================================================================|\n" ;    
	    
	  cout<<"|========================================================================================|\n" ;     
cout<<"			Bienvenido al programa de:			Osmar Aldahir Guerra Castillo \n";

	  cout<<"|========================================================================================|\n" ;
	
	cout<<"ingresa el año en el que estamos: "<<endl;
	cin>>anio;
	cout<<"Ingresa el mes en el que estamos"<<endl;
	cin>>mes;
	cout<<"ingresa el dia en el que estamos"<<endl;
	cin>>dia;
	system ("cls");
	
	cout<<"En que año naciste?"<<endl;
	cin>>anion;
	cout<<"En que mes naciste?"<<endl;
	cin>>mesn;
	cout<<"En que dia naciste"<<endl;
	cin>>dian;
	
	int anior= anio-anion;
	int mesesr=anior*12;
	int diasr=mesesr*30;
	int horasr=diasr*24;
	int minsr=horasr*60;
	
	cout<<"Cumpliste/cumpliras "<<anior<<" Años desde que naciste, hasta este año "<<anio<<endl;
	cout<<"Tienes "<<mesesr<<" meses desde que naciste, hasta este año "<<anio<<endl;
	cout<<"Tienes "<<diasr<<" dias desde que naciste, hasta este año "<<anio<<endl;
	cout<<"Tienes "<<horasr<<" horas desde que naciste, hasta este año "<<anio<<endl;
	cout<<"Tienes "<<minsr<<" mins desde que naciste, hasta este año "<<anio<<endl;
	return 0;
}
