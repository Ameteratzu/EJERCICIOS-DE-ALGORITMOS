#include <iostream>
using namespace std;
FILE *fempleados;
int main(){
    char car;
    fempleados=fopen("empleados.dat", "r");
	
    if(fempleados==NULL)
	{
        cout<<"No existe el archivo"<<endl;
    }else
	{
        cout<<endl;
        while(!feof(fempleados))
		{
            
            car=fgetc(fempleados);
            if (car==';')
			{
                cout<<"\t"; 
            }else
			{
                cout<<car;
            }
        }
    }
    cout<<endl;
}
