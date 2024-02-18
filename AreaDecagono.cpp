#include <iostream>
#include <cmath>

using namespace std;

double areaDecagono(double lado) {
    // Área de un decágono regular: (5/2) * lado^2 * tan(π/10)
    double area = (5.0 / 2.0) * pow(lado, 2) * tan(M_PI / 10.0);
    return area;
}

int main() {
    double lado;
    cout << "Ingrese la longitud del lado del decágono: ";
    cin >> lado;

    double area = areaDecagono(lado);
    cout << "El área del decágono es: " << area << endl;

    return 0;
}










