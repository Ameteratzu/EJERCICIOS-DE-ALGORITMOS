#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int FILAS = 4;
const int COLUMNAS = 4;
const int MIN_EDAD = 18;
const int MAX_EDAD = 65;

int main() {
    srand(time(0));
    int edades[FILAS][COLUMNAS];
    int totalEdades = 0;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            edades[i][j] = MIN_EDAD + rand() % (MAX_EDAD - MIN_EDAD + 1);
            totalEdades += edades[i][j];
        }
    }

    double promedioEdades = (double)totalEdades / (FILAS * COLUMNAS);
    cout << "El total de las edades es: " << totalEdades << endl;
    cout << "El promedio de las edades es: " << promedioEdades << endl;

    return 0;
}
