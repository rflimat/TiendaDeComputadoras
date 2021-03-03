#include<iostream>
#include<string.h>
#include "ordenador.h"
using namespace std;

class Registro{
    private:
        int nProductos;
        int cantidad_producto[10];
        Producto *producto[10];
        float subtotal[10];
        float total;
    public:
        Registro();
        float get_total();
        void agregar_producto(Producto*,int);
        void descartar_registro(Registro*);
        void mostrar_registro();
};

Registro::Registro(){
    nProductos=0;
    total=0;
}

void Registro::agregar_producto(Producto *p,int c){
    producto[nProductos]=p;
    cantidad_producto[nProductos]=c;
    fflush(stdin);
    if(producto[nProductos]->get_cantidad()==0){
        cout<<"\nProducto agotado\n";
        system("pause");
    }
    if((producto[nProductos]->get_cantidad()-cantidad_producto[nProductos])<0){
        cout<<"\nEsta disponible solamente "<<producto[nProductos]->get_cantidad()<<" productos";
        system("pause");
    }
    else{
        producto[nProductos]->validar_registro(cantidad_producto[nProductos]);
        subtotal[nProductos]=cantidad_producto[nProductos]*producto[nProductos]->get_precio();
        total=total+subtotal[nProductos];
    }
    nProductos++;
}

float Registro::get_total(){
    return total;
}

void Registro::mostrar_registro(){
    string temp[nProductos];
    for(int i=0;i<nProductos;i++){
        temp[i]=producto[i]->get_nombre();
    }
    ordenador(temp,nProductos);
    for(int i=0;i<nProductos;i++){
        producto[i]->set_nombre(temp[i]);
    }
    cout<<left;
    for(int i=0;i<nProductos;i++){
        cout<<setw(16)<<producto[i]->get_codigo();
        cout<<setw(40)<<producto[i]->get_nombre();
        cout<<setw(16)<<cantidad_producto[i];
        cout<<setw(16)<<producto[i]->get_precio();
        cout<<setw(16)<<subtotal[i]; 
        cout<<endl;  
    }
}

void Registro::descartar_registro(Registro*){
    for(int i=0;i<nProductos;i++){
        producto[i]->desvalidar_registro(cantidad_producto[i]);
    }
}