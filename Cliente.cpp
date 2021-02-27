#include<iostream>
#include<string.h>
using namespace std;

class Cliente : public Usuario {
    private:
        string codigo;
        string preferencias;
    public:
        Cliente(string,string,string,string,int,string,string,string,int,string);
        bool confirmar_acceso(string,string);
        void modificar_cliente(int);
        void mostrar_cliente();
};

Cliente::Cliente(string u,string c,string n,string a,int e,string d,string t,string m,int cd,string p) : Usuario(u,c,n,a,e,d,t,m){
    codigo="C-00"+IntToString(cd);
    preferencias=p;
}

bool Cliente::confirmar_acceso(string u,string c){
    if((get_usuario()==u)&&(get_contrasenia()==c))
        return true;
}

void Cliente::modificar_cliente(int dato){
    if((dato<9)||(dato==0)){
        modificar_usuario(dato);
    }
    if((dato==9)||(dato==0)){
        cout<<"Cambiar preferencias: ";
        getline(cin,preferencias);
    }
}

void Cliente::mostrar_cliente(){
    cout<<left;
    cout<<setw(25)<<codigo;
    mostrar_usuario();
    cout<<setw(25)<<preferencias;
}
