#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
using namespace std;
int salir,opc,op,op1,s,n,codigo[15],cantidad[15];
float precio[15];
char producto[15][20];
bool BA;
void altas()
{
	cout<<"//Usted a seleccionado la opcion de altas en el inventario//\n"<<endl;
do
	{
		cout<<"Inserte el codigo que desea para incrementar la cantidad del producto\n"<<endl;
		cin>>opc;
		n=opc;
		system("cls");
			if(opc=codigo[n] and n>=1 and n<=15)
			{
				BA=true;
				cout<<"Usted escogio el codigo: "<<opc<<"\nEl producto que le corresponde al codigo es: "<<producto[opc]<<"\nEn el cual tiene una cantidad de: "<<cantidad[opc]<<"\n"<<endl;
				cout<<"Inserte el numero a sumar"<<endl;
				cin>>s;
				cantidad[opc]=cantidad[opc]+s;
				cout<<"Su cantidad ahora es: "<<cantidad[opc]<<"\nPresione enter para continuar"<<endl;getch();
			}
	
			else
			{		  
				BA=false;
				cout<<"Dato no existente,presione enter para repetir"<<endl;
				getch();
				system("cls");
			}
			n=n+1;
		}
		while(BA==false);
	
	system("cls");
}
void bajas()
{
cout<<"//Usted a seleccionado la opcion de bajas en el inventario//\n"<<endl;
do
	{
		cout<<"Inserte el codigo que desea para reducir la cantidad de producto\n"<<endl;
		cin>>opc;
		n=opc;
		system("cls");
			if(opc=codigo[n] and n>=1 and n<=15)
			{
				BA=true;
				cout<<"Usted escogio el codigo: "<<opc<<"\nEl producto que le corresponde al codigo es: "<<producto[opc]<<"\nEn el cual tiene una cantidad de: "<<cantidad[opc]<<"\n"<<endl;
				cout<<"Inserte el numero a restar"<<endl;
				cin>>s;
				cantidad[opc]=cantidad[opc]-s;
				cout<<"Su cantidad ahora es: "<<cantidad[opc]<<"\nPresione enter para continuar"<<endl;getch();
			}
	
			else
			{		  
				BA=false;
				cout<<"Dato no existente,presione enter para repetir"<<endl;
				getch();
				system("cls");
			}
			n=n+1;
		}
		while(BA==false);
	
	system("cls");
}
void cambiar()
{
	cout<<"//Usted a seleccionado la opcion de bajas en el inventario//\n"<<endl;
do
	{
		cout<<"Inserte el codigo que desea para cambiar la cantidad de producto\n"<<endl;
		cin>>opc;
		n=opc;
		system("cls");
			if(opc=codigo[n] and n>=1 and n<=15)
			{
				BA=true;
				cout<<"Usted escogio el codigo: "<<opc<<"\nEl producto que le corresponde al codigo es: "<<producto[opc]<<"\nEn el cual tiene una cantidad de: "<<cantidad[opc]<<"\n"<<endl;
				cout<<"Inserte la cantidad con la que quiere reemplazar la anterior"<<endl;
				cin>>cantidad[n];
				cout<<"Su cantidad ahora es: "<<cantidad[opc]<<"\nPresione enter para continuar"<<endl;getch();
			}
	
			else
			{		  
				BA=false;
				cout<<"Dato no existente,presione enter para repetir"<<endl;
				getch();
				system("cls");
			}
			n=n+1;
		}
		while(BA==false);
	
	system("cls");

}
void imprimir()
{
	cout<<"//Usted a seleccionado la opcion de impresion.//\nSe mostraran los datos de los codigos existentes.\n"<<endl;
		for(n=1; n<=15; n=n+1)
				{
				
					if(codigo[n]==0){
						
						cout<<n<<".-Este espacio esta vacio\n"<<endl;
					
					}
					else
					{
						cout<<"Producto: "<<n<<endl;
						cout<<"Codigo: "<<codigo[n]<<endl;
						cout<<"Nombre: "<<producto[n]<<endl;
						cout<<"Precio: "<<precio[n]<<endl;
						cout<<"Cantidad: "<<cantidad[n]<<"\n"<<endl;
					}
					
				}
				cout<<"Impresion terminada,presione enter para continuar"<<endl;getch();
				system("cls");
}
void Altas()
{
    cout<<"//Usted a seleccionado la opcion de altas en Articulos//\n"<<endl;
	do
	{		cout<<"Inserte el codigo que quieres agregar"<<endl;
			cin>>opc;
			n=opc;
				if(opc==codigo[n] and n>=1 and n<=15)
				{
					BA=true;
					system("cls");
					cout<<"Dato existente,presione enter para repetir"<<endl;
					getch();
					system("cls");
				}
				else
				{
				  
					BA=false;
					system("cls");
					cout<<"Inserte el codigo, nombre de producto, precio y cantidad de el producto nuevo"<<endl;
					codigo[opc]=opc;
					cout<<"Producto: "<<endl;
					cin.getline(producto[opc],20); cin.getline(producto[opc],20);
					cout<<"Precio: "<<endl;
					cin>>precio[opc];
					cout<<"Cantidad: "<<endl;
					cin>>cantidad[opc];
					system("cls");
				}
					n=n+1;
			}
			while(BA==true);
		system("cls");
}
void Bajas()
{
	cout<<"//Usted a seleccionado la opcion de bajas en Articulos//\n"<<endl;
	do
	{
		cout<<"Inserte el codigo a quitar"<<endl;
		cin>>opc;
		n=opc;
		
			if(opc=codigo[n] and n>=1 and n<=15)
			{
				BA=true;
				system("cls");
				cout<<"Se borraran los datos,presione Enter para continuar "<<endl;getch();
				*producto[opc]=0;
				codigo[opc]=0;
				cantidad[opc]=0;
				precio[opc]=0;
				cout<<"Se borraron los datos,presione enter para continuar"<<endl;
				getch();
				system("cls");		
			}
			else
			{		  
				BA=false;
				system("cls");
				cout<<"Dato no existente,presione enter para repetir"<<endl;
				getch();
				system("cls");
			}
			n=n+1;
		}
		while(BA==false);
}
void Cambiar()
{
	cout<<"//Usted a seleccionado la opcion de cambio en Articulos//\n"<<endl;
do
	{
		cout<<"Inserte el codigo a cambiar"<<endl;
		cin>>opc;
		n=opc;
		
			if(opc=codigo[n] and n>=1 and n<=15)
			{
				BA=true;
				system("cls");
				cout<<"Inserte los datos del codigo escogido"<<endl;
				cout<<"Producto: "<<endl;
				cin.getline(producto[opc],20); cin.getline(producto[opc],20);
				cout<<"Precio: "<<n<<endl;
				cin>>precio[opc];
				cout<<"Cantidad: "<<n<<endl;
				cin>>cantidad[opc];
				cout<<"Se cambiaron los datos,presione enter para continuar"<<endl;
				getch();
				system("cls");
				
			}
			else
			{		  
				BA=false;
				system("cls");
				cout<<"Dato no existente,presione enter para continuar"<<endl;
				getch();
				system("cls");
				
			}
			n=n+1;
		}
		while(BA==false);
	
	system("cls");
}
void Inventario()
{
	cout<<"//Menu del Inventario//"<<endl;
	cout<<"Introduzca 1 para altas\n\nIntroduzca 2 para bajas\n\nIntroduzca 3 para cambiar"<<endl;
	cin>>op1;
	system("cls");
	switch(op1){
		case 1:{system("color 01");altas();break;}
		case 2:{system("color 01");bajas();break;}
		case 3:{system("color 01");cambiar();break;}
		default:{cout<<"error,presione enter para continuar"<<endl;getch();}
		}
	

}
void Articulos()
{
	cout<<"//Menu de Articulos//"<<endl;
	cout<<"Introduzca 1 para altas\n\nIntroduzca 2 para bajas\n\nIntroduzca 3 para cambiar"<<endl;
	cin>>op1;
	switch(op1){
		case 1:{system("color 03");Altas();break;}
		case 2:{system("color 03");Bajas();break;}
		case 3:{system("color 03");Cambiar();break;}
		default:{cout<<"error,presione enter para continuar"<<endl;getch();}
		}
	

}
void Salir()
{
	salir=1;
}
main()
{
	system("color 0a");
	cout<<"//Programa para altas, bajas e imprimir//"<<endl;
	cout<<"Inserte los codigos, nombre de productos, precios y cantidades de 4 productos"<<endl;
				for(n=1; n<=4; n=n+1)
				{
					cout<<"Codigo: "<<n<<endl;
					cin>>codigo[n];
					cout<<"Producto: "<<n<<endl;
					cin.getline(producto[n],20); cin.getline(producto[n],20); 
					cout<<"Precio: "<<n<<endl;
					cin>>precio[n];
					cout<<"Cantidad: "<<n<<endl;
					cin>>cantidad[n];
					system("cls");
				}
				system("cls");
	while(salir==0)
	{
		system("color 06");
		cout<<"//Menu principal//\n"<<endl;
		cout<<"Inserte 1 si deseas ir al menu de Inventario \n\nInserte 2 si deseas ir al menu de Articulos \n\nInserte 3 si deseas Imprimir \n\nInserte 4 si desea Salir"<<endl;
		cin>>op;
		system("cls");
		switch(op)
		{
			case 1:
				{system("color 05");Inventario();break;}
			case 2:
				{system("color 05");Articulos();break;}
			case 3:
				{system("color 05");imprimir();break;}
			case 4:
				{system("color 05");Salir();break;}
			default:
			{cout<<"error,presione enter para continuar"<<endl;getch();}
		}
		cout<<"---Deseas salir del programa? 1 para salir 0 para continuar utilizandolo---"<<endl;
		cin>>salir;
		system("cls");
	}
cout<<"---El programa se cerrara---"<<endl;
}
