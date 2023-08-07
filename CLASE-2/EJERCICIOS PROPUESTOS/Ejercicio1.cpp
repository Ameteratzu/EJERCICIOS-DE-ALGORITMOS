#include <iostream>
using namespace std;
double fpromedio(double xn1,double xn2,double xn3,double xn4){
	return((xn1+xn2+xn3+xn4)/4);
}
main(){
	double n1,n2,n3,n4,promedio,total;
	cout<<"Ingresar N° 1:";cin>>n1;
	cout<<"Ingresar N° 2:";cin>>n2;
	cout<<"Ingresar N° 3:";cin>>n3;
	cout<<"Ingresar N° 4:";cin>>n4;
	promedio=fpromedio(n1,n2,n3,n4);
	total=n1+n2+n3+n4;
	cout<<"La suma de las ventas es:"<<total<<endl;
	cout<<"El promedio es:"<<promedio<<endl;
	system("pause");
}
