#include <iostream>
using namespace std;
int main(){
	int f, c, n, suma, prom;
	int matriz[4][4];
		for(f=0; f<4; f++){
		for(c=0; c<4; c++){
			cout<<"Ingresar numero:"<<f<<","<<c<<":";cin>>n;
			matriz[f][c]=n;
			suma+=matriz[f][c];
		}
	}
	
	prom=suma/16;
	
		cout<<"El total de ventas es:"<<suma<<endl;
		cout<<"El promedio de ventas es:"<<prom<<endl;
		system("pause");
}
	
