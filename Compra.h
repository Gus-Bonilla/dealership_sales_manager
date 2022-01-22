#include "Cliente.h"

#ifndef COMPRA_H
#define COMPRA_H

using namespace std;

//Clase compra
class Compra{
	private:
		    int   nom_compra;
            char   fecha_compra[30];
            char   forma_pago[30];
            char   nomSuc[30];
            float  costo_total;
    public: Cliente *cte;//objeto de tipo cliente
            
    	public:
		    Compra();
		    Compra(int n,char* f,char* p,char* s, float t);
            void setnom_compra(int n);
	        void setfecha_compra(char* f);
	        void setforma_pago(char* p);
		    void setnomSuc(char* s);
		    void setcosto_total(float t);
            int getnom_compra();
			char* getfecha_compra();
            char* getforma_pago();
            char* getnomSuc();
            float getcosto_total();
		    int registrarComp(int);
			void imprimirComp();
		    void editarComp(int,int);
            void registrarCliente(Cliente *cte);//relacion de un cliente realiza compra
            
};

#endif
