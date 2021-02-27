#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Usuario{
    private:
        string usuario;
        string contrasenia;
        string nombres;
        string apellidos;
        int edad;
        string DNI;
        string telefono;
        string correo;
    public:
        Usuario(string,string,string,string,int,string,string,string);
        string get_usuario();
        string get_contrasenia();
        void identificar_usuario();
        void modificar_usuario(int);
        void mostrar_usuario();
};

Usuario::Usuario(string u,string c,string n,string a,int e,string d,string t,string m){
    usuario=u;
    contrasenia=c;
    nombres=n;
    apellidos=a;
    edad=e;
    DNI=d;
    telefono=t;
    correo=m;
}

string Usuario::get_usuario(){
    return usuario;    
}

string Usuario::get_contrasenia(){
    return contrasenia;
}

void Usuario::modificar_usuario(int dato){
    if((dato==1)||(dato==0)){
        cout<<"Nuevo Usuario: ";
        getline(cin,usuario);
    }
    if((dato==2)||(dato==0)){
        cout<<"Nueva contraseña: ";
        getline(cin,contrasenia);
    }
    if((dato==3)||(dato==0)){
        cout<<"Cambiar nombres: ";
        getline(cin,nombres);
    }
    if((dato==4)||(dato==0)){
        cout<<"Cambiar apellidos: ";
        getline(cin,apellidos);
    }
    if((dato==5)||(dato==0)){
        cout<<"Actualizar edad: ";
        cin>>edad;
    }
    if((dato==6)||(dato==0)){
        cout<<"Cambiar DNI: ";
        getline(cin,DNI);;
    }
    if((dato==7)||(dato==0)){
        cout<<"Actualizar telefono: ";
        getline(cin,telefono);
    }
    if((dato==8)||(dato==0)){
        cout<<"Actualizar correo: ";
        getline(cin,correo);
    }
}

void Usuario::mostrar_usuario(){
    cout<<setw(25)<<usuario;
    cout<<setw(25)<<nombres;
    cout<<setw(25)<<apellidos;
    cout<<setw(25)<<edad;
    cout<<setw(25)<<DNI;
    cout<<setw(25)<<telefono;
    cout<<setw(25)<<correo;
}