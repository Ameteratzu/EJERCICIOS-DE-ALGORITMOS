#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

main(){	

	int f,c,cv;
	double vt, vmy, vme;
	double mvt [4][4];
	
	srand(time(NULL)); 
	for(f=0;f<4;f++){ 
		for(c=0;c<4;c++){ 
			vt =10+rand()%4990;
			mvt[f][c] = vt;
		}
	}
	
	cv = 0;
	vmy = 0;
	vme = 5000;
	
	for(f=0;f<4;f++){ 
		for(c=0;c<4;c++){ 
			if (mvt [f][c] > vmy){
			vmy = mvt[f][c];
			}
		}
	}
	for(f=0;f<4;f++){ 
		for(c=0;c<4;c++){ 
			if (mvt [f][c] <= vme){
			vme = mvt [f][c];
			}
		}
	}
	for(f=0;f<4;f++){ 
		for(c=0;c<4;c++){ 
			cv++;
			cout << "Venta " << cv << ":" << mvt[f][c] <<endl;
		}
	}
	
	cout << "La venta mayor es: " << vmy << endl;
	cout << "La venta menor es: " << vme << endl;
	system("pause");
}
