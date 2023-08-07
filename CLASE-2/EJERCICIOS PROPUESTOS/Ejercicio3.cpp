#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Introduzca un numero del (1-7)"<<endl;
	cin>>num;
	if(num>=0 and num<=8)
		switch (num)
		{
			case 1:
				{
				cout<<"Lunes"<<endl;
				}
			break;
			case 2:
				{
				cout<<"Martes"<<endl;
				}
			break;
			case 3:
				{
				cout<<"Miercoles"<<endl;
				}
			break;
			case 4 :
				{
				cout<<"Jueves"<<endl;
				}
			break;
			case 5:
				{
				cout<<"Viernes"<<endl;
				}
			break;
			case 6:
				{
				cout<<"Sabado"<<endl;
				}
			break;
			case 7:
				{
				cout<<"Domingo"<<endl;
				}
			break;
		}
	else
		cout<<"El numero es incorrecto"<<endl;
	return 0;
	}
		

