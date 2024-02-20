

#include <iostream>
#include <cmath>

using namespace std;

double calcularAreaNonagono(double longitudLado) {
    const double pi = 3.14159265358979323846;
    double area = (9.0 / 4.0) * pow(longitudLado, 2) * (1 / tan(pi / 9));
    return area;
}

int main() {
    double longitudLado;
    cout << "Ingrese la longitud del lado del nonágono: ";
    cin >> longitudLado;

    double area = calcularAreaNonagono(longitudLado);
    cout << "El área del nonágono es: " << area << endl;

    return 0;
}






