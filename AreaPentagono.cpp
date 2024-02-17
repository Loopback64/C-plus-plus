#include <iostream>
#include <cmath> // Necesario para la función sqrt()

using namespace std;

double calcularAreaPentagono(double longitudLado, double apotema) {
    return (5 * longitudLado * apotema) / 2;
}

int main() {
    double longitudLado, apotema;

    // Solicitar al usuario que ingrese la longitud de un lado y el apotema
    cout << "Ingrese la longitud de un lado del pentagono: ";
    cin >> longitudLado;

    cout << "Ingrese el apotema del pentagono: ";
    cin >> apotema;

    // Calcular el área del pentágono usando la función calcularAreaPentagono()
    double area = calcularAreaPentagono(longitudLado, apotema);

    // Mostrar el área calculada
    cout << "El area del pentagono es: " << area << endl;

    return 0;
}

