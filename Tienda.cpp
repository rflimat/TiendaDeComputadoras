#include<iostream>
#include<string.h>
using namespace std;

class Tienda{
    private:
        Usuario *usuario[62];
        Producto *producto[100];
        string nombre;
        string RUC;
        string direccion;
        string telefono;
        float capital;
        int nProductos;
        int nUsuarios;
    public:
        Tienda(string,string,string,string,float);
        void set_productos(Producto*);
        void set_usuarios(Usuario *u);
        float get_capital();
        void mostrar_productos();
        void mostrar_usuarios();
        void mostrar_datos();
};

Tienda::Tienda(string n,string r,string d,string t,float c){
    nombre=n;
    RUC=r;
    direccion=d;
    telefono=t;
    capital=c;
    nProductos=0;
    nUsuarios=0;
}

float Tienda::get_capital(){
    return capital;
}

void Tienda::mostrar_datos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"RUC: "<<RUC<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Capital: "<<capital<<endl;
}

void Tienda::set_usuarios(Usuario *u){
    usuario[nUsuarios]=u;
    nUsuarios++;
}

void Tienda::set_productos(Producto *p){
    producto[nProductos]=p;
    nProductos++;
}

void Tienda::mostrar_productos(){
    cout<<"\t\t\t\tLISTA DE PRODUCTOS\n"<<endl;
    cout<<left;
    cout<<setw(8)<<"Codigo";
    cout<<setw(40)<<"Nombre";
    cout<<setw(25)<<"Categoria";
    cout<<setw(16)<<"Cantidad";
    cout<<setw(25)<<"Marca";
    cout<<setw(16)<<"Gama";
    cout<<setw(16)<<"Precio";
    cout<<setw(16)<<"Proveedor";
    cout<<endl;
    for(int i=0;i<nProductos;i++){
        producto[i]->mostrar_productos();
        cout<<endl;
    }
}

void Tienda::mostrar_usuarios(){
    cout<<"\tLISTA DE USUARIOS\n"<<endl;
    cout<<left;
    cout<<setw(16)<<"Usuario";
    cout<<setw(25)<<"Nombres";
    cout<<setw(25)<<"Apellidos";
    cout<<setw(16)<<"Edad";
    cout<<setw(16)<<"DNI";
    cout<<setw(16)<<"Telefono";
    cout<<setw(25)<<"Correo";
    cout<<endl;
    for(int i=0;i<nUsuarios;i++){
        usuario[i]->mostrar_usuario();
        cout<<endl;
    }
}