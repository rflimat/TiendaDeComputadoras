#include<iostream>
#include<string.h>
#include "Usuario.cpp"
using namespace std;

class Administrador : public Usuario{
    private:
        string codigo;
        string sueldo;
    public:
        Administrador(string,string,string,string,int,string,string,string,string,float);
        void modificar_administrador();
        void mostrar_administrador();
        void supervisar_tienda();
};

Administrador::Administrador(string u,string c,string n,string a,int e,string d,string t,string m,string cd,float s) : Usuario(u,c,n,a,e,d,t,m){
    codigo=c;
    sueldo=c;
}

void Administrador::modificar_administrador(){
    modificar_usuario();

}

void Administrador::mostrar_administrador(){
    mostrar_usuario();
    cout<<"Codigo de administrador: "<<codigo<<endl;
    cout<<"Sueldo: "<<sueldo<<endl;
} 