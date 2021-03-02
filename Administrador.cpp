#include<iostream>
#include<string.h>
using namespace std;

class Administrador : public Usuario {
    private:
        string codigo;
        string sueldo;
    public:
        Administrador(string,string,string,string,int,string,string,string,int,float);
        bool confirmar_acceso(string,string);
        void modificar_administrador(int);
        void mostrar_administrador();
};

Administrador::Administrador(string u,string c,string n,string a,int e,string d,string t,string m,int cd,float s) : Usuario(u,c,n,a,e,d,t,m){
    codigo="A-00"+IntToString(cd);
    sueldo=c;
}

bool Administrador::confirmar_acceso(string u,string c){
    if((get_usuario()==u)&&(get_contrasenia()==c)){
        return true;
    }     
}

void Administrador::modificar_administrador(int dato){
    if((dato<9)||(dato==0)){
        modificar_usuario(dato);
    }
    if((dato==9)||(dato==0)){
        cout<<"Actualizar sueldo: ";
        cin>>sueldo;
    }
}

void Administrador::mostrar_administrador(){
    cout<<left;
    cout<<setw(25)<<codigo;
    mostrar_usuario();
    cout<<setw(25)<<sueldo;
}