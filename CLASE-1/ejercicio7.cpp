#include <iostream>
using namespace std;
main(){
	int i,ne;
	double sueldo,ss,ps,smy;
	cout<<"Ingresar la cantidad de empleados:";cin>>ne;
	int asueldo[ne];
	
	for(i=0;i<ne;i++){
		cout<<"Ingresar sueldo:";cin>>sueldo;
		asueldo[i]=sueldo;
	}
	smy=0;
	ss=0;
	for(i=0;i<ne;i++){
		ss+=asueldo[i];
		if(asueldo[i]>smy){
		   smy=asueldo[i];	
		}
    }
    ps=ss/ne;
	cout<<"El promedio de sueldos es:"<<ps<<endl;
	cout<<"El sueldo mayor es:"<<smy<<endl;
	system("pause");
}
