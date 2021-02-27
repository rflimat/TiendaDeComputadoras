#include<iostream>
#include<string.h>
#include "Usuario.cpp"
using namespace std;

int main(){
    Usuario *usuario[50];

    usuario[0] = new Usuario("rflimat","all123","Raul","Lima",18,"75934942","944235668","raulflimat@gmail.com");

    string u,c;
    bool acceso=true;
    int e,m;
    do{
        system("cls");
        cout<<"\n\tTIENDA DE COMPUTADORAS XD"<<endl;
        cout<<"\n[1] Iniciar sesion";
        cout<<"\n[2] Registrarse";
        cout<<"\n[3] Salir";
        cout<<"\n\nIngrese su opcion: ";
        cin>>e;
        system("cls");
        switch (e){
            case 1:
                cout<<"\tINICIAR SESION\n\n";
                fflush(stdin);
                cout<<"Usuario: ";
                getline(cin,u);
                cout<<"Contrasenia: ";
                getline(cin,c);
                for(int i=0;i<50;i++){
                    if((u==usuario[i]->get_usuario())&&(c==usuario[i]->get_contrasenia())){
                        do{
                            system("cls");
                            cout<<"\tMENU DE OPCIONES"<<endl;
                            cout<<"\n[1] Usuarios";
                            cout<<"\n[2] Salir";
                            cout<<"\n\nIngrese su opcion: ";
                            cin>>m;
                            system("cls");
                        }while(m!=2);
                        break;
                    }
                    else{
                        cout<<"\nContrasenia incorrecta"<<endl;
                        system("pause");
                        break;
                    }
                }
                break;
            case 3:
                break;
            default:
                break;
            }
    }while(e!=3);
    
    return 0;
}