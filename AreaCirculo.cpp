#include <iostream>
#include <cmath>

int main() {
    // Definir la constante pi
    const double pi = 3.14159265358979323846;

    // Solicitar al usuario que ingrese el radio del círculo
    std::cout << "Ingrese el radio del circulo: ";
    double radio;
    std::cin >> radio;

    // Calcular el área del círculo
    double area = pi * pow(radio, 2);

    // Mostrar el resultado
    std::cout << "El area del circulo es: " << area << std::endl;

    return 0;
}








