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
        void modificar_usuario();
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

void Usuario::modificar_usuario(){
    int dato;
    cout<<"\nEliga el dato que desea modificar: ";
    cout<<"\n[1] Usuario";
    cout<<"\n[2] Contrasenia";
    cout<<"\n[3] Nombres";
    cout<<"\n[4] Apellidos";
    cout<<"\n[5] Edad";
    cout<<"\n[6] DNI";
    cout<<"\n[7] Telefono";
    cout<<"\n[8] Correo";
    cout<<"\n[9] Todo";
    cout<<"\nIngrese su opcion aqui: ";
    cin>>dato;
    if((dato==1)||(dato==9)){
        cout<<"Nuevo Usuario: ";
        getline(cin,usuario);
    }
    if((dato==2)||(dato==9)){
        cout<<"Nueva contraseña: ";
        getline(cin,contrasenia);
    }
    if((dato==3)||(dato==9)){
        cout<<"Cambiar nombres: ";
        getline(cin,nombres);
    }
    if((dato==4)||(dato==9)){
        cout<<"Cambiar apellidos: ";
        getline(cin,apellidos);
    }
    if((dato==5)||(dato==9)){
        cout<<"Actualizar edad: ";
        cin>>edad;
    }
    if((dato==6)||(dato==9)){
        cout<<"Cambiar DNI: ";
        getline(cin,DNI);;
    }
    if((dato==7)||(dato==9)){
        cout<<"Actualizar telefono: ";
        getline(cin,telefono);
    }
    if((dato==8)||(dato==9)){
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
