#include "Servicio.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor servicio
Servicio::Servicio(){
        this->setFolio(0);
        this->setFecha("vacio");
        this->setNomTecnico("vacio");
        this->setTipoServicio("vacio");
        this->setPrecio(0);
        this->aut = new Auto();
}

//Set clase servicio
void Servicio::setFolio(int f){
	 this->folio=f;
}
void Servicio::setFecha(char* e){
	 strcpy(this->fecha,e);
}
void Servicio::setNomTecnico(char* t){
	 strcpy(this->nomTecnico,t);
}
void Servicio::setTipoServicio(char* g){
	 strcpy(this->tipoServicio,g);
}
void Servicio::setPrecio(float p){
	 this->precio=p;
}
//Get clase servicio
int Servicio::getFolio(){
	return this->folio;
}
char* Servicio::getFecha(){
	return this->fecha;
}
char* Servicio::getNomTecnico(){
	return this->nomTecnico;
}
char* Servicio::getTipoServicio(){
	return this->tipoServicio;
}
float Servicio::getPrecio(){
    return this->precio;
}

//Clase Servicio registar sservicio carro
int Servicio :: registrarServ(int cont_serv){
	cout << "Ingrese Folio : " << endl;
	fflush(stdin);
	cin >> folio;
	setFolio(folio);
	cout << "Ingrese la Fecha : " << endl;
	fflush(stdin);
	cin.getline(fecha, 30);
	setFecha(fecha);
	cout << "Ingrese el Tipo de Servicio : " << endl;
	fflush(stdin);
	cin.getline(tipoServicio, 30);
	setTipoServicio(tipoServicio);
	cout << "Ingrese el Nombre del Tecnico : " << endl;
	fflush(stdin);
	cin.getline(nomTecnico, 30);
	setNomTecnico(nomTecnico);
	cout << "Ingrese Precio : " << endl;
	fflush(stdin);
	cin >> precio;
	setPrecio(precio);
	cont_serv ++;
	return cont_serv ;
}
//Clase Servicio registar servicio camioneta
int Servicio :: registrarServC(int cont_servc){
	cout << "Ingrese Folio : " << endl;
	fflush(stdin);
	cin >> folio;
	setFolio(folio);
	cout << "Ingrese la Fecha : " << endl;
	fflush(stdin);
	cin.getline(fecha, 30);
	setFecha(fecha);
	cout << "Ingrese el Tipo de Servicio : " << endl;
	fflush(stdin);
	cin.getline(tipoServicio, 30);
	setTipoServicio(tipoServicio);
	cout << "Ingrese el Nombre del Tecnico : " << endl;
	fflush(stdin);
	cin.getline(nomTecnico, 30);
	setNomTecnico(nomTecnico);
	cout << "Ingrese Precio : " << endl;
	fflush(stdin);
	cin >> precio;
	setPrecio(precio);
	cont_servc ++;
	return cont_servc ;
}
//Case editar servicio
void Servicio::editarServ(){
    int opc;
	int folio;
	char tipo[30],serv[30],fech[30];
	float precio;
	cout<<"Que atributo desea modificar "<<endl;
	cout<<"1-Folio\n2-Fecha\n3-Nombre Tecnico\n4-Tipo de Servicio\n5-Precio\n6-Salir"<<endl;
	cin>>opc;
    switch(opc){
	case 1:
	cout<<"Ingrese Folio:"<<endl;
	fflush(stdin);
	cin>>folio;
	this->setFolio(folio);
	break;
	case 2:
    cout<<"Ingrese Fecha:"<<endl;
	while(getchar()!= '\n');
	cin.getline(fech,30);
	this->setFecha(fech);
	break;
	case 3:
	cout<<"Ingrese nombre tecnico de servicio:"<<endl;
    while(getchar()!= '\n');
	cin.getline(serv,30);
	this->setNomTecnico(serv);
	break;
    case 4:
    cout<<"Ingrese tipo de servicio:"<<endl;
	while(getchar()!= '\n');
	cin.getline(tipo,30);
	this->setTipoServicio(tipo);
	break;
	case 5:
    cout<<"Ingrese precio:"<<endl;
	fflush(stdin);
	cin>>precio;
	this->setPrecio(precio);
	break;
 }
}
//Servicio imprimir servicio carro
void Servicio:: imprimirServ(){
	cout << "Nombre del Fabricante \t Domicilio \t Rfc \t Pais de Origen " << endl;
	cout << this -> aut->getNomFabricante()<< " \t\t\t " << this ->aut-> getDomicilioF() << " \t\t" << this ->aut->getRfc() << " \t\t "<< this ->aut-> getPaisOrigen() << endl;
	cout << endl;
	cout << "Folio \t Fecha \t Tipo de Servicio  \t Tipo de Servicio \t Nombre del Tecnico  \t Precio\t\tMarca \t Modelo \t Anio \t Descripcion \t Color \t Num.Puertas  \t Costo " << endl;
	cout << this -> getFolio() << " \t " << this -> getFecha() << " \t\t " << this -> getTipoServicio() << " \t " <<  this -> getNomTecnico() << "  \t\t" << this -> getPrecio() << " \t\t "<<this->aut->getMarca()<<"\t"<<this->aut->getModelo()<<"\t\t"<<this->aut->getAnio()<<"\t"<<this->aut->getDescripcion()<<"\t\t"<<this->aut->getColor()<<"\t"<<this->aut->getNumPuertas()<<"\t\t"<<this->aut->getCostoA()<< endl;
	cout << endl;
}
//Servicio imprimir servicio camioneta
void Servicio:: imprimirServC(){
	cout << "Nombre del Fabricante \t Domicilio \t Rfc \t Pais de Origen " << endl;
	cout << this -> cam->getNomFabricante()<< " \t\t\t " << this ->cam-> getDomicilioF() << " \t\t" << this ->cam->getRfc() << " \t\t "<< this ->cam-> getPaisOrigen() << endl;
	cout << endl;
	cout << "Folio \t Fecha \t Tipo de Servicio  \t Tipo de Servicio \t Nombre del Tecnico  \t Precio\t\tMarca \t Modelo \t Anio \t Descripcion \t Color \t Num.Puertas  \t Costo " << endl;
	cout << this -> getFolio() << " \t " << this -> getFecha() << " \t\t " << this -> getTipoServicio() << " \t " <<  this -> getNomTecnico() << "  \t\t" << this -> getPrecio() << " \t\t "<<this->cam->getMarca()<<"\t"<<this->cam->getModelo()<<"\t\t"<<this->cam->getAnio()<<"\t"<<this->cam->getDescripcion()<<"\t\t"<<this->cam->getColor()<<"\t"<<this->cam->getNumPasajeros()<<"\t\t"<<this->cam->getCilindraje()<<"\t\t"<<this->cam->getCostoC()<< endl;
	cout << endl;
}
//Asociacion de auto y servucio
 void Servicio::registrarAuto(Auto *a){
     this->aut=a;
 }
 //Asociacion de camuineta y servicio
 void Servicio::registrarCamioneta(Camioneta *c){
     this->cam=c;
 }
