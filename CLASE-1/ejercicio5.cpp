#include <iostream>
using namespace std;
main(){
	int n,i,peso;
	double pe,se;
	cout<<"Ingresar la cantidad de personas ";cin>>n;
	int arreglo1[n];
	for(i=0;i<n;i++){
		cout<<"Ingresar el peso"<<i+1<<":";
		cin>>peso;
		arreglo1[i]=peso;
	}
	se=0.0;
	for(i=0;i<n;i++){
		se+=arreglo1[i];
	}
	pe=se/n;
	cout<<"El promedio de peso de las personas es:"<<pe<<endl;
	system("pause");
}
