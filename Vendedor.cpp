#include<iostream>
#include<string.h>
using namespace std;

class Vendedor : public Usuario {
    private:
        string codigo;
        float sueldo;
    public:
        Vendedor(string,string,string,string,int,string,string,string,int,float);
        string get_codigo();
        string get_nombres();
        bool confirmar_acceso(string,string);
        void modificar_vendedor(int);
        void mostrar_vendedor();
};

Vendedor::Vendedor(string u,string c,string n,string a,int e,string d,string t,string m,int cd,float s) : Usuario(u,c,n,a,e,d,t,m){
    codigo="V-00"+IntToString(cd+1);
    sueldo=s;
}

string Vendedor::get_codigo(){
    return codigo;
}

string Vendedor::get_nombres(){ 
    return Usuario::get_nombres();
}

bool Vendedor::confirmar_acceso(string u,string c){
    if((get_usuario()==u)&&(get_contrasenia()==c))
        return true;
}

void Vendedor::modificar_vendedor(int dato){
    if((dato<9)||(dato==0)){
        modificar_usuario(dato);
    }
    if((dato==9)||(dato==0)){
        cout<<"Actualizar sueldo: ";
        cin>>sueldo;
    }
}

void Vendedor::mostrar_vendedor(){
    cout<<left;
    cout<<setw(8)<<codigo;
    mostrar_usuario();
    cout<<setw(16)<<sueldo;
}