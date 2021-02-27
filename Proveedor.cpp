#include<iostream>
#include<string.h>
#include<iomanip>
#include "convertidorVariables.cpp"
using namespace std;

class Proveedor{
    private:
        string codigo;
        string nombre;
        string RUC;
        string direccion;
        string telefono;
    public:
        Proveedor(int,string,string,string,string,int);
        string get_proveedor();
        void modificar_proveedor(int);
        void mostrar_proveedor();
};

string Proveedor::get_proveedor(){
    return nombre;
}

Proveedor::Proveedor(int c,string n,string r,string d,string t,int cd){
    codigo="PRO-00"+IntToString(cd+1);
    nombre=n;
    RUC=r;
    direccion=d;
    telefono=t;
}

void Proveedor::modificar_proveedor(int dato){
    if((dato==1)||(dato==0)){
        cout<<"Cambiar nombre: ";
        getline(cin,nombre);
    }
    if((dato==2)||(dato==0)){
        cout<<"Cambiar RUC: ";
        getline(cin,RUC);
    }
    if((dato==3)||(dato==0)){
        cout<<"Actualizar direccion: ";
        getline(cin,direccion);
    }
    if((dato==4)||(dato==0)){
        cout<<"Actualizar telefono: ";
        getline(cin,telefono);
    }
}

void Proveedor::mostrar_proveedor(){
    cout<<left;
    cout<<setw(25)<<codigo;
    cout<<setw(25)<<nombre;
    cout<<setw(25)<<RUC;
    cout<<setw(25)<<direccion;
    cout<<setw(25)<<telefono;
}