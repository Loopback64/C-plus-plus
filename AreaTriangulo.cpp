#include <iostream>

int main() {

	// Declarar variables para la base y la altura
	double base, altura;
	double noticias;
		
	// Solicitar al usuario que ingrese la base
	std::cout << "Ingrese la longitud de la base del triangulo: ";
	std::cin >> base;
	
	// Solicitar al usuario que ingrese la altura
	std::cout << "Ingrese la altura del triangulo: ";
	std::cin >> altura;
	// Calcular el área del triángulo
	double area = 0.5 * base * altura;
	double noticias  = 0.15;	
	// Mostrar el resultado
	std::cout << "El area del triangulo es: " << area << std::endl;
		
	return 0;
	}
		
