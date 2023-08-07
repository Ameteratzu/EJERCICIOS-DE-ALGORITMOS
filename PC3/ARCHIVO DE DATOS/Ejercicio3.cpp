#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string placa, marca, modelo, op;
    double precio;
    char nombarchivo[15]; 
    cout<<"Ingresa el nombre del archivo de datos: ";
    cin>>nombarchivo;
    cout<<endl;
    ofstream fout(nombarchivo);
    fout<<"PLACA"<<"\t"<<"MARCA"<<"\t"<<"MODELO"<<"\t"<<"PRECIO";
    fout<<endl;
    op="si";
    do{
        cout<<"Placa:";cin>>placa;
        cout<<"Marca:";cin>>marca;
        cout<<"Modelo:";cin>>modelo;
        cout<<"Precio:";cin>>precio;
        fout<<placa<<"\t"<<marca<<"\t"<<modelo<<"\t"<<precio;
        fout<<endl;
        cout<<endl;
        cout<<"¿Desea continuar? si/no: "; cin>>op;
        system("CLS"); 
    }while(op=="si");
}
