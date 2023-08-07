#include <iostream>
using namespace std;
main(){
    int i;
    string nom,nbus;
    string anom[5];
    string msj;
    //entrada
    for(i=0;i<5;i++){
    	cout<<"Ingresar nombre: ";cin>>nom;
    	anom[i]=nom;
	}
	cout<<"Ingresar el nombre a buscar es:";cin>>nbus;
	//Proceso
	for(i=0;i<5;i++){
		if(anom[i]==nbus){
			msj="Si existe";
			break;//forzar a finalizar el para
		}else{
			msj="No existe";
		}
	}
	//salida 
	cout<<"El resultado de la busqueda del nombre es: "<<msj<<endl;
	cout<<"La posicion del nombre en el arreglo es: "<<i+1<<endl;
	system("pause");
}
