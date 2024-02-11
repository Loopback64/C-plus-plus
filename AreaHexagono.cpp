#include <iostream>
#include <cmath>

using namespace std;

double calcularAreaHexagono(double lado) {
    return (3 * sqrt(3) * pow(lado, 2)) / 2;
}

int main() {
    double lado;
    
    cout << "Ingresa la longitud de un lado del hexágono: ";
    cin >> lado;
    
    if (lado <= 0) {
        cout << "La longitud del lado debe ser un número positivo." << endl;
        return 1;
    }
    
    double area = calcularAreaHexagono(lado);
    cout << "El área del hexágono es: " << area << endl;
    
    return 0;
}

