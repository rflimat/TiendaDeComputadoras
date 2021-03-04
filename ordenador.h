//Metodo de ordenacion para ordenar los productos por su nombre (A-Z) en la facturacion
#include<iostream>
#include<string.h>
using namespace std;

void ordenador(string *A,int n){
    char nombre[n][50];
    char *aux;
    float comp;
    for(int i=0;i<n;i++){
        std::string cadena=A[i];
		strcpy(nombre[i],cadena.c_str());
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1-i;j++){
            comp=strcmp(nombre[j],nombre[j+1]);
            if(comp>0){
                strcpy(aux,nombre[j]);
                strcpy(nombre[j],nombre[j+1]);
                strcpy(nombre[j+1],aux);
            }
        }
        A[i]=CharToString(nombre[i]);
    }
}