#ifndef VEHICULO_H
#define VEHICULO_H

using namespace std;

//Estructura  proveedor
typedef struct Fabricante{
		char nomFabricante[30];
		char domicilioF[30];
		char rfc[15];
		char paisOrigen[30];
}Fabricante;

//Clase Vehiculo (Clase padre)
class Vehiculo{
	protected:
		//Atributos
		   char marca[30];
		   char modelo[30];
	       int  anio;
           Fabricante f;
    public://Metodos
		   Vehiculo();//Constructor Default
		   //Constructor Personalizado
		  Vehiculo(char*,char*,char*,char*,char*,char*,int);
		   void  setMarca(char *);
		   void  setModelo(char *);
	       void  setAnio(int);
		//Struct Set
		   void  setF(char*,char*,char*,char*);
		//Gets
		   char* getMarca();
		   char* getModelo();
		   int   getAnio();
		//Struct get
		   char* getNomFabricante();
		   char* getDomicilioF();
		   char* getRfc();
		   char* getPaisOrigen();
		   virtual int registrar(int)=0;//funcion polimorfismo registrar para auto y camioneta
		   virtual void editar(int,int)=0;//funcion polimorfismo editar para auto y camioneta
		   virtual void imprimir()=0;//funcion polimorfismo imprimmir para auto y camioneta
		   //No se puede instancia la clase padre por el polimorfismo
};

#endif
