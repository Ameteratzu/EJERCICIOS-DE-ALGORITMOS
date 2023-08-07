#include<iostream>
using namespace std;
double fpromedio(double xnt1,double xnt2,double xnt3){
	return((xnt1+xnt2+xnt3)/3);
}
string fcondicion(double p){
	string c;
	if(p>=14){
		c="aprobado";
	}else{
		c="desaprobado";
	}
	return(c);
}
main(){
	double nt1,nt2,nt3,promedio;
	string condicion;
	cout<<"Ingresar nota 1:";cin>>nt1;
	cout<<"Ingresar nota 2:";cin>>nt2;
	cout<<"Ingresar nota 3:";cin>>nt3;
	promedio=fpromedio(nt1,nt2,nt3);
	condicion=fcondicion(promedio);
	cout<<"El promedio de notas es:"<<promedio<<endl;
	cout<<"La condicion del alumno es:"<<condicion<<endl;
	system("pause");
}
