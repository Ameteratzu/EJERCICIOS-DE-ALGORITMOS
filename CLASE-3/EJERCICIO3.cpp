#include <iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;
main(){
	double msueldo[5][5];
	double sueldo,ss,sp;
	int f,c,cs;
	
	srand(time(NULL));
	for(f=0;f<5;f++){
		for(c=0;c<5;c++){
		sueldo=930+rand()%9070;
		msueldo[f][c]=sueldo;
		}
	}
	ss=0.0;
	cs=0;
	for(f=0;f<5;f++){
		for(c=0;c<5;c++){
			ss+=msueldo[f][c];
		}
	}
	sp=ss/25;
	for(f=0;f<5;f++){
		for(c=0;c<5;c++){
			ss+=msueldo[f][c];
		}
	}
	sp=ss/25;
	for(f=0;f<5;f++){
		for(c=0;c<5;c++){
			cs++;
			cout<<"Sueldo"<<cs<<":"<<msueldo[f][c]<<endl;
			
		}
	}
	cout<<"La suma de sueldo:"<<ss<<endl;
	cout<<"El sueldo promedio:"<<sp<<endl;
	system("pause");
}
