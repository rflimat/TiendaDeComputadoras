#include<iostream>
#include<string.h>
#include "convertidorVariables.cpp"
#include "Proveedor.cpp"
using namespace std;

class Producto{
    private:
        string codigo;
        int cantidad;
        string nombre_componente;
        string marca;
        string gama;
        string descripcion;
        float precio;
        Proveedor *proveedor;
    public:
        Producto(int,int,string,string,string,string,float);
        void set_proveedor(Proveedor *);
        void modificar_productos(int);
        void mostrar_productos();
};

Producto::Producto(int c,int ct,string n,string m,string g,string d,float p){
    codigo="P-00" + Convert(c+1);
}

void Producto::set_proveedor(Proveedor *p){
    proveedor=p;
}

void Producto::modificar_productos(int dato){
    if((dato==1)||(dato==0)){
        cout<<"Actualizar cantidad de componentes: ";
        cin>>cantidad;
    }
    if((dato==2)||(dato==0)){
        cout<<"Cambiar nombre de componente: ";
        getline(cin,nombre_componente);
    }
    if((dato==3)||(dato==0)){
        cout<<"Cambiar marca de componente: ";
        getline(cin,marca);
    }
    if((dato==4)||(dato==0)){
        cout<<"Cambiar gama de componente: ";
        getline(cin,gama);
    }
    if((dato==5)||(dato==0)){
        cout<<"Cambiar descripcion de componente\n: ";
        getline(cin,descripcion);
    }
    if((dato==6)||(dato==0)){
        cout<<"Actualizar precio de componente: ";
        cin>>precio;
    }
}

void Producto::mostrar_productos(){
    cout<<"Componente: "<<nombre_componente<<endl;
    cout<<"Cantidad: "<<cantidad<<endl;
    cout<<"Marca: "<<marca<<endl;
    cout<<"Gama: "<<gama<<endl;
    cout<<"Descripcion: \n"<<descripcion<<endl;
    cout<<"Precio: "<<precio<<endl;
}