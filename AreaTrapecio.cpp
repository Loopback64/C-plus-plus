#include<iostream>
using namespace std;

int main() {
    // Declaración de variables
    float baseMayor, baseMenor, altura, area;

    // Solicitar al usuario que ingrese la longitud de la base mayor del trapecio
    cout << "Ingrese la longitud de la base mayor del trapecio: ";
    cin >> baseMayor;

    // Solicitar al usuario que ingrese la longitud de la base menor del trapecio
    cout << "Ingrese la longitud de la base menor del trapecio: ";
    cin >> baseMenor;

    // Solicitar al usuario que ingrese la altura del trapecio
    cout << "Ingrese la altura del trapecio: ";
    cin >> altura;

    // Calcular el área del trapecio
    area = ((baseMayor + baseMenor) * altura) / 2;

    // Mostrar el resultado
    cout << "El área del trapecio es : " << area << endl;

    return 0;
}

