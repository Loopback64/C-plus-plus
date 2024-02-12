#include <iostream>
#include <cmath> // Incluir la biblioteca para funciones matemáticas, como sqrt

using namespace std;

int main() {
    // Definir la longitud del lado del octágono
    double longitud_del_lado;
    cout << "Ingrese la longitud del lado del octágono: ";
    cin >> longitud_del_lado;

    // Calcular el perímetro del octágono
    double perimetro = 8 * longitud_del_lado;

    // Calcular el apotema del octágono
    double apotema = longitud_del_lado / (2 * tan(M_PI / 8)); // M_PI es una constante que representa Pi

    // Calcular el área del octágono
    double area = 0.5 * apotema * perimetro;

    // Mostrar el resultado
    cout << "Perímetro del octágono: " << perimetro << endl;
    cout << "Área del octágono: " << area << endl;

    return 0;
}

