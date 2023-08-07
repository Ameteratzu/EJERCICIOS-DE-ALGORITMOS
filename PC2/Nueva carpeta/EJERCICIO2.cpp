#include <iostream>
using namespace std;
#include <string.h>
struct ralumno{
	string dni;
	string nombre;
	double edad;
	string sexo;
}ra[3];
main(){

	int i,cap,cad;
	double prom,ss;

	for(i=0;i<3;i++){
		cout<<"DNI:";cin>>ra[i].dni;
		cout<<"NOMBRE:";cin>>ra[i].nombre;
		cout<<"EDAD:";cin>>ra[i].edad;
		cout<<"SEXO:";cin>>ra[i].sexo;
		cout<<endl;
	}
	cap=0;
	cad=0;
	ss=0;
	for (i=0;i<3;i++){
		ss+=ra[i].edad;
		if(ra[i].sexo=="M"){
			cap++;
		}
		if(ra[i].sexo=="F"){
			cad++;
		}
	}
	cout<<endl; 
	prom=ss/3;

	cout<<"DNI  "<<"NOMBRE "<<"EDAD  "<<"SEXO  "<<endl;
	for(i=0;i<3;i++){
		cout<<ra[i].dni<<"  "<<ra[i].nombre<<"  "<<ra[i].edad<<"  "<<ra[i].sexo<<endl;
	}
	cout<<endl;
    cout<<"Alumnos hombres:"<<cap<<endl;
    cout<<"Alumnos muejeres:"<<cad<<endl;
    cout<<"El promedio :"<<prom<<endl;
    system("pause");
}
