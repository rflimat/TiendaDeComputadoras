#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Tienda{
    private:
        string nombre;
        string RUC;
        string direccion;
        string telefono;
        float capital;
    public:
        Tienda(string,string,string,string,float);
        void mostrar_datos();
        void mostrar_usuarios();
        void mostrar_productos();
        void mostrar_informes();
};

Tienda::Tienda(string n,string r,string d,string t,float c){
    nombre=n;
    RUC=r;
    direccion=d;
    telefono=t;
    capital=c;
}

void Tienda::mostrar_datos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"RUC: "<<RUC<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Capital: "<<capital<<endl;
}