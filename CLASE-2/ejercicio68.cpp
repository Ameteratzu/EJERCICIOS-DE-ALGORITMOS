#include <iostream>
using namespace std;
main(){
	int i,num,nbus;
	int anumeros[5];
	string mensaje;
	for(i=0;i<5;i++){
		cout<<"Ingresar numero:";cin>>num;
		anumeros[i]=num;
	}
	cout<<"Ingresar numero el Nro a buscar:";cin>>nbus;
	for(i=0;i<5;i++){
		if(anumeros[i]==nbus){
			mensaje="Si existe";
			break;
		}else{
			mensaje="No existe";
		}
	}
	cout<<"El resultado de la busqueda es:"<<mensaje<<endl;
	system("pause");
}
