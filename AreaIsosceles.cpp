#include <iostream>
#include <cmath> // Necesario para la función sqrt()

using namespace std;

int main() {
    double base, lado, altura, area;

    // Entrada de usuario: base y un lado del triángulo
    cout << "Ingrese la longitud de la base del triángulo: ";
    cin >> base;

    cout << "Ingrese la longitud de un lado del triángulo: ";
    cin >> lado;

    // Calcular la altura utilizando el teorema de Pitágoras
    altura = sqrt(pow(lado, 2) - pow(base / 2, 2));

    // Calcular el área del triángulo
    area = 0.5 * base * altura;

    // Mostrar el resultado
    cout << "El área del triángulo isósceles es: " << area << endl;

    return 0;
}

