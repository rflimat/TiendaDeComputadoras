#include<iostream>
using namespace std;

int buscador_int(int *A, int n,int dato){
    int m,pos;
    int izq=1;
    int der=n;
    m=int((izq+der)/2);
    while((A[m]!=dato)&&(izq<=der)){
        if(dato<A[m]){
            der=m-1;
        }else{
            izq=izq+1;
        }
        m=((izq+der)/2);
    }
    if(izq<=der){
        pos=m;
    }else{
        pos=-izq;
    }
    return pos;
}

int buscador_string(string *A, int n,string dato){
    int m,pos;
    int izq=1;
    int der=n;
    m=int((izq+der)/2);
    while((A[m]!=dato)&&(izq<=der)){
        if(dato<A[m]){
            der=m-1;
        }else{
            izq=izq+1;
        }
        m=((izq+der)/2);
    }
    if(izq<=der){
        pos=m;
    }else{
        pos=-izq;
    }
    return pos;
}