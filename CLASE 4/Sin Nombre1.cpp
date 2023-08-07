#include <iostream>
using namespace std;
main(){
	int lista[5];
	int i=0,j=0,temp=0,xnum=0;
	for(i=0;i<=4;i++){
		cout<<"Ingresar numero"<<i+1<<":";cin>>xnum;
	lista[i]=xnum;
	}
	for(i=1;i<=4;i++){
		for(j=0;i<4;i++){
			if(lista[j]>lista[j+1]){
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
				
			}
		}
	}
	cout<<endl;
	cout<<"Los numeros ordenados ascendente son:"<<endl;
	for(i=0;i<=4;i++){
		cout<<lista[i]<<endl;
	}
	cout<<endl;
	cout<<"El numero menor es:"<<lista[0]<<endl;
	cout<<"El numero mayor es:"<<lista[4]<<endl;
	system("pause");
}
