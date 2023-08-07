#include <iostream>
using namespace std;
string fpalabra(int xn){
	string mensaje;
		switch(xn){
			case 1:mensaje="uno";break;
			case 2:mensaje="dos";break;
			case 3:mensaje="tres";break;
			case 4:mensaje="cuatro";break;
			case 5:mensaje="cinco";break;
			case 6:mensaje="seis";break;
			case 7:mensaje="siete";break;
			case 8:mensaje="ocho";break;
			case 9:mensaje="nueve";break;
		}
		return(mensaje);
}
main(){
	int n;
	string resultado;
	cout<<"Ingresar un numero";cin>>n;
	resultado=fpalabra(n);
	cout<<resultado<<endl;
	system("pause");
}
