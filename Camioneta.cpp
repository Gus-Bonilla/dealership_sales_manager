#include "Camioneta.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor camioneta
Camioneta::Camioneta():Vehiculo(){
	    this->setDescripcion("vacio");
	    this->setColor("vacio");
		this->setNumPasajeros(0);
		this->setCilindraje(0);
		this->setCostoC(0);
}

//Set clase camioneta
void Camioneta::setDescripcion(char* e){
	 strcpy(this->descripcion,e);
}
void Camioneta::setColor(char* c){
	 strcpy(this->color,c);
}
void Camioneta::setNumPasajeros(int p){
	 this->numPasajeros=p;
}
void Camioneta::setCilindraje(float c){
	 this->cilindraje=c;
}
void Camioneta::setCostoC(float t){
	 this->costo=t;
}
//Get clase camioneta
char* Camioneta::getDescripcion(){
	return this->descripcion;
}
char* Camioneta::getColor(){
	return this->color;
}
int Camioneta::getNumPasajeros(){
	return this->numPasajeros;
}
float Camioneta::getCilindraje(){
	return this->cilindraje;
}
float Camioneta::getCostoC(){
	return this->costo;
}

//Imprimir camioneta(Segunda clase hija)
void Camioneta::imprimir(){
	cout << "Nombre del Fabricante \t Domicilio \t Rfc \t Pais de Origen " << endl;
	cout << this -> getNomFabricante()<< " \t\t\t " << this -> getDomicilioF() << " \t\t" << this ->getRfc() << " \t\t "<< this -> getPaisOrigen() << endl;
	cout << "Marca \t Modelo \t Anio \t Descripcion \t Color \t Num.Pasajeros \t Cilindraje \t Costo " << endl;
	cout<<this->getMarca()<<"\t"<<this->getModelo()<<"\t\t"<<this->getAnio()<<"\t"<<this->getDescripcion()<<"\t\t"<<this->getColor()<<"\t"<<this->getNumPasajeros()<<"\t\t"<<this->getCilindraje()<<"\t\t"<<this->getCostoC()<<endl;
}
//Registrar camioneta(Segunda clase hija)
int Camioneta::registrar(int cont){
 	cout << "Nombre del Fabricante" << endl;
	fflush(stdin);
	cin.getline(f.nomFabricante, 30);
	cout << "Domicilio del Fabricante " << endl;
	fflush(stdin);
	cin.getline(f.domicilioF, 30);
	cout << "Rfc del Fabricante " << endl;
	fflush(stdin);
	cin.getline(f.rfc, 15);
	cout << "Pais de Origen" << endl;
	fflush(stdin);
	cin.getline(f.paisOrigen, 30);
	this -> setF(f.nomFabricante, f.domicilioF, f.rfc,f.paisOrigen);
	cout<<"Ingrese marca del vehiculo:"<<endl;
    fflush(stdin);
	cin.getline(marca, 30);
	setMarca(marca);
	cout<<"Ingrese modelo del vehiculo:"<<endl;
    fflush(stdin);
	cin.getline(modelo, 30);
	setModelo(modelo);
	cout<<"Ingrese anio del vehiculo:"<<endl;
	fflush(stdin);
	cin>>anio;
	setAnio(anio);
	cout<<"Ingrese descripcion  de la camioneta:"<<endl;
	fflush(stdin);
	cin.getline(descripcion, 30);
	setDescripcion(descripcion);
	cout<<"Ingrese color  de la camioneta:"<<endl;
	fflush(stdin);
	cin.getline(color, 30);
	setColor(color);
	cout<<"Ingrese numero de asientos para pasajeros:"<<endl;
    fflush(stdin);
	cin>>numPasajeros;
	setNumPasajeros(numPasajeros);
	cout<<"Ingrese cilindraje de la camioneta:"<<endl;
	fflush(stdin);
	cin>>cilindraje;
	setCilindraje(cilindraje);
    cout<<"Ingrese costo  de la camioneta:"<<endl;
	fflush(stdin);
	cin>>costo;
	setCostoC(costo);
	cont ++;
	return cont;
}
//Editar camioneta(Segunda clase hija) 
 void Camioneta::editar(int encontrado, int cont){
 		int opc = 0, dato_modificador_i = 0;
		float dato_modificador_r;
		char dato_modificador_c[30];
		char dato_modificador_cn[30],dato_modificador_cd[30],dato_modificador_cr[30],dato_modificador_cp[30];
        cout<<"Que desea editar"<<endl;
        cout<<"1-Marca. \n2-Modelo. \n3-Anio. \n4-Descripcion. \n5-Color. \n6-Num. puertas. \n7-Cilindraje. \n8-Costo. \n9-Datos del Fabricante.\n10-Regresar. "<<endl;
        cout << "Ingrese una opcion: " << endl;
		cin>>opc;
        switch(opc){
	    case 1:
	    	system("cls");
       	cout << "Ingrese Marca" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setMarca(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 2:
	    	system("cls");
			cout << "Ingrese Modelo" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setModelo(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 3:
	    	system("cls");
			cout << "Ingrese el año" << endl;
			fflush(stdin);
			cin >> dato_modificador_i;
			setAnio(dato_modificador_i);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 4:
	   		system("cls");
	   		cout<<"Ingrese Descripcion:"<<endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setDescripcion(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 5:
	    	system("cls");
			cout << "Ingrese Color" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setColor(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 6:
	    	system("cls");
	    	cout<<"Ingrese num. de asientos para pasajeros:"<<endl;
	    	fflush(stdin);
			cin >> dato_modificador_i;
			setNumPasajeros(dato_modificador_i);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 7:
	    	system("cls");
			cout << "Ingrese Cilindraje" << endl;
			fflush(stdin);
			cin >> dato_modificador_r;
			setCilindraje(dato_modificador_r);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 8:
	    	system("cls");
			cout << "Ingrese Costo" << endl;
			fflush(stdin);
			cin >> dato_modificador_r;
			setCostoC(dato_modificador_r);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 9:
			system("cls");
			cout << "Nombre del Provedor" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_cn, 40);
			cout << "Domicilio del Provedor" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_cd, 40);
			cout << "Rfc del Provedor" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_cr, 14);
			cout << "Pais de Origen" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_cp, 14);
			this -> setF(dato_modificador_cn, dato_modificador_cd,dato_modificador_cr,dato_modificador_cp);
            cout << "Los datos han sido editados: " << endl;
		break;
		case 10:
			system("cls");
			system("pause");
		break;
		default:
			system("cls");
			system("pause");
		break;
 }
}
