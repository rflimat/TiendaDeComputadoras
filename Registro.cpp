#include<iostream>
#include<string.h>
#include "Producto.cpp"
using namespace std;

class Registro{
    private:
        int cantidad_productos[10];
        Producto *producto[10];
        float subtotal[10];
        float total;
    public:
        void set_producto(Producto*,int);
        int get_cantidad();
        float get_total();
        void agregar_producto();
        void modificar_registro(int,string);
        void mostrar_registro();
};

void Registro::set_producto(Producto *p,int i){
    producto[i]=p;
    i++;
}

void Registro::agregar_producto(){
    string codigo,d;
    cout<<"Ingrese codigo de producto: ";
    getline(cin,codigo);
    for(int i=0;i<10;i++){
        system("cls");
        if(codigo==producto[i]->get_codigo()){
            cout<<"Codigo de producto correcto";
            producto[i]->mostrar_productos();
            cout<<"Cantidad de productos: ";
            cin>>cantidad_productos[i];
            if(producto[i]->get_cantidad()==0){
                cout<<"\nProducto agotado\n";
                system("pause");
                break;
            }
            if((producto[i]->get_cantidad()-cantidad_productos[i])<0){
                cout<<"\nEsta disponible solamente "<<producto[i]->get_cantidad()<<" productos";
                system("pause");
                break;
            }
            else{
                producto[i]->validar_registro(cantidad_productos[i]);
                subtotal[i]=cantidad_productos[i]*producto[i]->get_precio();
                total=total+subtotal[i];
            }
            cout<<"\n\nDesea aniadir otro producto (Si/No): ";
            fflush(stdin);
            getline(cin,d);
            if ((d!="Si")||(d!="si")){
                break;
            }
        }else{
            cout<<"Codigo de producto incorrecto";
            system("pause");
            break;
        }
    }
}

void Registro::modificar_registro(int dato,string c){
    for(int i=0;i<10;i++){
        if(c==producto[i]->get_codigo()){
            if(dato==1){
                cout<<"Cambiar cantidad de productos: ";
                cin>>cantidad_productos[i];
            }
            if(dato==2){
                delete producto[i];
                i=i-1;
            }
        }
    }
}

void Registro::mostrar_registro(){
    cout<<left;
    cout<<setw(25)<<"Codigo";
    cout<<setw(25)<<"Nombre";
    cout<<setw(25)<<"Cantidad";
    cout<<setw(25)<<"Precio U.";
    cout<<setw(25)<<"Subtotal";
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<left;
        cout<<setw(25)<<producto[i]->get_codigo();
        cout<<setw(25)<<producto[i]->get_nombre();
        cout<<setw(25)<<cantidad_productos[i];
        cout<<setw(25)<<producto[i]->get_precio();
        cout<<setw(25)<<subtotal[i];
    }
}

float Registro::get_total(){
    return total;
}