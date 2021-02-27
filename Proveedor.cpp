#include<iostream>
#include<string.h>
using namespace std;

class Proveedor{
    private:
        string codigo;
        string nombre;
        string RUC;
        string direccion;
        string telefono;
    public:
        Proveedor(int,string,string,string,string);
        void modificar_proveedor(int);
        void mostrar_proveedor();
};

Proveedor::Proveedor(int c,string n,string r,string d,string t){
    codigo="PRO-00" + Convert(c+1);
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
    cout<<"Nombres: "<<nombre<<endl;
    cout<<"RUC: "<<RUC<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Telefono: "<<telefono<<endl;
}