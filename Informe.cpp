#include<iostream>
#include<string.h>
#include<iomanip>
#include<fstream>
using namespace std;

class Informe{
    private:
        string codigo;
        string mes;
        string anio;
        float ventas=0.00;
        float ganancia=0.00;
        float crecimiento=0.00;
    public:
        Informe(string,string,int);
        void obtener_ventas(Factura*);
        float get_ventas();
        void determinar_ganancia(float);
        void determinar_crecimiento(Informe*);
        void mostrar_informe();
        void exportar_informe();
};

Informe::Informe(string m,string a,int cd){
    codigo="IN-00"+IntToString(cd+1);
    mes=m;
    anio=a;
}

void Informe::obtener_ventas(Factura *f){
    ventas=ventas+f->get_total();
}

void Informe::determinar_ganancia(float c){
    ganancia=ventas-c;
}

float Informe::get_ventas(){
    return ventas;
}

void Informe::determinar_crecimiento(Informe *i){
    crecimiento=i->get_ventas();
}

void Informe::mostrar_informe(){
    cout<<left;
    cout<<setw(25)<<codigo;
    cout<<setw(25)<<mes;
    cout<<setw(25)<<anio;
    cout<<setw(25)<<ventas;
    cout<<setw(25)<<ganancia;
    cout<<setw(25)<<crecimiento;
}

void Informe::exportar_informe(){
    ofstream archivo;
    archivo.open("informes.txt",ios::app);
    archivo<<left;
    archivo<<setw(25)<<codigo;
    archivo<<setw(25)<<mes;
    archivo<<setw(25)<<anio;
    archivo<<setw(25)<<ventas;
    archivo<<setw(25)<<ganancia;
    archivo<<setw(25)<<crecimiento;
    archivo<<endl;
    archivo.close();
}