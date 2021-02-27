#include<iostream>
#include<string.h>
#include "convertidorVariables.cpp"
#include "Usuario.cpp"
#include "Cliente.cpp"
#include "Vendedor.cpp"
#include "Administrador.cpp"
using namespace std;

int main(){
    Cliente *cliente[50];
    Vendedor *vendedor[10];
    Administrador *administrador[2];

    administrador[0]=new Administrador("rflimat","all101","Raul","Lima",18,"75934942","943233242","raulflimat@gmail.com",0,3000);
    administrador[1]=new Administrador("bevillamontey","all102","Betto","Villamonte",19,"79323232","921121222","bevillamontey@gmail.com",1,3000);

    string us,ct,u,c,n,a,d,t,m,cr,tp,pf;
    float s;
    int e;
    int cv=0,cc=0;
    int entrar,menu,personas,clientes;
    do{
        system("cls");
        cout<<"\n\tTIENDA DE COMPUTADORAS XD"<<endl;
        cout<<"\n[1] Iniciar sesion";
        cout<<"\n[2] Registrarse";
        cout<<"\n[3] Salir";
        cout<<"\n\nIngrese su opcion: ";
        cin>>entrar;
        system("cls");
        switch(entrar){
            case 1:
                cout<<"\tINICIAR SESION\n\n";
                fflush(stdin);
                cout<<"Usuario: ";
                getline(cin,us);
                cout<<"Contrasenia: ";
                getline(cin,ct);
                for(int i=0;i<2;i++){
                    if(administrador[i]->confirmar_acceso(us,ct)){
                        do{
                            system("cls");
                            cout<<"\tMENU DE OPCIONES"<<endl;
                            cout<<"\n[1] Usuarios";
                            cout<<"\n[2] Proveedores";
                            cout<<"\n[3] Productos";
                            cout<<"\n[4] Facturas";
                            cout<<"\n[5] Informes";
                            cout<<"\n[6] Tienda";
                            cout<<"\n[7] Salir";
                            cout<<"\n\nIngrese su opcion: ";
                            cin>>menu;
                            system("cls");
                        }while(menu!=7);
                    }
                    else{
                        cout<<"\nContrasenia incorrecta"<<endl;
                        system("pause");
                        break;
                    }
                }
                break;
            case 2:
                system("cls");
                cout<<"\tREGISTRARSE"<<endl;
                fflush(stdin);
                cout<<"Usuario: "; 
                getline(cin,u);
                cout<<"Correo: ";
                getline(cin,m);
                cout<<"Contrasenia: ";
                getline(cin,c);
                system("cls");
                cout<<"\tDATOS PERSONALES"<<endl;
                cout<<"Nombres: "; 
                getline(cin,n);
                cout<<"Apellidos: "; 
                getline(cin,a);
                cout<<"Edad: "; 
                cin>>e;
                fflush(stdin);
                cout<<"Direccion: "; 
                getline(cin,d);
                cout<<"Telefono: ";
                getline(cin,t);
                cout<<"Tipo de usuario(Vendedor,Cliente): ";
                getline(cin,tp);
                if((tp=="Vendedor")||(tp=="vendedor")){
                    fflush(stdin);
                    cout<<"Sueldo: ";
                    cin>>s;
                    vendedor[cv]=new Vendedor(u,c,n,a,e,d,t,m,cv,s);
                    cv++;
                }
                else if((tp=="Cliente")||(tp=="Cliente")){
                    cout<<"Preferencias: \n";
                    getline(cin,pf);
                    cliente[cv]=new Cliente(u,c,n,a,e,d,t,m,cv,pf);
                }
                else{
                    cout<<"\nRegistro incorrecto"<<endl;
                    system("pause");
                    break;
                }
                break;
            case 3:
                break;
            default:
                break;
            }
    }while(entrar!=3);
    
    return 0;
}