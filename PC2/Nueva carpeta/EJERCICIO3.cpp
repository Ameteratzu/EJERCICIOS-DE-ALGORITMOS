#include <iostream>
using namespace std;
#include <iostream>
#include <string.h>

struct rvendedor{
	string codigo;
	string producto;
	double precio,stock;
}ra[5];

main(){

	int i;
	double pmy, pmn,ss;

	for(i=0;i<=4;i++){
		cout<<"CODIGO:";cin>>ra[i].codigo;
		cout<<"PRODUCTO:";cin>>ra[i].producto;
		cout<<"PRECIO:";cin>>ra[i].precio;
		cout<<"STOCK:";cin>>ra[i].stock;
		cout<<endl;
	}

	pmn=99999;
	pmy=0;
	for (i=0;i<=4;i++){
		ss+=ra[i].stock;
		cout<<endl; 
		if(ra[i].precio<pmn){
			pmn=ra[i].precio;
		}
	}

	cout<<"CODIGO  "<<"PRODUCTO  "<<"PRECIO  "<<"StOCK  "<<endl;
	for(i=0;i<=4;i++){
		cout<<ra[i].codigo<<"   "<<ra[i].producto<<"   "<<ra[i].precio<<"   "<<ra[i].stock<<endl;
	}
	cout<<endl;
	cout<<"EL STOCK TOTAL ES:"<<ss<<endl;
	cout<<"EL PRECIO MENOR DE PRODUCTO ES:"<<pmn<<endl;
    system("pause");
}
