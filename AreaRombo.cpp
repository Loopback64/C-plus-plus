#include <iostream>
using namespace std;

int main() {
    double diagonal1, diagonal2;

    // Solicitar al usuario que ingrese las longitudes de las diagonales
    cout << "Ingresa la longitud de la primera diagonal: ";
    cin >> diagonal1;
    cout << "Ingresa la longitud de la segunda diagonal: ";
    cin >> diagonal2;

    // Calcular el área del rombo
    double area = (diagonal1 * diagonal2) / 2;

    // Mostrar el resultado
    cout << "El área del rombo es: " << area << endl;

    return 0;
}
