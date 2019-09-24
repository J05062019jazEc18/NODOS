#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Nodo{
	int valor;
	Nodo*puntero;
	
}*lista;

int nv;
void ingresar(Nodo* &, int );
void mostrar(Nodo*);

int main (){
	int opc,num,num2;
	Nodo*lista;
	lista=NULL;
	do{
		cout<<"Elija una opcion del menu siguiente: "<<endl;
		cout<<"1.-ingresar lista: "<<endl;
		cout<<"2.- imprimir lista: "<<endl;	
		cout<<"3.- Salir "<<endl;
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<" ingrese el numero de nodos: ";
				cin>>num;
				for(int i=1; i<=num; i++){
				cout<<"ingresa el valor del nodo : ";
				cin>>num2;	
				ingresar(lista,num);
			}break;
			case 2:
				cout<<"Datos de las lista: ";
				mostrar(lista);
				cout<<endl;
			break;
			case 3:
				cout<<"Saliendo..."<<endl;
			break;			
		}					
	}while(opc!=3);
	return 0;
	}
	void ingresar( Nodo*&lista, int dat){
	Nodo*pn=new Nodo;
	Nodo*aux;
	pn->valor=dat;
	pn->puntero=NULL;
	aux=pn;
	if (lista==NULL){
		lista=pn;
	}
	else{
		Nodo*aux=lista;
		while (aux->puntero!=NULL){
			aux=aux->puntero;
		}
	}	
}





void mostrar(Nodo *lista){
	Nodo *pn1=lista;
	pn1=lista;
	while (pn1!=NULL){
		cout<<pn1->valor;
		pn1=pn1->puntero;
	}
}
	


