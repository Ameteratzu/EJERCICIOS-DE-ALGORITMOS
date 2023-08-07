#include <iostream>
using namespace std;

const int n = 100;

int main() {
    int cantidadPersonas;
    double pesos[n];
    double sumaPesos = 0;

    cout << "Ingrese la cantidad de personas: ";
    cin >> cantidadPersonas;

    for (int i = 0; i < cantidadPersonas; i++) {
        cout << "Ingrese el peso de la persona " << i + 1 << ": ";
        cin >> pesos[i];
        sumaPesos += pesos[i];
    }

    double promedioPesos = sumaPesos / cantidadPersonas;
    cout << "El promedio de peso de las personas es: " << promedioPesos << endl;

    return 0;
     }
