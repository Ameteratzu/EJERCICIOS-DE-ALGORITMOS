#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;

main(){

	int f,c,cv;
	double vt, TotalV, VP;
	double mvt [3][3];
	
	srand(time(NULL)); 
	for(f=0;f<3;f++){ 
		for(c=0;c<3;c++){ 
			vt =1000+rand()%9000;
			mvt[f][c] = vt;
		}
	}
	
	TotalV = 0.0;
	cv = 0;
	
	for(f=0;f<3;f++){ 
		for(c=0;c<3;c++){ 
			TotalV+= mvt[f][c];
		}
	}
	VP=TotalV/9;
	
	for(f=0;f<3;f++){ 
		for(c=0;c<3;c++){ 
			cv++;
			cout << "Ventas " << cv << ":" << mvt[f][c] <<endl;
		}
	}
	cout << "El total es: " << TotalV << endl;
	cout << "El promedio es: " << VP << endl;
	system("pause");
}
