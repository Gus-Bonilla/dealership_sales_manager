#include "Vendedor.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor vendedor
Vendedor::Vendedor(){
	    this->setnombre("vacio");
	    this->setapellidos("vacio");
	    this->setcorreo("vacio");
	    this->setnumEmpleado(0);
	    this->settelefono(0);
}

//Set clase vendedor
void Vendedor::setnombre(char* n){
	strcpy(this->nombre,n);
}
void Vendedor::setapellidos(char* a){
	strcpy(this->apellidos,a);
}
void Vendedor::setcorreo(char* c){
	strcpy(this->correo,c);
}
void Vendedor::setnumEmpleado(int nu){
	this->numEmpleado=nu;
}
void Vendedor::settelefono(int t){
	this->telefono=t;
}
//Get clase vendedor
char* Vendedor::getnombre(){
	return this->nombre;
}
char* Vendedor::getapellidos(){
	return this->apellidos;
}
char* Vendedor::getcorreo(){
	return this->correo;
}
int Vendedor::getnumEmpleado(){
	return this->numEmpleado;
}
int Vendedor::gettelefono(){
	return this->telefono;
}

//Registrar vendedor
int Vendedor::registrarV(int cont){
	cout<<"Ingrese nombre del vendedor:"<<endl;
    fflush(stdin);
	cin.getline(nombre, 30);
	setnombre(nombre);
	cout<<"Ingrese apellidos del vendedor:"<<endl;
    fflush(stdin);
	cin.getline(apellidos, 30);
	setapellidos(apellidos);
	cout<<"Ingrese correo del vendedor:"<<endl;
    fflush(stdin);
	cin.getline(correo, 30);
	setcorreo(correo);
	cout<<"Ingrese numero de empleado:"<<endl;
	fflush(stdin);
	cin>>numEmpleado;
	setnumEmpleado(numEmpleado);
	cout<<"Ingrese telefono de vendedor:"<<endl;
	fflush(stdin);
	cin>>telefono;
	settelefono(telefono);
	cont ++;
	return cont;
}
//Editar vendedeor
void Vendedor::editarV(int encontrado, int cont){
 		int opc = 0, dato_modificador_i = 0;
		float dato_modificador_r;
		char dato_modificador_c[30];
        cout<<"Que desea editar"<<endl;
        cout<<"1-Nombre Vendedor . \n2-Apellidos Vendedor. \n3-Correo Vendedor. \n4-Numero Empleado. \n5-Telefono del Vendedor. \n6-Regresar. "<<endl;
        cout << "Ingrese una opcion: " << endl;
		cin>>opc;
        switch(opc){
	    case 1:
	    	system("cls");
       	cout << "Ingrese Nombre" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setnombre(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 2:
	    	system("cls");
			cout << "Ingrese Apellidos" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setapellidos(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 3:
	    	system("cls");
	   		cout<<"Ingrese Correo:"<<endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setcorreo(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 4:
	   		system("cls");
	    	cout<<"Ingrese num. de Empleado:"<<endl;
	    	fflush(stdin);
			cin >> dato_modificador_i;
			setnumEmpleado(dato_modificador_i);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 5:
	    	system("cls");
	    	cout<<"Ingrese el telefono vendedor:"<<endl;
	    	fflush(stdin);
			cin >> dato_modificador_i;
			settelefono(dato_modificador_i);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 6:
			system("cls");
			system("pause");
		break;
		default:
			system("cls");
			system("pause");
		break;
 }
}
//Imprimir vendedor
void Vendedor::imprimirV(){
    cout << "Nombre del Vendedor \t Apellido \t Correo \t Num Empleado \t Telefono " << endl;
 	cout<<this->getnombre()<<"\t\t\t"<<this->getapellidos()<<"\t\t\t"<<this->getcorreo()<<"\t\t\t"<<this->getnumEmpleado()<<"\t"<<this->gettelefono()<<endl;
}
