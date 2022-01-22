#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include<fstream>				//libreria para archivos

#include "Vehiculo.h"
#include "Auto.h"
#include "Camioneta.h"
#include "Servicio.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "Compra.h"

using namespace std;

int main(){
	Auto *aut[5];				//arreglo de objetos de auto
	Camioneta*cam[5];			//arreglo de objetos de camioneta
	Servicio *serv [10];		//arreglo de objetos de servicio
	Cliente *cte[5];			//arreglo de objetos de cliente
	Vendedor* ven[5];			//arreglo de objetos de vendedor
	Compra* comp[10];			//arreglo de objetos de compra
	Fabricante f;
	int bfolio,bnum,bnum1,encontrado_serv,encontrado_servc,encontrado_aut,encontrado_cam,band_aut = 0,band_cam = 0,band_serv = 0,band_servc = 0;
	int opc=0,opc2=0,i=0,contAut=0,contCam=0,band=0,cont_serv = 0,encontrado=0,band1=0,opc1= 0,opc3= 0,opc4= 0,opc5= 0;
	int opc6=0,opc7=0,opc11=0,opc8=0,opc9=0,opc10=0,contVen=0,contCte=0,cont_compra=0;				//contador de cada clase
	int bnc,encontrado_comp=0,band_comp=0,bnumc,band_cte,encontrado_cte=0;
	char buscador[30];
	int encontradoa=0,banda=0,conta=0;
	for(i = 0; i < 5; i ++){
		aut[i] = new Auto();
	}
	for(i = 0; i < 5; i ++){
		cam[i] = new Camioneta();
	}
	for(i = 0; i < 10; i ++){
		serv [i] = new Servicio();
	}
    for(i = 0; i < 5; i ++){
		cte [i] = new Cliente();
	}
    for(i = 0; i < 5; i ++){
		ven [i] = new Vendedor();
	}
	for(i = 0; i < 10; i ++){
		comp [i] = new Compra();
	}
	do{
		system("cls");
		cout<<"Menu\n1.-Auto.\n2.-Camioneta.\n3.-Cliente.\n4.-Vendedor .\n5.-Compra.\n6.-Pedir Compra.\n7.-Salir."<<endl <<"Ingrese una opcion:";
		cin>>opc;
		switch(opc){	
			case 1:
				system("cls");
				cout<<"Menu Auto\n1.-Registrar Auto.\n2.-Buscar Auto.\n3.-Eliminar Auto.\n4.-Servicios Autos\n5.-Pedir Servicio a Auto\n6.-Escribir en archivo.\n7.-Leer informacion de archivo.\n8.-Agreagar informacion a un archivo.\n9.-Regresar\n10.-Salir"<<endl<<"Ingrese una opcion:";
				cin>>opc1;
				switch(opc1){
					case 1:		//registrar auto
						if(contAut!=5){
							system("cls");
							contAut=aut[contAut]->registrar(contAut);
							system("pause");
						}
						else{
							system("cls");
							cout<<"Arreglo  lleno. \n\n"<<endl;
							system("pause");
						}
						break;
					case 2:		//buscar auto
						if(contAut > 0){
							system("cls");
							cout<<"Ingrese la Marca"<<endl;
							fflush(stdin);
							cin.getline(buscador,30);
							for(i=0;i<=contAut;i++){
								if(!strcmp(buscador,aut[i]->getMarca())){
									system("cls");
									band=1;
									encontrado=i;
									cout<<"Registro encontrado."<<endl;
									cout<<"\n1.-Editar\n2.-Imprimir\n3.-Regresar"<<endl;
									fflush(stdin);
									cin>>opc1;
									switch(opc1){
										case 1:
											aut[i]->editar(encontrado,contAut);
										break;
										case 2:
											aut[i]->imprimir();
										break;
										case 3:
											system("cls");
											system("pause");
										break;
										default:
											system("cls");
											system("pause");
										break;
										}
									}
								}
								if(band==0){
									cout<<"No se encontro."<<endl;
								}
								system("pause");
								}
								else{
									system("cls");
									cout<<"Lista esta vacia." << endl;
									system("pause");
								}
						break;
						case 3:		//ELIMINAR
								if(contAut > 0){
								system("cls");
								cout<<"Ingrese la Marca"<<endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contAut; i++){
								if(!strcmp(buscador, aut[i] -> getMarca())){
								system("cls");
								band = 1;
								encontrado = i;
								printf("Se encontro la marca! \n");
							for(i = encontrado; i < contAut; i ++){
								aut[i+1] = *(aut+i+1);
							}
							contAut--;
							printf("\n");
							printf("Eliminado con exito. \n\n");
							system("pause");
						}
					}if(band==0){
									cout << "No se encontro." << endl;
									system("pause");
								}
				}
						break;

						case 4:		//menu de servicios
									system("cls");
									cout << "Menu Servicios Autos\n1.-Registrar.\n2.-Imprimir.\n3.-Regresar\n4.-Salir" << endl << "Ingrese una opcion:";
									cin >> opc2;
									switch(opc2)
									{
									case 1:
										if(cont_serv != 10)
										{
										system("cls");
										cont_serv = serv [cont_serv] -> registrarServ(cont_serv);
										system("pause");
										}
										else
										{
										system("cls");
										cout << "Su lista esta llena. \n\n" << endl;
										system("pause");
										}
									break;

									case 2:
										if(cont_serv > 0)
										{
										system("cls");

										for(i = 0; i < cont_serv; i ++)
										{
											serv [i] -> imprimirServ();
										}
										system("pause");
										}
										else
										{
										system("cls");
										cout << "Su lista esta vacia." << endl;
										system("pause");
										}
									case 3:
										system("cls");
										system("pause");
									break;
									default:
										system("cls");
										system("pause");
									break;
										}
						break;
						case 5:		//pedir un servicio (realizar azociacion entre un auto y un servicio)
									if(cont_serv > 0)
									{
										system("cls");
										cout << "Ingrese el folio del Servicio " << endl;
										fflush(stdin);
										cin >> bfolio;

										for(i = 0; i <= cont_serv; i++)
										{
										if(bfolio == serv [i] -> getFolio())
										{
										band_serv = 1;
										encontrado_serv = i;
										cout << "Se Encontro el folio" << endl;
										cout << "Ingrese el Numero de Puertas del Auto " << endl;
										fflush(stdin);
										cin >> bnum;

										for(int j = 0; j <= contAut; j++)
										{
										if(bnum == aut [j] -> getNumPuertas())
										{
										band_aut = 1;
										encontrado_aut = j;
										cout << "Se encontro el Numero  " << endl;
										system("pause");
										serv [encontrado_serv] -> registrarAuto(aut [encontrado_aut]);
										break;
										}
										}
										break;
										}
										}

										if(band_aut== 0)
										{
										system("cls");
										cout << "Anio no encontrado." << endl;
										band_aut = 0;
										system("pause");
										}

										if(band_serv == 0)
										{
										system("cls");
										cout << "Folio no encontrado." << endl;
										band_serv = 0;
										system("pause");
										}
										}
										else
										{
										system("cls");
										cout << "Su lista esta vacia." << endl;
										system("pause");
										}
							break;
							case 6:		//crear un nuevo archivo
										system("cls");
										if(contAut > 0){//mientras existan registro
										system("cls");
										cout << "Ingrese la Marca" << endl;
										fflush(stdin);
										cin.getline(buscador, 30);

										for(i = 0; i <= contAut; i++){
										if(!strcmp(buscador, aut[i] -> getMarca())){//busca la marca y si existe
										system("cls");
										banda = 1;
										encontradoa = i;
										aut[i] ->escribir(encontradoa, contAut);//que escriba los datos del objeto
										}
										}if(banda==0){
										cout << "No existe el registro" << endl;//si no encuentra la marca no exixte el registro

										}
										}
										else{
										cout << "No hay registros para guardar" << endl;
										}

										system("pause");
							break;
							case 7:
										system("cls");
										aut[i] ->lectura();		//leer de un archivo
										system("pause");
							break;
							case 8:
										system("cls");
										if(contAut > 0){		//si existen registros
										system("cls");
										cout << "Ingrese la Marca" << endl;
										fflush(stdin);
										cin.getline(buscador, 30);

										for(i = 0; i <= contAut; i++){			//busca por marca si existe
										if(!strcmp(buscador, aut[i] -> getMarca())){
										system("cls");
										banda = 1;
										encontradoa = i;
										aut[i] ->aniadir(encontradoa, contAut);	//añadir los datos del onjeto en el archivo existente

										}
										}if(banda==0){
										cout << "No existe el registro" << endl;

										}

										}else{
										cout << "No hay registros" << endl;
										}
										system("pause");
							break;
							default:
										system("cls");
										system("pause");
							break;
			}
			break;		//Fin caso Auto
			case 2:		//caso camioneta
					system("cls");
						cout << "Menu Camioneta\n1.-Registrar Camioneta.\n2.-Buscar Camioneta.\n3.-Eliminar Camioneta.\n4.-Servicios Camionetas\n5.-Pedir Servicio a Camionetas\n6.-Regresar\n7.-Salir" << endl << "Ingrese una opcion:";
						cin >> opc5;
						switch(opc5)
						{
						case 1:
								if(contCam != 5){
								system("cls");
								contCam = cam[contCam] -> registrar(contCam);
								system("pause");
								}
								else{
								system("cls");
								cout << "Arreglo  lleno. \n\n" << endl;
								system("pause");
								}
						break;
						case 2:
								if(contCam > 0){
								system("cls");
								cout << "Ingrese la Marca" << endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contCam; i++){
								if(!strcmp(buscador, cam[i] -> getMarca())){
								system("cls");
								band = 1;
								encontrado = i;
									cout<<"Registro encontrado."<<endl;
									cout<<"\n1.-Editar\n2.-Imprimir\n3.-Regresar"<<endl;
									fflush(stdin);
									cin >> opc3;
									switch(opc3){
								case 1:
									cam[i] -> editar(encontrado, contCam);
								break;

								case 2:
									cam[i] -> imprimir();
								break;


								case 3:
									system("cls");
									system("pause");
								break;

								default:
									system("cls");
									system("pause");
								break;
								}
								}
								}
								if(band==0){
									cout << "No se encontro." << endl;
								}
									system("pause");
								}
								else
								{
									system("cls");
									cout << "Lista esta vacia." << endl;
									system("pause");
								}
						break;
						case 3:		//ELIMINAR
								if(contCam > 0){
								system("cls");
								cout << "Ingrese la Marca" << endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contAut; i++){
								if(!strcmp(buscador, cam[i] -> getMarca())){
								system("cls");
								band = 1;
								encontrado = i;
								printf("Se encontro la marca! \n");
							for(i = encontrado; i < contCam; i ++)
							{
								cam[i+1] = *(cam+i+1);
							}
							contAut--;
							printf("\n");
							printf("Eliminado con exito. \n\n");
							system("pause");
						}
					}if(band==0){
									cout << "No se encontro." << endl;
									system("pause");
								}
				}

						break;

						case 4:
									system("cls");
									cout << "Menu Servicios Camionetas\n1.-Registrar.\n2.-Imprimir.\n3.-Regresar\n4.-Salir" << endl << "Ingrese una opcion:";
									cin >> opc4;
									switch(opc4)
									{
									case 1:
										if(cont_serv != 10)
										{
										system("cls");
										cont_serv = serv [cont_serv] -> registrarServC(cont_serv);
										system("pause");
										}
										else
										{
										system("cls");
										cout << "Su lista esta llena. \n\n" << endl;
										system("pause");
										}
									break;

									case 2:
										if(cont_serv > 0)
										{
										system("cls");

										for(i = 0; i < cont_serv; i ++)
										{
											serv [i] -> imprimirServC();
										}
										system("pause");
										}
										else
										{
										system("cls");
										cout << "Su lista esta vacia." << endl;
										system("pause");
										}
									case 3:
										system("cls");
										system("pause");
									break;
									default:
										system("cls");
										system("pause");
									break;
										}
						break;
						case 5:
									if(cont_serv > 0)
									{
										system("cls");
										cout << "Ingrese el folio de el Servicio " << endl;
										fflush(stdin);
										cin >> bfolio;

										for(i = 0; i <= cont_serv; i++)
										{
										if(bfolio == serv [i] -> getFolio())
										{
										band_servc = 1;
										encontrado_servc = i;
										cout << "Se Encontro el folio" << endl;
										cout << "Ingrese el numero de Asientos " << endl;
										fflush(stdin);
										cin >> bnum1;

										for(int j = 0; j <= contCam; j++)
										{
										if(bnum1 == cam [j] -> getNumPasajeros())
										{
										band_cam = 1;
										encontrado_cam = j;
										cout << "Se encontro la serie " << endl;
										system("pause");
										serv [encontrado_servc] -> registrarCamioneta(cam [encontrado_cam]);
										break;
										}
										}
										break;
										}
										}

										if(band_cam== 0)
										{
										system("cls");
										cout << "Numero de asientos no encontrado." << endl;
										band_cam = 0;
										system("pause");
										}

										if(band_servc == 0)
										{
										system("cls");
										cout << "Folio no encontrado." << endl;
										band_servc = 0;
										system("pause");
										}
										}
										else
										{
										system("cls");
										cout << "Su lista esta vacia." << endl;
										system("pause");
										}
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
			break;			//fin caso camioneta
			case 3:			//caso cliente
			system("cls");
						cout << "Menu Cliente\n1.-Registrar Cliente.\n2.-Buscar Cliente.\n3.-Eliminar Cliente.\n4.-Regresar\n5.-Salir" << endl << "Ingrese una opcion:";
						cin >> opc6;
						switch(opc6)
						{
							case 1:
								if(contCte != 5){
								system("cls");
								contCte = cte[contCte] -> registrarCte(contCte);
								system("pause");
								}
								else{
								system("cls");
								cout << "Arreglo  lleno. \n\n" << endl;
								system("pause");
								}
							break;

							case 2:
								if(contCte> 0){
								system("cls");
								cout << "Ingrese el Apellido del Cliente " << endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contCte; i++){
								if(!strcmp(buscador, cte[i] -> getapell_cte())){
								system("cls");
								band = 1;
								encontrado = i;
									cout<<"Registro encontrado."<<endl;
									cout<<"\n1.-Editar\n2.-Imprimir\n3.-Regresar"<<endl;
									fflush(stdin);
									cin >> opc7;
									switch(opc7){
									case 1:
									cte[i] -> editarCte(encontrado, contAut);
									break;

									case 2:
									cte[i] -> imprimirCte();
									break;


									case 3:
										system("cls");
										system("pause");
									break;

									default:
									system("cls");
									system("pause");
									break;
									}
									}
									}
									if(band==0){
									cout << "No se encontro." << endl;
									}
									system("pause");
									}
									else
									{
									system("cls");
									cout << "Lista esta vacia." << endl;
									system("pause");
									}
							break;

							case 3:					if(contCte > 0){
								system("cls");
								cout << "Ingrese el apellido del cliente" << endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contCte; i++){
								if(!strcmp(buscador, cte[i] -> getapell_cte())){
								system("cls");
								band = 1;
								encontrado = i;
								printf("Se encontro el apellido del cliente \n");
							for(i = encontrado; i < contCte; i ++)
							{
								cte[i+1] = *(cte+i+1);
							}
							contCte--;
							printf("\n");
							printf("Eliminado con exito. \n\n");
							system("pause");
								}
								}if(band==0){
									cout << "No se encontro." << endl;
									system("pause");
										}
								}
										system("cls");
										system("pause");
							break;
							default:
										system("cls");
										system("pause");
							break;

						}

			break;
			case 4:		//Vendedor menu
			system("cls");
						cout << "Menu Vendedor\n1.-Registrar Vendedor.\n2.-Buscar Vendedor.\n3.-Eliminar Vendedor.\n4.-Regresar\n5.-Salir" << endl << "Ingrese una opcion:";
						cin >> opc8;
						switch(opc8)
						{
							case 1:
								if(contVen != 5){
								system("cls");
									contVen = ven[contVen] -> registrarV(contVen);
								system("pause");
								}
								else{
								system("cls");
								cout << "Arreglo  lleno. \n\n" << endl;
								system("pause");
								}
							break;

							case 2:
								if(contVen> 0){
								system("cls");
								cout << "Ingrese el apellido del vendedor " << endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contVen; i++){
								if(!strcmp(buscador, ven[i] -> getapellidos())){
								system("cls");
								band = 1;
								encontrado = i;
									cout<<"Registro encontrado."<<endl;
									cout<<"\n1.-Editar\n2.-Imprimir\n3.-Regresar"<<endl;
									fflush(stdin);
									cin >> opc9;
									switch(opc9){
								case 1:
									ven[i] -> editarV(encontrado, contVen);
								break;

								case 2:
									ven[i] -> imprimirV();
								break;



								case 3:
									system("cls");
									system("pause");
								break;
								default:
									system("cls");
									system("pause");
								break;
								}
								}
								}
								if(band==0){
									cout << "No se encontro." << endl;
								}
									system("pause");
								}
								else
								{
									system("cls");
									cout << "Lista esta vacia." << endl;
									system("pause");
								}
							break;

							case 3:
								//Eliminar
								if(contVen > 0){
								system("cls");
								cout << "Ingrese el apellido del vendedor " << endl;
								fflush(stdin);
								cin.getline(buscador, 30);
								for(i = 0; i <= contVen; i++){
								if(!strcmp(buscador, ven[i] -> getapellidos())){
								system("cls");
								band = 1;
								encontrado = i;
								printf("Se encontro el apellido \n");
							for(i = encontrado; i < contVen; i ++)
							{
								ven[i+1] = *(ven+i+1);
							}
							contVen--;
							printf("\n");
							printf("Eliminado con exito. \n\n");
							system("pause");
						}
					}if(band==0){
									cout << "No se encontro." << endl;
									system("pause");
								}
				}
							break;
							case 4:
										system("cls");
										system("pause");
							break;
							default:
										system("cls");
										system("pause");
							break;

						}
			break;
			case 5:
									system("cls");
									cout << "Menu Compras\n1.-Registrar compra .\n2.-Imprimir compras.\n3.-Regresar\n4.-Salir" << endl << "Ingrese una opcion:";
									cin >> opc10;
									switch(opc10)
									{
									case 1:
										if(cont_compra != 10)
										{
										system("cls");
										cont_compra = comp [cont_compra] -> registrarComp(cont_compra);
										system("pause");
										}
										else
										{
										system("cls");
										cout << "Su lista esta llena. \n\n" << endl;
										system("pause");
										}
									break;

									case 2:
										if(cont_compra > 0)
										{
										system("cls");

										for(i = 0; i < cont_compra; i ++)
										{
											comp [i] -> imprimirComp();
										}
										system("pause");
										}
										else
										{
										system("cls");
										cout << "Su lista esta vacia." << endl;
										system("pause");
										}
									case 3:
										system("cls");
										system("pause");
									break;
									default:
										system("cls");
										system("pause");
									break;
										}
			break;		//compras fin
			case 6:
										if(cont_compra > 0)
										{
										system("cls");
										cout << "Ingrese el num de Compra " << endl;
										fflush(stdin);
										cin >> bnc;

										for(i = 0; i <= cont_compra; i++)
										{
										if(bnc == comp [i] -> getnom_compra())
										{
										band_comp = 1;
										encontrado_comp = i;
										cout << "Se Encontro el numero" << endl;
										cout << "Ingrese el Numero de Cliente " << endl;
										fflush(stdin);
										cin >> bnumc;

										for(int j = 0; j <= contCte; j++)
										{
										if(bnumc == cte [j] -> getnum_cte())
										{
										band_cte = 1;
										encontrado_cte = j;
										cout << "Se encontro el Numero  " << endl;
										system("pause");
										comp [encontrado_comp] -> registrarCliente(cte [encontrado_cte]);
										break;
										}
										}
										break;
										}
										}

										if(band_cte== 0)
										{
										system("cls");
										cout << "Numero de cliente no encontrado." << endl;
										band_cte = 0;
										system("pause");
										}

										if(band_comp == 0)
										{
										system("cls");
										cout << "Numero de compra no encontrado." << endl;
										band_comp = 0;
										system("pause");
										}
										}
										else
										{
										system("cls");
										cout << "Su lista esta vacia." << endl;
										system("pause");
										}
			break;
			case 7:
			break;
			default:
				system("cls");
				system("pause");
			break;
		}
	}while(opc != 7);
}
