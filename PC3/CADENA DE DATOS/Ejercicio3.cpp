#include <iostream>
#include <string.h>
using namespace std;

string crt, crt2;
string trade;
int i,num;

int main(){

	cout<<"INGRESAR LA PALABRA 1: ";cin>>crt;
	cout<<"INGRESAR LA PALABRA 2: ";cin>>crt2;

	trade = crt2;
	if(sizeof(crt)!=sizeof(crt2))
	{
		cout<<"LAS PALABRAS TIENEN DISTINTO NUMERO DE CARACTERES"<<endl;
	}else 
	{
		for(i=0; i<sizeof(crt) ;i++)
		{
			crt2[i]=crt[i];
			crt[i]=trade[i];
	    }
	}

	cout<<"PALABRA 1 : "<<crt<<endl;
	cout<<"PALABRA 2 : "<<crt2<<endl;
}

