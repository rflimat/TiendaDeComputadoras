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
#include "Registro.cpp"
#include "Factura.cpp"
#include "Informe.cpp"
#include "Tienda.cpp"
using namespace std;

int main(){
    Cliente *cliente[50];
    Vendedor *vendedor[10];
    Administrador *administrador[2];
    Proveedor *proveedor[5];
    Producto *producto[100];
    Registro *registro[50];
    Factura *factura[50];
    Informe *informe[10];

    //Tienda
    Tienda tienda = Tienda("Tienda de Computadoras XD","20759349421","Av. Grau 1530","943233242",10000.00);

    //Administradores
    administrador[0]=new Administrador("rflimat","all101","Raul","Lima",18,"75934942","943233242","raulflimat@gmail.com",0,3000);
    administrador[1]=new Administrador("bevillamontey","all102","Betto","Villamonte",19,"79323232","921121222","bevillamontey@gmail.com",1,3000);

    //Vendedores
    vendedor[0]=new Vendedor("vendedor1","all103","Jose","Calizaya",19,"63232452","964322323","josec@gmail.com",0,1500);

    //Cliente
    cliente[0]=new Cliente("cliente1","c101","Luis","Gonzales",17,"79121332","982121443","luis_g@gmail.com",0,"Gaming");

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

    //Facturas
    factura[0]=new Factura(0,"20/02/2020","Efectivo",cliente[0],vendedor[0]); 
    registro[0]=new Registro(); registro[0]->agregar_producto(producto[2],1);
    factura[0]->set_registro(registro[0]);factura[0]->set_total(registro[0]->get_total());

    string us,ct,u,c,n,a,d,t,m,cr,tp,pf,r,g,ctg,fe;
    string cod,det,asg;
    float s,pre;
    int e,can;
    int cv=1,cc=1,cpr=2,cp=8,cf=1,ci=0;
    int entrar,menu,pr,p,f,v,in,td;
    int y=0,z=0;
    do{
        system("cls");
        cout<<"\n\tTIENDA DE COMPUTADORAS XD"<<endl;
        cout<<"\n[1] Iniciar sesion";
        cout<<"\n[2] Salir";
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
                while((y<2)||(z<cv)){
                    if(((administrador[y]->confirmar_acceso(us,ct))==true)||((vendedor[z]->confirmar_acceso(us,ct))==true)){
                        do{
                            system("cls");
                            cout<<"\tMENU DE OPCIONES"<<endl;
                            cout<<"\n[1] Vendedores";
                            cout<<"\n[2] Clientes";
                            cout<<"\n[3] Proveedores";
                            cout<<"\n[4] Productos";
                            cout<<"\n[5] Facturas";
                            cout<<"\n[6] Informes";
                            cout<<"\n[7] Tienda";
                            cout<<"\n[8] Salir";
                            cout<<"\n\nIngrese su opcion: ";
                            cin>>menu;
                            system("cls");
                            switch(menu){
                                case 1:
                                    system("cls");
                                    cout<<"\t\tVENDEDORES"<<endl;
                                    cout<<"\n[1] Registrar Vendedores";
                                    cout<<"\n[2] Modificar Vendedores";
                                    cout<<"\n[3] Mostrar Vendedores";
                                    cout<<"\n[4] Eliminar Vendedores";
                                    cout<<"\n[5] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>v;
                                    system("cls");
                                    switch(v){
                                        case 1:
                                            cout<<"\tREGISTRAR VENDEDOR\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Nombre de usuario: "; 
                                            getline(cin,u);
                                            cout<<"Correo electronico: ";
                                            getline(cin,m);
                                            cout<<"Contrasenia: ";
                                            getline(cin,c);
                                            system("cls");
                                            cout<<"\tDATOS PERSONALES\n"<<endl;
                                            cout<<"Nombres: "; 
                                            getline(cin,n);
                                            cout<<"Apellidos: "; 
                                            getline(cin,a);
                                            cout<<"Edad: "; 
                                            cin>>e;
                                            fflush(stdin);
                                            cout<<"DNI: "; 
                                            getline(cin,d);
                                            cout<<"Telefono: ";
                                            getline(cin,t);
                                            fflush(stdin);
                                            cout<<"Sueldo: ";
                                            cin>>s;
                                            vendedor[cv]=new Vendedor(u,c,n,a,e,d,t,m,cv,s);
                                            cv++;
                                            break;
                                        case 2:
                                            cout<<"\tMODIFICAR VENDEDOR\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de vendedor: ";
                                            getline(cin,cod);
                                            int aux;
                                            for(int i=0;i<cv;i++){
                                                if(cod==vendedor[i]->get_codigo()){
                                                    cout<<"\nCodigo ingresado correctamente"<<endl;
                                                    cout<<"\nEliga el dato que desea modificar: ";
                                                    cout<<"\n[1] Usuario";
                                                    cout<<"\n[2] Contrasenia";
                                                    cout<<"\n[3] Nombres";
                                                    cout<<"\n[4] Apellidos";
                                                    cout<<"\n[5] Edad";
                                                    cout<<"\n[6] Direccion";
                                                    cout<<"\n[7] Telefono";
                                                    cout<<"\n[8] Correo";
                                                    cout<<"\n[9] Sueldo";
                                                    cout<<"\n[0] Todo";
                                                    cout<<"\n\nIngrese su opcion aqui: ";
                                                    cin>>pr;
                                                    cout<<endl;
                                                    vendedor[i]->modificar_vendedor(pr);
                                                    cout<<"\nDato modificado\n"<<endl;
                                                    system("pause");
                                                    break;
                                                }
                                                aux=i;
                                            }
                                            if(aux==cv-1){
                                                cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                                system("pause");
                                                break;
                                            }
                                            break;
                                        case 3:
                                            cout<<"\tLISTA DE VENDEDORES\n"<<endl;
                                            cout<<left;
                                            cout<<setw(8)<<"Codigo";
                                            cout<<setw(16)<<"Usuario";
                                            cout<<setw(25)<<"Nombres";
                                            cout<<setw(25)<<"Apellidos";
                                            cout<<setw(16)<<"Edad";
                                            cout<<setw(16)<<"DNI";
                                            cout<<setw(16)<<"Telefono";
                                            cout<<setw(25)<<"Correo";
                                            cout<<setw(25)<<"Sueldo";
                                            cout<<endl;
                                            for(int i=0;i<cv;i++){
                                                vendedor[i]->mostrar_vendedor();
                                                cout<<endl;
                                            }
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 4:
                                            cout<<"\tELIMINAR VENDEDOR\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de vendedor: ";
                                            getline(cin,cod);
                                            for(int i=0;i<cv;i++){
                                                if(cod==vendedor[i]->get_codigo()){
                                                    fflush(stdin);
                                                    cout<<"\nEsta seguro de eliminar vendedor(Si/No): ";
                                                    getline(cin,det);
                                                    if((det=="Si")||(det=="si")){
                                                        delete vendedor[i];
                                                        cv=cv-1;
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
                                            if(aux==cv-1){
                                                cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                                system("pause");
                                                break;
                                            }
                                            break;
                                        default:
                                            break;
                                    }
                                    break;
                                case 2:
                                    system("cls");
                                    cout<<"\t\tCLIENTES"<<endl;
                                    cout<<"\n[1] Registrar Clientes";
                                    cout<<"\n[2] Modificar Clientes";
                                    cout<<"\n[3] Mostrar Clientes";
                                    cout<<"\n[4] Eliminar Clientes";
                                    cout<<"\n[5] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>v;
                                    system("cls");
                                    switch(v){
                                        case 1:
                                            cout<<"\tREGISTRAR CLIENTE\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Nombre de usuario: "; 
                                            getline(cin,u);
                                            cout<<"Correo electronico: ";
                                            getline(cin,m);
                                            cout<<"Contrasenia: ";
                                            getline(cin,c);
                                            system("cls");
                                            cout<<"\tDATOS PERSONALES\n"<<endl;
                                            cout<<"Nombres: "; 
                                            getline(cin,n);
                                            cout<<"Apellidos: "; 
                                            getline(cin,a);
                                            cout<<"Edad: "; 
                                            cin>>e;
                                            fflush(stdin);
                                            cout<<"DNI: "; 
                                            getline(cin,d);
                                            cout<<"Telefono: ";
                                            getline(cin,t);
                                            fflush(stdin);
                                            cout<<"Preferencias: \n";
                                            getline(cin,pf);
                                            cliente[cc]=new Cliente(u,c,n,a,e,d,t,m,cv,pf);
                                            cc++;
                                            break;
                                        case 2:
                                            cout<<"\tMODIFICAR CLIENTE\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de cliente: ";
                                            getline(cin,cod);
                                            int aux;
                                            for(int i=0;i<cc;i++){
                                                if(cod==cliente[i]->get_codigo()){
                                                    cout<<"\nCodigo ingresado correctamente"<<endl;
                                                    cout<<"\nEliga el dato que desea modificar: ";
                                                    cout<<"\n[1] Usuario";
                                                    cout<<"\n[2] Contrasenia";
                                                    cout<<"\n[3] Nombres";
                                                    cout<<"\n[4] Apellidos";
                                                    cout<<"\n[5] Edad";
                                                    cout<<"\n[6] Direccion";
                                                    cout<<"\n[7] Telefono";
                                                    cout<<"\n[8] Correo";
                                                    cout<<"\n[9] Preferencias";
                                                    cout<<"\n[0] Todo";
                                                    cout<<"\n\nIngrese su opcion aqui: ";
                                                    cin>>pr;
                                                    cout<<endl;
                                                    cliente[i]->modificar_cliente(pr);
                                                    cout<<"\nDato modificado\n"<<endl;
                                                    system("pause");
                                                    break;
                                                }
                                                aux=i;
                                            }
                                            if(aux==cc-1){
                                                cout<<"\nCodigo incorrecto. Ingrese de nuevo!"<<endl;
                                                system("pause");
                                                break;
                                            }
                                            break;
                                        case 3:
                                            cout<<"\tLISTA DE CLIENTES\n"<<endl;
                                            cout<<left;
                                            cout<<setw(8)<<"Codigo";
                                            cout<<setw(16)<<"Usuario";
                                            cout<<setw(25)<<"Nombres";
                                            cout<<setw(25)<<"Apellidos";
                                            cout<<setw(16)<<"Edad";
                                            cout<<setw(16)<<"DNI";
                                            cout<<setw(16)<<"Telefono";
                                            cout<<setw(25)<<"Correo";
                                            cout<<setw(25)<<"Preferencias";
                                            cout<<endl;
                                            for(int i=0;i<cc;i++){
                                                cliente[i]->mostrar_cliente();
                                                cout<<endl;
                                            }
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 4:
                                            cout<<"\tELIMINAR CLIENTE\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingrese codigo de cliente: ";
                                            getline(cin,cod);
                                            for(int i=0;i<cc;i++){
                                                if(cod==cliente[i]->get_codigo()){
                                                    fflush(stdin);
                                                    cout<<"\nEsta seguro de eliminar cliente(Si/No): ";
                                                    getline(cin,det);
                                                    if((det=="Si")||(det=="si")){
                                                        delete cliente[i];
                                                        cc=cc-1;
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
                                            if(aux==cc-1){
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
                                case 4:
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
                                    break;
                                case 5:
                                    system("cls");
                                    cout<<"\t\tFACTURAS"<<endl;
                                    cout<<"\n[1] Generar Factura";
                                    cout<<"\n[2] Ver Factura";
                                    cout<<"\n[3] Lista de Facturas";
                                    cout<<"\n[4] Eliminar Factura";
                                    cout<<"\n[5] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>f;
                                    system("cls");
                                    switch(f){
                                        case 1:
                                            cout<<"\tGENERAR FACTURA\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingresar codigo de vendedor: ";
                                            getline(cin,cod);
                                            for(int i=0;i<cv;i++){
                                                if(cod==vendedor[i]->get_codigo()){
                                                    cout<<"Ingresar fecha: ";
                                                    getline(cin,fe);
                                                    cout<<"Ingresar tipo de pago: ";
                                                    getline(cin,tp);
                                                    cout<<"Ingresar codigo de cliente: ";
                                                    getline(cin,det);
                                                    for(int j=0;j<cc;j++){
                                                        if(det==cliente[j]->get_codigo()){
                                                            factura[cf]=new Factura(cf,fe,tp,cliente[j],vendedor[i]);
                                                            registro[cf]=new Registro();
                                                            cout<<"\nAgregar productos: "<<endl;
                                                            string determinar="Si";
                                                            while((determinar=="Si")||(determinar=="si")){
                                                                fflush(stdin);
                                                                cout<<"\nIngrese codigo de producto: ";
                                                                getline(cin,asg);
                                                                int pos2;
                                                                for(int l=0;l<cp;l++){
                                                                    if(asg==producto[l]->get_codigo()){
                                                                        cout<<"\nCodigo de producto correcto"<<endl;
                                                                        pos2=l;
                                                                        break;
                                                                    }
                                                                }
                                                                cout<<"\nCantidad de productos: ";
                                                                cin>>can;
                                                                registro[cf]->agregar_producto(producto[pos2],can);
                                                                cout<<"\nDesea continuar (Si/No): ";
                                                                getline(cin,determinar);
                                                            }
                                                            factura[cf]->set_registro(registro[cf]);
                                                            factura[cf]->set_total(registro[cf]->get_total());
                                                            cf++;
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                            }
                                            break;
                                        case 2:
                                            cout<<"\tVER FACTURA"<<endl;
                                            fflush(stdin);
                                            cout<<"\nIngresar codigo de factura: ";
                                            getline(cin,cod);
                                            system("cls");
                                            for(int i=0;i<cf;i++){
                                                if(cod==factura[i]->get_codigo()){
                                                    factura[i]->ver_factura();
                                                    break;
                                                }
                                            }
                                            system("pause");
                                            break;
                                        case 3:
                                            cout<<"\t\tLISTA DE FACTURA\n"<<endl;
                                            cout<<left;
                                            cout<<setw(25)<<"Codigo";
                                            cout<<setw(25)<<"Fecha";
                                            cout<<setw(25)<<"Tipo de pago";
                                            cout<<setw(25)<<"Cliente";
                                            cout<<setw(25)<<"Vendedor";
                                            cout<<setw(25)<<"Total";
                                            cout<<endl;
                                            for(int i=0;i<cf;i++){
                                                factura[i]->mostrar_facturas();
                                                cout<<endl;
                                            }
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 4:
                                            cout<<"\tELIMINAR FACTURA"<<endl;
                                            fflush(stdin);
                                            cout<<"\nIngresar codigo de factura: ";
                                            getline(cin,cod);
                                            int aux;
                                            for(int i=0;i<cf;i++){
                                                if(cod==factura[i]->get_codigo()){
                                                    fflush(stdin);
                                                    cout<<"\nEsta seguro de eliminar factura(Si/No): ";
                                                    getline(cin,det);
                                                    if((det=="Si")||(det=="si")){
                                                        delete factura[i];
                                                        cf=cf-1;
                                                        cout<<"Factura Eliminado\n"<<endl;
                                                        system("pause");
                                                        break;
                                                    }else{
                                                        cout<<"Factura No eliminado\n"<<endl;
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
                                        case 5:
                                            break;
                                        default:
                                            break;
                                    }
                                    break;
                                case 6:
                                    system("cls");
                                    cout<<"\t\tINFORMES"<<endl;
                                    cout<<"\n[1] Generar Informe";
                                    cout<<"\n[2] Mostrar Informes";
                                    cout<<"\n[3] Exportar Informes";
                                    cout<<"\n[4] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>in;
                                    system("cls");
                                    switch(in){
                                        case 1:
                                            cout<<"\tREGISTRO DE INFORMES\n"<<endl;
                                            fflush(stdin);
                                            cout<<"Ingresar mes: ";
                                            getline(cin,m);
                                            cout<<"Ingresar anio: ";
                                            getline(cin,a);
                                            informe[ci]=new Informe(m,a,ci);
                                            for(int f=0;f<cf;f++){
                                                informe[ci]->obtener_ventas(factura[f]);
                                                informe[ci]->determinar_ganancia(tienda.get_capital());
                                            }
                                            ci++;
                                            break;
                                        case 2:
                                            cout<<"\t\tMOSTRAR INFORMES\n"<<endl;
                                            cout<<left;
                                            cout<<setw(25)<<"Codigo";
                                            cout<<setw(25)<<"Mes";
                                            cout<<setw(25)<<"Anio";
                                            cout<<setw(25)<<"Ventas";
                                            cout<<setw(25)<<"Ganancia";
                                            cout<<setw(25)<<"Crecimiento";
                                            cout<<endl;
                                            for(int i=0;i<ci;i++){
                                                informe[i]->mostrar_informe();
                                                cout<<endl;
                                            }
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 3:
                                            cout<<"\t\tEXPORTAR INFORMES\n";
                                            for(int i=0;i<ci;i++){
                                                informe[i]->exportar_informe();
                                            }
                                            cout<<"\nInforme exportado\n"<<endl;
                                            system("pause");
                                            break;
                                        case 4:
                                            break;
                                        default:
                                            break;
                                    }
                                    break;
                                case 7:
                                    system("cls");
                                    cout<<"\t\tTIENDA"<<endl;
                                    cout<<"\n[1] Mostrar usuarios";
                                    cout<<"\n[2] Mostrar productos";
                                    cout<<"\n[3] Informacion sobre tienda";
                                    cout<<"\n[4] Salir";
                                    cout<<"\n\nIngrese su opcion: ";
                                    cin>>td;
                                    system("cls");
                                    switch(td){
                                        case 1:
                                            for(int t=0;t<2;t++){
                                                tienda.set_usuarios(administrador[t]);
                                            }
                                            for(int t=0;t<cc;t++){
                                                tienda.set_usuarios(cliente[t]);
                                            }
                                            for(int t=0;t<cv;t++){
                                                tienda.set_usuarios(vendedor[t]);
                                            }
                                            tienda.mostrar_usuarios();
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 2:
                                            for(int t=0;t<cp;t++){
                                                tienda.set_productos(producto[t]);
                                            }
                                            tienda.mostrar_productos();
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 3:
                                            cout<<"\t\tINFORMACION DE TIENDA\n"<<endl;
                                            tienda.mostrar_datos();
                                            cout<<endl;
                                            system("pause");
                                            break;
                                        case 4:
                                            break;
                                        default:
                                            break;
                                    }
                                    break;
                                case 8:
                                    break;     
                            }
                        }while(menu!=8);
                        break;
                    }else{
                        cout<<"\nContrasenia incorrecta"<<endl;
                        system("pause");
                        break;
                    }
                    y++;z++;
                }
                break;
            case 2:
                break;
            default:
                break;
            }
    }while(entrar!=2);
    
    return 0;
}