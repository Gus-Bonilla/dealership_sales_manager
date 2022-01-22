#include "Vehiculo.h"

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor vehiculo
Vehiculo::Vehiculo(){
	    this->setMarca("vacio");
	    this->setModelo("vacio");
	    this->setAnio(0);
       	this ->setF("None", "None", "None","None");
}

//Set clase vehiculo (Clase padre)
void Vehiculo::setMarca(char *m){
	    strcpy(this->marca,m);
}
void Vehiculo::setModelo(char *n){
        strcpy(this->modelo,n);
}
void Vehiculo::setAnio(int a){
	    this->anio=a;
}
//Get clase vehiculo (Clase padre)
char* Vehiculo::getMarca(){
	return this->marca;
}
char* Vehiculo::getModelo(){
	return this->modelo;
}
int Vehiculo::getAnio(){
	return this->anio;
}
//Set estructura clase vehicuo (Clase padre)
void Vehiculo::setF(char*a,char*b,char*c,char*d){
	strcpy(this->f.nomFabricante,a);
	strcpy(this->f.domicilioF,b);
	strcpy(this->f.rfc,c);
    strcpy(this->f.paisOrigen,d);
}
//Get estructura clase vehicuo (Clase padre)
char* Vehiculo::getNomFabricante(){
	return this->f.nomFabricante;
}
char* Vehiculo::getDomicilioF(){
	return this->f.domicilioF;
}
char* Vehiculo::getRfc(){
	return this->f.rfc;
}
char* Vehiculo::getPaisOrigen(){
	return this->f.paisOrigen;
}

