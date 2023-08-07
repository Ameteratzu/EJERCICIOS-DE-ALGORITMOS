#include <iostream>
using namespace std;
FILE *fvehiculos;
int main(){
    char caracter;
    fvehiculos=fopen("vehiculos.dat", "r");
    if(fvehiculos==NULL){
        cout<<"No existe el archivo"<<endl;
    }else{
        cout<<endl;
        while(!feof(fvehiculos)){

            caracter=fgetc(fvehiculos);
            if (caracter==';'){

            }else{
                cout<<caracter;
            }
        }
    }
    cout<<endl;
    system("pause");
}
