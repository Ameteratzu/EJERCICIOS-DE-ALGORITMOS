#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char cdn1[50]; 
    char cdn2[50];
    int n = 0;

    string cadmay;
    cout<<"Ingresa una frase: "; cin.getline(cdn1,50);
    cout<<"Ingresa otra frase: "; cin.getline(cdn2,50);

    if (cdn1>cdn2)
	{
        cadmay=cdn1;
    }else if(cdn2>cdn1)
	{
        cadmay=cdn2;
    }
    if (cdn1==cdn2)
	{
        cout<<"LAS DOS FRASES TIENEN LA MISMA CANTIDAD DE CARACTERES."<<endl;
    }
    if (cdn1!=cdn2)
	{
        cout<<"LA CADENA CON MAYOR CANTIDAD DE CARACTERES ES : "<<cadmay;
    }
}

