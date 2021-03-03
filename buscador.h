//Metodo de busqueda para codigos de objetos (producto,usuarios,facturas,etc)
#include<iostream>
#include<string.h>
using namespace std;

template <class arreglo>
int buscador(arreglo *A,int n,string dato){
    string codigos[n];
    for(int i=0;i<n;i++){
        codigos[i]=A[i]->get_codigo();
    }
	int i=0;
	int pos=-1;
	while((codigos[i]!=dato)&&(i<n)){
		i++;
	}
	if(i<n){
		pos=i;
	}
	return pos;
}