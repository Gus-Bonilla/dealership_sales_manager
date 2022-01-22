#include "Compra.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor compra
Compra::Compra(){
        this->setnom_compra(0);
	    this->setfecha_compra("vacio");
	    this->setforma_pago("vacio");
		this->setnomSuc("vacio");
		this->setcosto_total(0);
}

//Set clase compra
void Compra::setnom_compra(int n){
	this->nom_compra=n;
}
void Compra::setfecha_compra(char*f){
	strcpy(this->fecha_compra,f);
}
void Compra::setforma_pago(char*p){
	strcpy(this->fecha_compra,p);
}
void Compra::setnomSuc(char*s){
	strcpy(this->nomSuc,s);
}
void Compra::setcosto_total(float t){
	this->costo_total=t;
}
//Gets clase compra
int Compra::getnom_compra(){
	return this->nom_compra;
}
char* Compra::getfecha_compra(){
	return this->fecha_compra;
}
char* Compra::getforma_pago(){
	return this->forma_pago;
}
char* Compra::getnomSuc(){
	return this->nomSuc;
}
float Compra::getcosto_total(){
	return this->costo_total;
}

//Registrar compra
int Compra :: registrarComp(int cont_compra){
	cout << "Ingrese num. Compra : " << endl;
	fflush(stdin);
	cin >> nom_compra;
	setnom_compra(nom_compra);
	cout << "Ingrese la Fecha : " << endl;
	fflush(stdin);
	cin.getline(fecha_compra, 30);
	setfecha_compra(fecha_compra);
	cout << "Ingrese la forma de pago : " << endl;
	fflush(stdin);
	cin.getline(forma_pago, 30);
	setforma_pago(forma_pago);
	cout << "Ingrese el Nombre de la Sucursal : " << endl;
	fflush(stdin);
	cin.getline(nomSuc, 30);
	setnomSuc(nomSuc);
	cout << "Ingrese Costo: " << endl;
	fflush(stdin);
	cin >> costo_total;
	setcosto_total(costo_total);
	cont_compra ++;
	return cont_compra ;
}
//Imprimir compra
void Compra:: imprimirComp(){
	cout << "Num Compra \t Fecha \t Forma de Pago \t Nombre Sucursal \t CostoTotal " << endl;
	cout << this -> getnom_compra()<< " \t " << this ->getfecha_compra() << " \t\t\t" << this ->getforma_pago() << "\t\t \t\t "<< this ->getnomSuc() << "\t\t "<< this ->getcosto_total()<< endl;
	cout << endl;
	cout << "Nombre del Cliente \t Apellido \t Domicilio \t Num Cliente \t Telefono " << endl;
 	cout<<this->cte->getnom_cte()<<"\t\t\t"<<this->cte->getapell_cte()<<"\t\t"<<this->cte->getdom_cte()<<"\t\t"<<this->cte->getnum_cte()<<"\t\t"<<this->cte->gettel_cte()<<endl;
}
//Asociacion cliente  compra
void Compra::registrarCliente(Cliente *c){
	    this->cte=c;
}
