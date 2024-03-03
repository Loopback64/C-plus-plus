#include <iostream>

using namespace std;

int main() {
  double length, width, height, volume;

  // Leer la longitud, la anchura y la altura del prisma
  cout << "Introduzca la longitud del prisma: ";
  cin >> length;

  cout << "Introduzca la anchura del prisma: ";
  cin >> width;

  cout << "Introduzca la altura del prisma: ";
  cin >> height;

  // Calcular el área de la base
  double base_area = length * width;

  // Calcular el volumen del prisma
  volume = base_area * height;

  // Imprimir el volumen del prisma
  cout << "El volumen del prisma es: " << volume << endl;

  return 0;
}






