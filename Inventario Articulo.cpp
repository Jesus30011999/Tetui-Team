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
	cout<<"Inserte el codigo a cambiar"<<endl;
	cin>>opc;
	system("cls");
	for(n=1; n<=15; n=n+1)
	{if(opc==codigo[n])
		{
			cout<<"Inserte el numero a sumar"<<endl;
			cin>>s;
			cantidad[opc]=cantidad[opc]+s;
			cout<<"Se le sumo: "<<s<<endl;
		}
		else
		{cout<<"codigo no encontrado,presione enter"<<endl;}
}
	
	
	system("cls");
}
void bajas()
{
	cout<<"Inserte el codigo a cambiar"<<endl;
	cin>>opc;
	system("cls");
	for(n=1; n<=15; n=n+1)
	{	if(opc==codigo[n])
		{
			cout<<"Inserte el numero a restar"<<endl;
			cin>>s;
			cantidad[opc]=cantidad[opc]-s;
			cout<<"Se le resto: "<<s<<endl;
		}
		else
		{cout<<"codigo no encontrado,presione enter"<<endl;}}

	system("cls");
}
void cambiar()
{
	cout<<"Inserte el codigo a cambiar"<<endl;
	cin>>opc;
	system("cls");
	for(n=1; n<=15; n=n+1)
	{
	if(opc==codigo[n])
		{
					cout<<"Inserte la cantidad que quiere poner"<<endl;
					cout<<"Cantidad: "<<opc<<endl;
					cin>>cantidad[n];
		}
		else
		{cout<<"codigo no encontrado"<<endl;}}
	
	system("cls");
}
void imprimir()
{

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
}
void Altas()
{
    
	do
	{		cout<<"Inserte el codigo que quieres agregar"<<endl;
			cin>>opc;
			n=opc;
				if(opc==codigo[n] and n<=15 and n>=1)
				{
					BA=true;
					system("cls");
					cout<<"Dato existente"<<endl;
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
	
	do
	{
		cout<<"Inserte el codigo a quitar"<<endl;
		cin>>opc;
		n=opc;
		
			if(opc=codigo[n] and n<=15)
			{
				BA=true;
				system("cls");
				cout<<"Presione Enter para continuar "<<endl;
				*producto[opc]=0;
				codigo[opc]=0;
				cantidad[opc]=0;
				precio[opc]=0;
				cout<<"Se borraron los datos"<<endl;
				getch();
				system("cls");		
			}
			else
			{		  
				BA=false;
				system("cls");
				cout<<"Dato no existente"<<endl;
				getch();
				system("cls");
			}
			n=n+1;
		}
		while(BA==false);
}
void Cambiar()
{
do
	{
		cout<<"Inserte el codigo a cambiar"<<endl;
		cin>>opc;
		n=opc;
		
			if(opc=codigo[n] and n<=15)
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
				cout<<"Se cambiaron los datos"<<endl;
				getch();
				system("cls");
				
			}
			else
			{		  
				BA=false;
				system("cls");
				cout<<"Dato no existente"<<endl;
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
	cout<<"Menu del Inventario"<<endl;
	cout<<"Introduzca 1 para altas\n\nIntroduzca 2 para bajas\n\nIntroduzca 3 para cambiar"<<endl;
	cin>>op1;
	switch(op1){
		case 1:{altas();break;}
		case 2:{bajas();break;}
		case 3:{cambiar();break;}
		default:{cout<<"error,presione enter para continuar"<<endl;getch();}
		}
	

}
void Articulos()
{
	cout<<"Menu de Articulos"<<endl;
	cout<<"Introduzca 1 para altas\n\nIntroduzca 2 para bajas\n\nIntroduzca 3 para cambiar"<<endl;
	cin>>op1;
	switch(op1){
		case 1:{Altas();break;}
		case 2:{Bajas();break;}
		case 3:{Cambiar();break;}
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
	cout<<"Programa para altas, bajas e imprimir"<<endl;
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
		cout<<"Menu principal\n\n"<<endl;
		cout<<"Inserte 1 si deseas ir al menu de Inventario \n\nInserte 2 si deseas ir al menu de Articulos \n\nInserte 3 si deseas Imprimir \n\nInserte 4 si desea Salir"<<endl;
		cin>>op;
		system("cls");
		switch(op)
		{
			case 1:
				{Inventario();break;}
			case 2:
				{Articulos();break;}
			case 3:
				{	system("color 05");imprimir();break;}
			case 4:
				{Salir();break;}
			default:
			{cout<<"error,presione enter para continuar"<<endl;getch();}
		}
		cout<<"deseas salir del programa? 1 para salir 0 para continuar utilizandolo"<<endl;
		cin>>salir;
		system("cls");
	}
cout<<"el programa se cerrara"<<endl;
}
