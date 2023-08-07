#include <iostream>
using namespace std;
main(){
	int f, c, n,suma;
	int matriz[4][4];
		for(f=0; f<4; f++){
		for(c=0; c<4; c++){
			cout<<"Ingresa el numero:"<<f<<","<<c<<":";cin>>n;
			matriz[f][c]=n;
			suma+=matriz[f][c];
		}
	}
		cout<<"El total es:"<<suma<<endl;
		system("pause");
}
	
	
