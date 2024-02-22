#include <iostream>

using namespace std;

//Funcion para calular el volumen de un cubo
//


double calcularVolumenCubo(double lado) {
	return lado * lado * lado ;

}


int main()   {

	 double lado;

    cout << "Ingrese la longitud del lado del cubo: ";
    cin >> lado;

    // Verificar si el lado es válido
    if (lado <= 0) {
        cout << "El lado del cubo debe ser un número positivo." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Calcular el volumen del cubo
    double volumen = calcularVolumenCubo(lado);

    // Mostrar el resultado
    cout << "El volumen del cubo es: " << volumen << endl;

    return 0; // Salir del programa con éxito


}
