#include <iostream>
using namespace std;
int main(){
	int i,n,c,nmenor;
	i = 1;
	c = 1;
	while (i !=0){
		cout<<"------------------------"<<endl;
		cout<<"Ingresa una opcion"<<endl;
		cout<<"1) Ingresar N"<<endl;
		cout<<"0) Salir"<<endl;
		cin>> i;
		if (i == 1){
			cout<<"Ingrese un numero:";
			cin>>n;
			if (c == 1){
				nmenor=n;
				c = 0;
			}else{
				if (n<nmenor){
					nmenor = n;
				}
			}
		}
	}
	cout<<"El numero menor de n numeros es"<<nmenor;
	return 0;
}
