//libreria de e/s de datos
#include <iostream>
using namespace std;
#include <string.h>
//registro de datos
struct ralumno{
   int nro;
   string nombre;
   string d1;
   string d2;
   string d3;
   string d4;
   string d5;
   int nrofaltas;
   string estado;
}ra[3];
main(){
   //declarar variable
   int i,nf;
   //entrada
    for(i=0;i<=2;i++){
       cout<<"nro:";cin>>ra[i].nro;
       cout<<"Alumno:";cin>>ra[i].nombre;
       cout<<"Lunes:";cin>>ra[i].d1;
	   cout<<"Martes:";cin>>ra[i].d2;
	   cout<<"Miércoles:";cin>>ra[i].d3;
	   cout<<"Jueves:";cin>>ra[i].d4;
	   cout<<"Viernes:";cin>>ra[i].d5;
	   cout<<endl;
    }
    nf=0;
       //proceso
     for(i=0;i<=2;i++){
       if(ra[i].d1=="f"){
       	  nf=nf+1;
	   }
	   if(ra[i].d2=="f"){
       	  nf=nf+1;
	   }
       if(ra[i].d3=="f"){
       	  nf=nf+1;
	   }
	   if(ra[i].d4=="f"){
       	  nf=nf+1;
	   }
	   if(ra[i].d5=="f"){
       	  nf=nf+1;
	   }	   
       ra[i].nrofaltas=nf;
       
       if(nf>3){
       	  ra[i].estado="Comunicarse con sus padres";
	   }
	   nf=0;
    }
    cout<<endl;
            //salida
	cout<<"NRO  "<<"NOMBRE  "<<"L  "<<"M  "<<"MI  "<<"JV  "<<"V  "<<endl;
    for(i=0;i<=4;i++){
      cout<<ra[i].nro<<"  "<<ra[i].nombre<<"  "
      <<ra[i].d1<<" "<<ra[i].d2<<" "<<ra[i].d3<<" "<<ra[i].d4<<" "<<ra[i].d5
      <<"    "<<ra[i].nrofaltas<<"    "<<ra[i].estado<<endl;
    } 	
	system("pause");  
}
