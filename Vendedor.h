#ifndef VENDEDOR_H
#define VENDEDOR_H

using namespace std;

//Clase vendedor
class Vendedor{
	private:
		    char  nombre[30];
		    char  apellidos[30];
            char  correo[30];
            int   numEmpleado;
            int   telefono;
    public: 
	        Vendedor();
	        Vendedor(char*n,char*a,char*c, int nu, int t);
            void  setnombre(char* n);
	        void  setapellidos(char* a);
	        void  setcorreo(char*c);
	        void  setnumEmpleado(int nu);
		    void  settelefono(int t);
            char* getnombre();
            char* getapellidos();
			char* getcorreo();
            int   getnumEmpleado();
            int   gettelefono();
		    int registrarV(int);
			void imprimirV();
		    void editarV(int,int);
};

#endif
