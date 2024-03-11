#include <iostream>

using namespace std;

int main() {
  double a = 2, b = 3, c = 1, x = 2;
  double derivada_f = derivada(a, b, c, x);

  cout << "La derivada de f(x) en x = 2 es: " << derivada_f << endl;

  return 0;
}

double derivada(double a, double b, double c, double x) {
  return 2 * a * x + b;
}

