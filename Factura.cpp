#include<iostream>
#include<string.h>
#include<vector>
#include "Registro.cpp"
#include "Cliente.cpp"
#include "Vendedor.cpp"
using namespace std;

class Factura{
    private:
        Cliente *cliente;
        Vendedor *vendedor;
        vector<Registro*> listaProductos;
        string codigo;
        string fecha;
        string tipo_pago;
        float total;
    public:
        Factura(Cliente*,Vendedor*,int,string,string);
        float set_total(float);
        void set_registro(Registro*);
        void ver_factura();
        void mostrar_facturas();
        float get_total();
};

Factura::Factura(Cliente* cl,Vendedor* v,int cd,string f,string tp){
    codigo="F-00"+IntToString(cd+1);
    cliente=cl;
    vendedor=v;
    fecha=f;
    tipo_pago=tp;
}

void Factura::set_registro(Registro* r){
    listaProductos.push_back(r);
}

float Factura::set_total(float t){
    total=t;
}

void Factura::ver_factura(){
    cout<<"\tTIENDA DE COMPUTADORAS XD\n\n";
    cout<<"Factura: "<<codigo<<endl;
    cout<<"Cliente: "<<cliente<<endl;
    cout<<"Tipo pago: "<<tipo_pago<<endl;

    for(int i=0;i<listaProductos.size();i++){
        listaProductos[i]->mostrar_registro();
        cout<<endl;
    }
    cout<<"\nTotal: "<<total<<endl;
}

void Factura::mostrar_facturas(){
    cout<<left;
    cout<<setw(25)<<codigo;
    cout<<setw(25)<<fecha;
    cout<<setw(25)<<tipo_pago;
    cout<<setw(25)<<cliente;
    cout<<setw(25)<<total;
}

float Factura::get_total(){
    return total;
}