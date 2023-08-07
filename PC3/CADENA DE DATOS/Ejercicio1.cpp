#include <iostream>
using namespace std;
int main(){
    char palabra[50], x;
    int i = 0, c = 0;
    cout<<"INGRESA UNA FRASE : "; cin.getline(palabra,50);
    cout<<"INGRESA LA PALABRA A BUSCAR :";cin>>x;
    while(palabra[i]!='\0')
    {
    if (palabra[i]==x)
	{
        cout<<"LA PALABRA SI SE ENCUENTRA EN LA FRASE";
        c++;
    }
    ++i;
    }
    if (c==0)
	{
        cout<<"LA PALABRA NO SE ENCUENTRA EN LA FRASE";
    }

}
