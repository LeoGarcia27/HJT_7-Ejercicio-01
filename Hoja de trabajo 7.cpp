/*Marvin Leonel García Lémus
  Carnet: 9941-19-12979
  Programacion 1 - Sección B*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


using namespace std;

struct datos{
	
	string nom, apell;
	int edad;
	string sexo;
	string nomG, nomG2;
	char dep[50]; 
	
	
} datos = {"info_datos"};

void datos_ninios();


main(){
	
	cout<<"\n\n\n\n";Sleep(500);
	cout<<"\t\t\t\t _____________________________________________________\n";Sleep(100);
	cout<<"\t\t\t\t ||                                                 ||\n";Sleep(100);
	cout<<"\t\t\t\t ||  I N F O R M A C I O N   E S T A D I S T I C A  ||\n";Sleep(100);
	cout<<"\t\t\t\t ||_________________________________________________||\n\n";Sleep(1200);
	
	cout<<"\n\t\tA continuacion se abrira un formulario donde debe de ingresar los datos que se le solicita\n\n";Sleep(2000);
	
	cout<<"\t\t\t UNICEF recopilara la informacion para estadisticas de guarderias\n\t\t\t\t\t ubicadas en territorio guatemalteco.\n\n\n";Sleep(3000);
	
	cout<<"\n\t\t\t Cargando, Espere ";
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(2000);
	
		datos_ninios();
	
getch();	
}

void datos_ninios(){
	
	system("cls");
	int num;
	cout<<"\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t Ingrese la informacion que se le solicita a continuacion\n\n";
	cout<<"\t\t\t\t Numero de ninios que desee registrar: "; cin>>num; Sleep(2000);
	
	cout<<"\n\n\t\t\t A continuacion ingresara los datos desde el ninio 1 al ultimo:\n\n";Sleep(3000);
	cout<<"\n\t\t\t Cargando formulario, Espere ";
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(100);
	cout<<" . "; Sleep(2000);
	
		for(int x = 0; x<num; x++){
			system("cls");
			cout<<"\n\t\t Ninio "<<x+1<<" :\n";
			cout<<"\t\t\t Nombre y Apellido: "; 
				cin>>datos.nom; cin>>datos.apell;
			cout<<"\n\t\t\t Sexo: "; 
				cin>>datos.sexo;
			cout<<"\n\t\t\t Edad (En anios): "; 
				cin>>datos.edad;
			cout<<"\n\t\t\t Nombre de guarderia: "; 
				cin>>datos.nomG; cin>>datos.nomG2;
			cout<<"\n\t\t\t Ubicacion (Departamento): "; 
				cin>>datos.dep;	
				
		}
		
		system("cls");
		
		cout<<"\n\n\n";
		cout<<"\t\t\t A continuacion se mostraran los datos recopilados\n\n";Sleep(2000);
		cout<<"\n\t\t\t Cargando Datos, Espere ";
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(100);
		cout<<" . "; Sleep(2000);
		
		system("cls");
		
			cout<<"\n\n\n\n";Sleep(500);
			cout<<"\t\t\t\t _____________________________________________________\n";Sleep(100);
			cout<<"\t\t\t\t ||                                                 ||\n";Sleep(100);
			cout<<"\t\t\t\t ||         D A T O S   R E C O P I L A D O S       ||\n";Sleep(100);
			cout<<"\t\t\t\t ||_________________________________________________||\n\n";Sleep(1200);
			
		
			for(int x = 0; x<num; x++){
				
				cout<<"\n\t\t\t\t Ninio "<<x+1<<" :\n\n";Sleep(100):
				cout<<"\t\t\t\t ________________________________________________            \n";
				cout<<"\t\t\t\t                                                             \n"; 
				cout<<"\t\t\t\t   Nombre y Apellido: "; cout<<datos.nom<<datos.apell<<"     \n";
				cout<<"\t\t\t\t   Sexo: "; cout<<datos.sexo<<"                              \n";
				cout<<"\t\t\t\t   Edad (En anios): "; cout<<datos.edad<<"                   \n";
				cout<<"\t\t\t\t   Nombre de guarderia: "; cout<<datos.nomG<<datos.nomG2<<"  \n";
				cout<<"\t\t\t\t   Ubicacion (Departamento): "; cout<<datos.dep<<"           \n";
				cout<<"\t\t\t\t ________________________________________________            \n";
				
		
				
			}
	

}
