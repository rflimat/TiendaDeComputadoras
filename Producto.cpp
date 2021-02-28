#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Producto{
    private:
        string codigo;
        int cantidad;
        string nombre_componente;
        string categoria;
        string marca;
        string gama;
        string descripcion;
        float precio;
        Proveedor *proveedor;
    public:
        Producto(int,string,string,string,string,string,float,Proveedor*,int);
        void set_proveedor(Proveedor *);
        string get_codigo();
        string get_nombre();
        string get_descripcion();
        int get_cantidad();
        float get_precio();
        void validar_registro(int);
        void modificar_productos(int);
        void mostrar_productos();
};

Producto::Producto(int c,string n,string ct,string m,string g,string d,float p,Proveedor* pr,int cd){
    codigo="P-00"+IntToString(cd+1);
    cantidad=c;
    nombre_componente=n;
    categoria=ct;
    marca=m;
    gama=g;
    descripcion=d;
    precio=p;
    proveedor=pr;
}

void Producto::set_proveedor(Proveedor *pro){
    proveedor=pro;
}

string Producto::get_codigo(){
    return codigo;
}

string Producto::get_nombre(){
    return nombre_componente;
}

string Producto::get_descripcion(){
    return descripcion;
}

int Producto::get_cantidad(){
    return cantidad;
}

float Producto::get_precio(){
    return precio;
}

void Producto::validar_registro(int cant_quit){
    cantidad=cantidad-cant_quit;
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
        cout<<"Cambiar categoria de componente: ";
        getline(cin,marca);
    }
    if((dato==4)||(dato==0)){
        cout<<"Cambiar marca de componente: ";
        getline(cin,marca);
    }
    if((dato==5)||(dato==0)){
        cout<<"Cambiar gama de componente: ";
        getline(cin,gama);
    }
    if((dato==6)||(dato==0)){
        cout<<"Cambiar descripcion de componente\n: ";
        getline(cin,descripcion);
    }
    if((dato==7)||(dato==0)){
        cout<<"Actualizar precio de componente: ";
        cin>>precio;
    }
}

void Producto::mostrar_productos(){
    cout<<left;
    cout<<setw(8)<<codigo;
    cout<<setw(40)<<nombre_componente;
    cout<<setw(25)<<categoria;
    cout<<setw(16)<<cantidad;
    cout<<setw(25)<<marca;
    cout<<setw(16)<<gama;
    cout<<setw(16)<<precio;
    cout<<setw(16)<<proveedor->get_proveedor();
}