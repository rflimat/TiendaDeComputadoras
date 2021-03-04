#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Factura{
    private:
        Cliente *cliente;
        Vendedor *vendedor;
        Registro* listaProductos;
        string codigo;
        string fecha;
        string tipo_pago;
        float total=0.00;
    public:
        Factura(int,string,string,Cliente*,Vendedor*);
        string get_codigo();
        float get_total();
        void set_total(float);
        void set_registro(Registro*);
        void ver_factura();
        void mostrar_facturas();
};

Factura::Factura(int cd,string f,string tp,Cliente* cl,Vendedor* v){
    codigo="F-00"+IntToString(cd+1);
    fecha=f;
    tipo_pago=tp;
    cliente=cl;
    vendedor=v;
}

void Factura::set_registro(Registro* r){
    listaProductos=r;
}

void Factura::set_total(float t){
    total=t;
}

string Factura::get_codigo(){
    return codigo;
}

void Factura::ver_factura(){
    cout<<"\n\t\t\tTienda de Computadoras R8L Computer\n\n";
    cout<<"Factura: "<<codigo<<endl;
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Cliente: "<<cliente->get_nombres()<<endl;
    cout<<"DNI: "<<cliente->get_DNI()<<endl;
    cout<<"Tipo pago: "<<tipo_pago<<endl;
    cout<<endl<<left;
    cout<<setw(16)<<"Codigo";
    cout<<setw(40)<<"Nombre";
    cout<<setw(16)<<"Cantidad";
    cout<<setw(16)<<"Precio U.";
    cout<<setw(16)<<"Subtotal";
    cout<<endl;
    listaProductos->mostrar_registro();
    cout<<"\n\nTotal: "<<total<<endl<<endl;
}

void Factura::mostrar_facturas(){
    cout<<left;
    cout<<setw(25)<<codigo;
    cout<<setw(25)<<fecha;
    cout<<setw(25)<<tipo_pago;
    cout<<setw(25)<<cliente->get_nombres();
    cout<<setw(25)<<vendedor->get_nombres();
    cout<<setw(25)<<total;
}

float Factura::get_total(){
    return total;
}