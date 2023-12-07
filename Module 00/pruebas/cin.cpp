#include <iostream>

int main()
{
	// Declarar una variable para almacenar el número
	int numero;

	// Pedir al usuario que ingrese un número
	std::cout << "Ingrese un número entero: ";

	// Leer el número desde la entrada estándar (teclado)
	std::cin >> numero; // [!code focus]

	// Mostrar el número ingresado
	std::cout << "El número es: " << numero << std::endl;

	return 0;
}