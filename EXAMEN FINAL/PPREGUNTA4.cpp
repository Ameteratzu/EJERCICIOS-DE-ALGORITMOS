#include <iostream>
#include <string>
#include <algorithm>

const int num_alumnos = 4;
const int num_notas = 4;

struct Alumno {
  std::string nombre;
  int notas[num_notas];
  float promedio;
};

void leer_datos(Alumno alumnos[]) {
  for (int i = 0; i < num_alumnos; i++) {
    std::cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
    std::cin >> alumnos[i].nombre;
    for (int j = 0; j < num_notas; j++) {
      std::cout << "Ingrese la nota " << j + 1 << ": ";
      std::cin >> alumnos[i].notas[j];
    }
  }
}

void calcular_promedios(Alumno alumnos[]) {
  for (int i = 0; i < num_alumnos; i++) {
    int suma = 0;
    for (int j = 0; j < num_notas; j++) {
      suma += alumnos[i].notas[j];
    }
    alumnos[i].promedio = (float)suma / num_notas;
  }
}

bool comparar_alumnos(Alumno a, Alumno b) {
  return a.promedio > b.promedio;
}

int main() {
  Alumno alumnos[num_alumnos];
  leer_datos(alumnos);
  calcular_promedios(alumnos);
  std::sort(alumnos, alumnos + num_alumnos, comparar_alumnos);
  std::cout << "El alumno con el promedio más alto es " << alumnos[0].nombre
            << " con un promedio de " << alumnos[0].promedio << std::endl;
  return 0;
}
