#include "Vehiculo.h"
#include "Auto.h"
#include "Camioneta.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "Compra.h"

#ifndef SERVICIO_H
#define SERVICIO_H

using namespace std;

//Clase servicio
class Servicio{
	private:
            int   folio;
            char  fecha[30];
            char  nomTecnico[30];
		    char  tipoServicio[30];
            float precio;
    public: Auto *aut;//objeto de tipo auto para la azociacion
            Camioneta *cam;//objeto de tipo camionneta para la azociacion
		    Servicio();
		    Servicio(int f,char* e,char* t,char* g,float p);
            void setFolio(int f);
	        void setFecha(char *e);
	        void setNomTecnico(char *t);
	        void setTipoServicio(char *g);
		    void setPrecio(float p);
            int   getFolio();
			char* getFecha();
			char* getNomTecnico();
            char* getTipoServicio();
            float getPrecio();
		    int registrarServ(int);
			void imprimirServ();
		    void editarServ();
		    int registrarServC(int);
			void imprimirServC();
		    void editarServC();
            void registrarAuto(Auto *aut);//para la azociacion de un auto tiene servicios
            void registrarCamioneta(Camioneta *cam);//para la azociacion de una camioneta tiene servicios
};

#endif
