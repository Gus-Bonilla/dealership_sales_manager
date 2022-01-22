#ifndef CAMIONETA_H
#define CAMIONETA_H

#include "Vehiculo.h"

using namespace std;

//Clase camioneta (Clase hija 2)
class Camioneta:public Vehiculo{
	private:
		    char  descripcion[30];
            char  color[30];
            int   numPasajeros;
            float cilindraje;
            float costo;
    public:
		    Camioneta();
		    Camioneta(char*,char*,int,char*,char*,char*,char*,char*,char*,int,float,float);
	        void setDescripcion(char *);
	        void setColor(char *);
		    void setNumPasajeros(int);
		    void setCilindraje(float);
		    void setCostoC(float);
			char* getDescripcion();
            char* getColor();
            int   getNumPasajeros();
            float getCilindraje();
            float getCostoC();
		    virtual int registrar(int);
			virtual	void imprimir();
			virtual void editar(int,int);
			void escribir(int,int);
			void lectura();
			void aniadir(int,int);
};

#endif
