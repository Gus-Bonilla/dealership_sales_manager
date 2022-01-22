#ifndef CLIENTE_H
#define CLIENTE_H

using namespace std;

//Clase cliente
class Cliente{
	private:
		    char   nom_cte[30];
		    char   apell_cte[30];
            char   dom_cte[30];
            int    num_cte;
            int    tel_cte;
    public:
		    Cliente();
		    Cliente(char* a,char* b,char* c,int n, int t);
            void setnom_cte(char* a);
	        void setapell_cte(char* b);
	        void setdom_cte(char *c);
		    void setnum_cte(int n);
		    void settel_cte(int t);
            char* getnom_cte();
            char* getapell_cte();
			char* getdom_cte();
            int   getnum_cte();
            int   gettel_cte();
		    int registrarCte(int);
			void imprimirCte();
		    void editarCte(int,int);
};

#endif
