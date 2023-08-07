#include<iostream>
using namespace std;

int fsuma(int xn1,int xn2) {
	return(xn1+xn2);
}
main(){
	int nro1,nro2,suma,suma2;
	cout<<"INGRESAR N1: ";cin>>nro1;
	cout<<"INGRESAR N2: ";cin>>nro2;

	suma=fsuma(nro1,nro2);
	suma2=fsuma(40,60);
	cout<<"LA SUMA DE LOS NUMERO ES:"<<suma<<endl;
	cout<<"LA SUMA DE LOS NUMEROS ES:"<<suma2<<endl;
	system("pause");

}
