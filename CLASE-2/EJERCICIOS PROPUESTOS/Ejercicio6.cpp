
#include <iostream>
using namespace std;
main(){
	int i,ncp,compras;
	double sc,prom,cmy,cmm;
	cout<<"Ingresar la cantidad de compras: ";cin>>ncp;
	int acompras[ncp];
	for(i=0;i<ncp;i++){
		cout<<"Ingresar sueldo: ";cin>>compras;
	    acompras[i]=compras;
	}
	cmy=0;
	sc=0;
	cmm=0;
	for(i=0;i<ncp;i++){
		sc+=acompras[i];
		if(acompras[i]<cmm){
			cmm=acompras[i];
		}
		if(acompras[i]>cmy){
			cmy=acompras[i];
		}
	}
	prom=sc/ncp;

	cout<<"El total de compras es: "<<ncp<<endl;
	cout<<"El promedio de compras es: "<<prom<<endl;
	cout<<"La compra mayor es: "<<cmy<<endl;
	cout<<"La compra menor es: "<<cmm<<endl;
	system("pause");
}
