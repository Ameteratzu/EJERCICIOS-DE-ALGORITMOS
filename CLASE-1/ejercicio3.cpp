#include<iostream>
using namespace std;
int fmayor(int xn){
	int num,xmayor,i;
	xmayor=0;
	for(i=0;i<xn;i++){
		cout<<"Ingresar numero"<<i+1<<":";cin>>num;
		if(num>xmayor){
			xmayor=num;
		}
	}
	return(xmayor);
}
main(){
	int n,nmy,nmy2;
	cout<<"Ingresar un número:";cin>>n;
	nmy=fmayor(n);
	nmy2=fmayor(3);
	cout<<"El numero mayor es:"<<nmy<<endl;
	cout<<"El numero mayor es:"<<nmy2<<endl;
	system("pause");
}
