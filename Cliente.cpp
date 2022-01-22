#include "Cliente.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor cliente
Cliente::Cliente(){
        this->setnom_cte("vacio");
	    this->setapell_cte("vacio");
	    this->setdom_cte("vacio");
		this->setnum_cte(0);
		this->settel_cte(0);
}

//Set clase cliente
void  Cliente::setnom_cte(char*a){
	strcpy(this->nom_cte,a);
}
void Cliente::setapell_cte(char*b){
	strcpy(this->apell_cte,b);
}
void Cliente::setdom_cte(char*c){
	strcpy(this->dom_cte,c);
}
void Cliente::setnum_cte(int n){
	this->num_cte=n;
}
void Cliente::settel_cte(int t){
	this->tel_cte=t;
}
//Get clase cliente
char*  Cliente::getnom_cte(){
	return this->nom_cte;
}
char*  Cliente::getapell_cte(){
	return this->apell_cte;
}
char* Cliente::getdom_cte(){
	return this->dom_cte;
}
int Cliente::getnum_cte(){
	return this->num_cte;
}
int Cliente::gettel_cte(){
	this->tel_cte;
}

 //Clase registrar cliente
int Cliente::registrarCte(int cont){
	cout<<"Ingrese Nombre del Cliente:"<<endl;
    fflush(stdin);
	cin.getline(nom_cte, 30);
	setnom_cte(nom_cte);
	cout<<"Ingrese Apellidos del Clientee:"<<endl;
    fflush(stdin);
	cin.getline(apell_cte, 30);
	setapell_cte(apell_cte);
	cout<<"Ingrese Domicilio del Cliente:"<<endl;
    fflush(stdin);
	cin.getline(dom_cte, 30);
	setdom_cte(dom_cte);
	cout<<"Ingrese numero de cliente:"<<endl;
	fflush(stdin);
	cin>>num_cte;
	setnum_cte(num_cte);
	cout<<"Ingrese el telefono del cliente:"<<endl;
	fflush(stdin);
	cin>>tel_cte;
	settel_cte(tel_cte);
	cont ++;
	return cont;
}
//Clase editar cliente
void Cliente::editarCte(int encontrado, int cont){
 		int opc = 0, dato_modificador_i = 0;
		float dato_modificador_r;
		char dato_modificador_c[30];
        cout<<"Que desea editar"<<endl;
        cout<<"1-Nombre . \n2-Apellidos. \n3-Domicilio. \n4-Numero del cliente. \n5-Telefono del cliente. \n6-Regresar. "<<endl;
        cout << "Ingrese una opcion: " << endl;
		cin>>opc;
        switch(opc){
	    case 1:
	    	system("cls");
            cout << "Ingrese Nombre" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setnom_cte(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 2:
	    	system("cls");
			cout << "Ingrese Apellidos" << endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setapell_cte(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 3:
	    	system("cls");
	   		cout<<"Ingrese Domicilio:"<<endl;
			fflush(stdin);
			cin.getline(dato_modificador_c, 30);
			setdom_cte(dato_modificador_c);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 4:
	   		system("cls");
	    	cout<<"Ingrese num. de Cliente:"<<endl;
	    	fflush(stdin);
			cin >> dato_modificador_i;
			setnum_cte(dato_modificador_i);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 5:
	    	system("cls");
	    	cout<<"Ingrese el telefono:"<<endl;
	    	fflush(stdin);
			cin >> dato_modificador_i;
			settel_cte(dato_modificador_i);
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
//Clase imprimir cliente
void Cliente::imprimirCte(){
	cout << "Nombre del Cliente \t Apellido \t Domicilio \t Num Cliente \t Telefono " << endl;
 	cout<<this->getnom_cte()<<"\t\t\t"<<this->getapell_cte()<<"\t\t"<<this->getdom_cte()<<"\t\t"<<this->getnum_cte()<<"\t\t"<<this->gettel_cte()<<endl;
}
