#include <iostream>
using namespace std;

int sumaDigitos(int numero) {
    int suma = 0;
    while (numero > 0) {
        suma += numero % 10;
        numero /= 10;
    }
    return suma;
}

double promedioDigitos(int numero) {
    int suma = sumaDigitos(numero);
    int cantidadDigitos = 0;
    int copiaNumero = numero;
    while (copiaNumero > 0) {
        cantidadDigitos++;
        copiaNumero /= 10;
    }
    return (double)suma / cantidadDigitos;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La suma de los dígitos es: " << sumaDigitos(numero) << endl;
    cout << "El promedio de los dígitos es: " << promedioDigitos(numero) << endl;
    return 0;
}
