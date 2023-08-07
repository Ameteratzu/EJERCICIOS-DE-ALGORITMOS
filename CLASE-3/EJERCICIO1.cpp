#include<iostream>
using namespace std;
int main(){
	int f,c,num,sp,ci,r;
	int matriz[3][3];
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			cout<<"Ingresar numero"<<f<<","<<c<<":";cin>>num;
			matriz[f][c]=num;
		}
	}
	sp=0;
	ci=0;
	for(f=0;f<3;f++){
		for(c=0;c<3;c++){
			r=matriz[f][c]%2;
			if(r==0){
				sp+=matriz[f][c];
			}else{
				ci++;
			}
		}
	}
	cout<<endl;
	cout<<"Los resultados son:"<<endl;
	cout<<"La suma de n pares es:"<<sp<<endl;
	cout<<"La cantidad de n impares es:"<<ci<<endl;
	system("pause");
	
}

