#include <iostream>
using namespace std;
main(){
	int f,c,num;
	double sn,pnum;
	int matriz[3][3];
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<"Ingresar numero"<<f<<","<<c<<":";cin>>num;
			matriz[f][c]=num;
	}
	sn=0.0;
	pnum=0.0;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			sn+=matriz[f][c];
		}
	}	
	pnum=sn/9;
	cout<<"La suma de los numeros es"<<sn<<endl;
	}	
} 
