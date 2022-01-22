#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

using namespace std;

//Clase auto (Clase hija 1)
class Auto:public Vehiculo{
	private:
            //Atributos
		    char  descripcion[30];
            char  color[30];
            int   numPuertas;
            float costo;
    public://Metodos
		    Auto();//Constructor Default
		    //Constructor Personalizado
		   Auto(char*,char*,int,char*,char*,char*,char*,char*,char*,int,float);
		    //Sets
	        void setDescripcion(char *);
	        void setColor(char *);
		    void setNumPuertas(int);
		    void setCostoA(float);
		    //Gets
			char* getDescripcion();
            char* getColor();
            int   getNumPuertas();
            float getCostoA();
		    virtual int registrar(int);
			virtual void imprimir();
		    virtual void editar(int,int);
			void escribir(int,int);//funcion de crear nuevo archivo
			void lectura();//funcion de leer de un archivo
			void aniadir(int,int);//funcion para añadir texto a un archivo existente
};

#endif
