#include<iostream>
#include<string.h>
#include "convertidorVariables.cpp"
using namespace std;

void ordenar_int(int *A,int n){
    int aux;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
        }
    }
}

void ordenar_string(string *N,int n){
	char cad[n][50];
	char aux[50];
	float comp;
	
	for(int i=0;i<n;i++){
		std::string cadena=N[i];
		strcpy(cad[i],cadena.c_str());
	}

    for(int i=0;i<n;i++){
        for(int j=i;j<n-1-i;j++){
            comp=strcmp(cad[j],cad[j+1]);
            if(comp>0){
                strcpy(aux,cad[j]);
                strcpy(cad[j],cad[j+1]);
                strcpy(cad[j+1],aux);
            }
        }
        N[i]=CharToString(cad[i]);
    }
}