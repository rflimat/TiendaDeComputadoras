#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

class Informe{
    private:
        string codigo;
        string mes;
        string anio;
        float ventas=0;
        float ganancia;
        float crecimiento;
    public:
        Informe(string,string,int);
        void obtener_ventas(Factura*);
        float get_ventas();
        void determinar_crecimiento(Informe*);
        void mostrar_informe();
};

Informe::Informe(string m,string a,int cd){
    codigo="IN-00"+IntToString(cd+1);
    mes=m;
    anio=a;
}

void Informe::obtener_ventas(Factura *f){
    ventas=ventas+f->get_total();
}

float Informe::get_ventas(){
    return ventas;
}

void Informe::determinar_crecimiento(Informe *i){
    crecimiento=i->get_ventas();
}

void Informe::mostrar_informe(){
    cout<<left;
    cout<<setw(25)<<mes;
    cout<<setw(25)<<anio;
    cout<<setw(25)<<ventas;
    cout<<setw(25)<<ganancia;
    cout<<setw(25)<<crecimiento;
}