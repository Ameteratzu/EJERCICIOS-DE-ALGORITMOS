#include <iostream>
using namespace std;
#include <string.h>

struct rvendedor{
   int dni;
   string vdr;
   int vt1,vt2,vt3,tl;
}ra[5];
main(){
   int i;
    for(i=0;i<=4;i++){
       cout<<"DNI     :";cin>>ra[i].dni;
       cout<<"vendedor:";cin>>ra[i].vdr;
       cout<<"Venta 1 :";cin>>ra[i].vt1;
	   cout<<"Venta 2 :";cin>>ra[i].vt2;
	   cout<<"Venta 3 :";cin>>ra[i].vt3;
	   cout<<endl;
    }
    int tl, vt1, vt2, vt3;
     for(i=0;i<=4;i++){
     	ra[i].tl=(ra[i].vt1+ra[i].vt2+ra[i].vt3);;
     }
            //salida
	cout<<"DNI  "<<"Vendedor  "<<"Venta 1 "<<"Venta 2  "<<"Venta 3  "<<"TOTAL  "<<endl;
    for(i=0;i<=4;i++){
      cout<<ra[i].dni<<"  "<<ra[i].vdr<<"  "
      <<ra[i].vt1<<" "<<ra[i].vt2<<" "<<ra[i].vt3<<" "<<ra[i].tl<<" "<<endl;
    } 	
	system("pause");  
}
