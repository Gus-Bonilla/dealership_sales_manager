#include "Auto.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Constructor auto
Auto::Auto():Vehiculo(){
	    this->setDescripcion("vacio");
	    this->setColor("vacio");
        this->setNumPuertas(0);
		this->setCostoA(0);
}

//Set clase auto
void Auto::setDescripcion(char *de){
	strcpy(this->descripcion,de);
}
void Auto::setColor(char *co){
	strcpy(this->color,co);
}
void Auto::setNumPuertas(int nu){
	this->numPuertas=nu;
}
void Auto::setCostoA(float fa){
	this->costo=fa;
}
//Get clase auto
char* Auto::getDescripcion(){
	return this->descripcion;
}
char* Auto::getColor(){
	return this->color;
}
int Auto::getNumPuertas(){
	return this->numPuertas;
}
float Auto::getCostoA(){
	return this->costo;
}

//Imprimir carro(Primera clase hija)
void Auto::imprimir(){
	cout << "Nombre del Fabricante \t Domicilio \t Rfc \t Pais de Origen " << endl;//imprime datos de la estructura
	cout << this -> getNomFabricante()<< " \t\t\t " << this -> getDomicilioF() << " \t\t" << this ->getRfc() << " \t\t "<< this -> getPaisOrigen() << endl;
	cout << endl;
	cout << "Marca \t Modelo \t Anio \t Descripcion \t Color \t Num.Puertas  \t Costo " << endl;//imprime daros heredados de vehiculo y losde auto
	cout<<this->getMarca()<<"\t"<<this->getModelo()<<"\t\t"<<this->getAnio()<<"\t"<<this->getDescripcion()<<"\t\t"<<this->getColor()<<"\t"<<this->getNumPuertas()<<"\t\t"<<this->getCostoA()<<endl;
	cout << endl;
}
//Registrar carro(Primera clase hija)
int  Auto::registrar(int cont){
    //datos heredados
 	//datos de la estructura
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
    //datos de vehiculo
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
	//datos de auto
	cout<<"Ingrese descripcion del auto:"<<endl;
	fflush(stdin);
	cin.getline(descripcion, 30);
	setDescripcion(descripcion);
	cout<<"Ingrese color del auto:"<<endl;
	fflush(stdin);
	cin.getline(color, 30);
	setColor(color);
	cout<<"Ingrese numero de puertas del auto:"<<endl;
    fflush(stdin);
	cin>>numPuertas;
	setNumPuertas(numPuertas);
    cout<<"Ingrese costo del auto:"<<endl;
	fflush(stdin);
	cin>>costo;
	setCostoA(costo);
	cont ++;
	return cont;
}
//Editar carro(Primera clase hija)
 void Auto::editar(int encontrado, int cont){
 		int opc = 0, dato_modificador_i = 0;
		float dato_modificador_r;
		char dato_modificador_c[30];
		char dato_modificador_cn[30],dato_modificador_cd[30],dato_modificador_cr[30],dato_modificador_cp[30];
        cout<<"Que desea editar"<<endl;
        cout<<"1-Marca. \n2-Modelo. \n3-Anio. \n4-Descripcion. \n5-Color. \n6-Num. puertas. \n7-Costo. \n8-Datos del Fabricante.\n9-Regresar. "<<endl;
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
	    	cout<<"Ingrese num. de puertas:"<<endl;
	    	fflush(stdin);
			cin >> dato_modificador_i;
			setNumPuertas(dato_modificador_i);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 7:
	    	system("cls");
			cout << "Ingrese Costo" << endl;
			fflush(stdin);
			cin >> dato_modificador_r;
			setCostoA(dato_modificador_r);
			cout << "El dato a sido editado: " << endl;
	    break;
	    case 8:
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
		case 9:
			system("cls");
			system("pause");
		break;
		default:
			system("cls");
			system("pause");
		break;
 }
}

//Escritura de archivo de texto
void Auto::escribir(int cont,int i){
	string nomArchivo;//Cadena nombre de archivo
	ofstream archivo;//Creacion de archivo
	cout<<"Digite el nombre del archivo"<<endl;
	fflush(stdin);
	getline(cin,nomArchivo);
	nomArchivo+= ".txt";//Se le agrega la extencion txt al nombre del archivo
	archivo.open(nomArchivo.c_str(),ios::out);//Abrir ael archivo de forma de escritura
	if(archivo.fail()){//Si  hay error al abrir el archivo
        cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);//Salir
	}
	else{
		archivo << "Registro: " << i-1  << endl;//agregar lo siguiente al archvio
		archivo << "Nombre del Fabricante \t Domicilio \t Rfc \t Pais de Origen " << endl;
		archivo << this -> getNomFabricante()<< " \t\t\t " << this -> getDomicilioF() << " \t\t" << this ->getRfc() << " \t\t "<< this -> getPaisOrigen() << endl;
		archivo << endl;
		archivo << "Marca \t Modelo \t Anio \t Descripcion \t Color \t Num.Puertas  \t Costo " << endl;
		archivo<<this->getMarca()<<"\t"<<this->getModelo()<<"\t\t"<<this->getAnio()<<"\t"<<this->getDescripcion()<<"\t\t"<<this->getColor()<<"\t"<<this->getNumPuertas()<<"\t\t"<<this->getCostoA()<<endl;
		archivo << endl;
	}//fin de escritura
	archivo.close();//cerrar el archivo
	system("pause");
}
//Edicion del archivo de texto 
void Auto::aniadir(int cont,int i){
	ofstream archivo;
	string nombre_archivo;
	cout << "Ingrese nombre o direccion del archivo a leer: ";
 	fflush(stdin);
 	getline(cin,nombre_archivo);
 	nombre_archivo += ".txt";
	archivo.open(nombre_archivo.c_str(),ios::app);//abrir archivo modo de añadir texto
	if (archivo.fail()){
		cout<<"No se puede abrir"<<endl;
		exit(1);
	}
	else{
		archivo << "Registro: " << i  << endl;
		archivo << "Nombre del Fabricante \t Domicilio \t Rfc \t Pais de Origen " << endl;
		archivo << this -> getNomFabricante()<< " \t\t\t " << this -> getDomicilioF() << " \t\t" << this ->getRfc() << " \t\t "<< this -> getPaisOrigen() << endl;
		archivo << endl;
		archivo << "Marca \t Modelo \t Anio \t Descripcion \t Color \t Num.Puertas  \t Costo " << endl;
		archivo<<this->getMarca()<<"\t"<<this->getModelo()<<"\t\t"<<this->getAnio()<<"\t"<<this->getDescripcion()<<"\t\t"<<this->getColor()<<"\t"<<this->getNumPuertas()<<"\t\t"<<this->getCostoA()<<endl;
		archivo << endl;
	}
	archivo.close();
}
//Lectura del archivo
void Auto:: lectura(){
	ifstream archivo;
 	string nombre_archivo, texto;
	cout << "Ingrese nombre o direccion del archivo a leer: ";
 	fflush(stdin);
 	getline(cin,nombre_archivo);
 	nombre_archivo += ".txt";
 	archivo.open(nombre_archivo.c_str(),ios::in);//abrir archivo solo modo lectura
 	if(archivo.fail()){
 	 cout << "No se ha podido abrir el archivo";
  	exit(1);
 	}
 while(!archivo.eof()){
  getline(archivo,texto);
  cout << texto << endl;
 }
 archivo.close();
		system("pause");
}
