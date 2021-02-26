#include<iostream>
#include<string.h>
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
    cout<<"Usuario: "<<usuario<<endl;
    cout<<"Contraseña: "<<contrasenia<<endl;
    cout<<"Nombre: "<<nombres<<endl;
    cout<<"Apellidos: "<<apellidos<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"DNI: "<<DNI<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Correo: "<<correo<<endl;
}
