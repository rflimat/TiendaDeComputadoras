#include<iostream>
#include<string.h>
#include<iomanip>
#include "buscador.h"
#include "convertidorVariables.cpp"
#include "Usuario.cpp"
#include "Cliente.cpp"
#include "Vendedor.cpp"
#include "Administrador.cpp"
#include "Proveedor.cpp"
#include "Producto.cpp"
/*#include "Factura.cpp"
#include "Informe.cpp"
#include "Tienda.cpp"*/
using namespace std;

int main(){
    Cliente *cliente[50];
    Vendedor *vendedor[10];
    Administrador *administrador[2];
    Proveedor *proveedor[5];
    Producto *producto[100];

    //Administradores
    administrador[0]=new Administrador("rflimat","all101","Raul","Lima",18,"75934942","943233242","raulflimat@gmail.com",0,3000);
    administrador[1]=new Administrador("bevillamontey","all102","Betto","Villamonte",19,"79323232","921121222","bevillamontey@gmail.com",1,3000);

    //Proveedores
    proveedor[0]=new Proveedor("Computer INC","20621122456","Av. Garcilazo 1000","933122122",0);
    proveedor[1]=new Proveedor("Magitech INC","32412109454","Av. Arequipa 2540","994923329",1);

    //Productos
    producto[0]=new Producto(2,"Case Gamer Aerocool Prime-g-bk-v2 RGB","Gabinete","Aerocool","Alta","Gamer full",149.00,proveedor[0],0);
    producto[1]=new Producto(3,"Asus X570 E-Gaming","Placa Madre","Asus","Alta","Placa superpotente",785.00,proveedor[0],1);
    producto[2]=new Producto(2,"AMD Ryzen 9 3900X","Procesador","AMD","Alta","Procesador superpotente",2430.00,proveedor[0],2);
    producto[3]=new Producto(5,"HyperX DDR4 32GB","Memoria RAM","HyperX","Alta","Memoria estable para tu PC",829.00,proveedor[0],3);
    producto[4]=new Producto(2,"Asus Nvidia RTX 2060","Tarjeta grafica","Asus","Alta","Tarjeta grafica para gaming",1869.00,proveedor[0],4);
    producto[5]=new Producto(3,"WD M.2 SSD 1TB","Disco Solido","Western Digital","Alta","Disco duro veloz",729.00,proveedor[0],5);
    producto[6]=new Producto(2,"EVGA 600W Real 80","Fuente de Poder","EVGA","Alta","Fuente de poder excelente",280.00,proveedor[0],6);
    producto[7]=new Producto(2,"Cooler Aerocool Mirage 360 Argb","Cooler","Aerocool","Alta","Enfriamento RGB",490.00,proveedor[0],7);

    string us,ct,u,c,n,a,d,t,m,cr,tp,pf,r,g,ctg;
    string cod,det;
    float s,pre;
    int e,can;
    int cv=0,cc=0,cpr=2,cp=8;
    int entrar,menu,pr,p;
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
                            cout<<"\n[1] Usuario";
                            cout<<"\n[2] Proveedores";
                            cout<<"\n[3] Productos";
                            cout<<"\n[4] Facturas";
                            cout<<"\n[5] Informes";
                            cout<<"\n[6] Tienda";
                            cout<<"\n[7] Salir";
                            cout<<"\n\nIngrese su opcion: ";
                            cin>>menu;
                            system("cls");
                            switch(menu){
                                case 1:
                                    break;
                                case 2:
                                    system("cls");
                                    cout<<"\t\tPROVEEDORES"<<endl;
                                    cout<<"\n[1] Registrar Proveedores";
                                    cout<<"\n[2] Modificar Proveedores";
                                    cout<<"\n[3] Mostrar Proveedores";
                                    cout<<"\n[4] Eliminar Proveedores";
                                    cout<<"\n[5] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>pr;
                                    system("cls");
                                    switch(pr){
                                    case 1:
                                        cout<<"\tREGISTRO DE PROVEEDORES\n"<<endl;
                                        fflush(stdin);
                                        cout<<"Ingresar nombre: ";
                                        getline(cin,n);
                                        cout<<"Ingresar RUC: ";
                                        getline(cin,r);
                                        cout<<"Ingresar direccion: ";
                                        getline(cin,d);
                                        cout<<"Ingresar telefono: ";
                                        getline(cin,t);
                                        proveedor[cpr]=new Proveedor(n,r,d,t,cp);
                                        cpr++;
                                        break;
                                    case 2:
                                        cout<<"\tMODIFICAR PROVEEDOR\n"<<endl;
                                        fflush(stdin);
                                        cout<<"Ingrese codigo de proveedor: ";
                                        getline(cin,cod);
                                        int aux;
                                        for(int i=0;i<cpr;i++){
                                            if(cod==proveedor[i]->get_codigo()){
                                                cout<<"\nCodigo ingresado correctamente"<<endl;
                                                cout<<"\nEliga el dato que desea modificar: ";
                                                cout<<"\n[1] Nombre";
                                                cout<<"\n[2] RUC";
                                                cout<<"\n[3] Direccion";
                                                cout<<"\n[4] Telefono";
                                                cout<<"\n[0] Todo";
                                                cout<<"\n\nIngrese su opcion aqui: ";
                                                cin>>pr;
                                                cout<<endl;
                                                proveedor[i]->modificar_proveedor(pr);
                                                cout<<"\nDato modificado\n"<<endl;
                                                system("pause");
                                                break;
                                            }
                                            aux=i;
                                        }
                                        if(aux==cpr-1){
                                            cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                            system("pause");
                                            break;
                                        }
                                        break;
                                    case 3:
                                        cout<<"\tLISTA DE PROVEEDORES\n"<<endl;
                                        cout<<left;
                                        cout<<setw(25)<<"Codigo";
                                        cout<<setw(25)<<"Nombre";
                                        cout<<setw(25)<<"RUC";
                                        cout<<setw(25)<<"Direccion";
                                        cout<<setw(25)<<"Telefono";
                                        cout<<endl;
                                        for(int i=0;i<cpr;i++){
                                            proveedor[i]->mostrar_proveedor();
                                            cout<<endl;
                                        }
                                        cout<<endl;
                                        system("pause");
                                        break;
                                    case 4:
                                        cout<<"\tELIMINAR PROVEEDOR\n"<<endl;
                                        fflush(stdin);
                                        cout<<"Ingrese codigo de proveedor: ";
                                        getline(cin,cod);
                                        for(int i=0;i<cpr;i++){
                                            if(cod==proveedor[i]->get_codigo()){
                                                fflush(stdin);
                                                cout<<"\nEsta seguro de eliminar proveedor(Si/No): ";
                                                getline(cin,det);
                                                if((det=="Si")||(det=="si")){
                                                    delete proveedor[i];
                                                    cpr=cpr-1;
                                                    cout<<"Dato Eliminado\n"<<endl;
                                                    system("pause");
                                                    break;
                                                }else{
                                                    cout<<"Dato No eliminado\n"<<endl;
                                                    system("pause");
                                                    break;
                                                } 
                                            }
                                            aux=i;
                                        }
                                        if(aux==cpr-1){
                                            cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                            system("pause");
                                            break;
                                        }
                                        break;
                                    default:
                                        break;
                                    }
                                    break;
                                case 3:
                                    system("cls");
                                    cout<<"\t\tPRODUCTOS"<<endl;
                                    cout<<"\n[1] Registrar Productos";
                                    cout<<"\n[2] Modificar Productos";
                                    cout<<"\n[3] Mostrar Productos";
                                    cout<<"\n[4] Eliminar Productos";
                                    cout<<"\n[5] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>p;
                                    system("cls");
                                    switch(p){
                                        case 1:
                                            cout<<"\tREGISTRO DE PRODUCTO\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingresar nombre de producto: ";
                                            getline(cin,n);
                                            cout<<"Ingresar categoria de producto: ";
                                            getline(cin,ctg);
                                            cout<<"Ingresar cantidad de producto: ";
                                            cin>>can;
                                            fflush(stdin);
                                            cout<<"Ingresar marca de producto: ";
                                            getline(cin,m);
                                            cout<<"Ingresar gama de producto: ";
                                            getline(cin,g);
                                            cout<<"Ingresar descripcion de producto: ";
                                            getline(cin,d);
                                            cout<<"Ingrese precio de producto: ";
                                            cin>>pre;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de proveedor: ";
                                            getline(cin,cod);
                                            int pos;
                                            for(int i=0;i<cpr;i++){
                                                if(cod==proveedor[i]->get_codigo()){
                                                   pos=i;
                                                   break;
                                                }
                                            }
                                            producto[cp]=new Producto(can,n,ctg,m,g,d,pre,proveedor[pos],cp);
                                            cp++;
                                            break;
                                        case 2:
                                            cout<<"\tMODIFICAR PRODUCTO\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de producto: ";
                                            getline(cin,cod);
                                            int aux;
                                            for(int i=0;i<cp;i++){
                                                if(cod==producto[i]->get_codigo()){
                                                    cout<<"\nCodigo ingresado correctamente"<<endl;
                                                    cout<<"\nEliga el dato que desea modificar: ";
                                                    cout<<"\n[1] Cantidad de productos";
                                                    cout<<"\n[2] Nombre de producto";
                                                    cout<<"\n[3] Categoria de producto";
                                                    cout<<"\n[4] Marca de producto";
                                                    cout<<"\n[5] Gama de producto";
                                                    cout<<"\n[6] Descripcion de producto";
                                                    cout<<"\n[7] Precio de producto";
                                                    cout<<"\n[8] Codigo de proveedor";
                                                    cout<<"\n[0] Todo";
                                                    cout<<"\n\nIngrese su opcion aqui: ";
                                                    cin>>p;
                                                    cout<<endl;
                                                    if(p!=8){
                                                        producto[i]->modificar_productos(p);
                                                    }else{
                                                        fflush(stdin);
                                                        cout<<"Ingrese codigo de proveedor: ";
                                                        getline(cin,cod);
                                                        for(int j=0;j<cpr;j++){
                                                            if(cod==proveedor[j]->get_codigo()){
                                                                producto[i]->set_proveedor(proveedor[j]);
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    cout<<"\nDato modificado\n"<<endl;
                                                    system("pause");
                                                    break;
                                                }
                                            }
                                            if(aux==cp-1){
                                                cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                                system("pause");
                                                break;
                                            }
                                            break;
                                        case 3:
                                            cout<<"\t\t\t\tLISTA DE PRODUCTOS\n"<<endl;
                                            cout<<left;
                                            cout<<setw(8)<<"Codigo";
                                            cout<<setw(40)<<"Nombre";
                                            cout<<setw(25)<<"Categoria";
                                            cout<<setw(16)<<"Cantidad";
                                            cout<<setw(25)<<"Marca";
                                            cout<<setw(16)<<"Gama";
                                            cout<<setw(16)<<"Precio";
                                            cout<<setw(16)<<"Proveedor";
                                            cout<<endl;
                                            for(int i=0;i<cp;i++){
                                                producto[i]->mostrar_productos();
                                                cout<<endl;
                                            }
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 4:
                                            cout<<"\tELIMINAR PRODUCTO\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de producto: ";
                                            getline(cin,cod);
                                            for(int i=0;i<cp;i++){
                                                if(cod==producto[i]->get_codigo()){
                                                    fflush(stdin);
                                                    cout<<"\nEsta seguro de eliminar producto(Si/No): ";
                                                    getline(cin,det);
                                                    if((det=="Si")||(det=="si")){
                                                        delete producto[pos];
                                                        cp=cp-1;
                                                        cout<<"Dato Eliminado\n"<<endl;
                                                        system("pause");
                                                        break;
                                                    }else{
                                                        cout<<"Dato No eliminado\n"<<endl;
                                                        system("pause");
                                                        break;
                                                    } 
                                                }
                                                aux=i;
                                            }
                                            if(aux==cp-1){
                                                cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                                system("pause");
                                                break;
                                            }
                                            break;
                                        default:
                                            break;

                                    }
                                case 7:
                                    break;     
                            }
                        }while(menu!=7);
                        break;
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
                    cliente[cc]=new Cliente(u,c,n,a,e,d,t,m,cv,pf);
                    cc++;
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