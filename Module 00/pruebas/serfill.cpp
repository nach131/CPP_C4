#include <iostream>
#include <iomanip> // Necesario para std::setfill y std::setw

int main()
{
	int numero = 42;

	// Imprimir el número con un ancho de 8 caracteres y relleno con ceros
	std::cout << "Número con relleno de ceros: " << std::setw(8) << std::setfill('0') << numero << std::endl;

	// Imprimir el número con un ancho de 8 caracteres y relleno con asteriscos
	std::cout << "Número con relleno de asteriscos: " << std::setw(8) << std::setfill('*') << numero << std::endl;

	return 0;
}

// Número con relleno de ceros: 00000042
// Número con relleno de asteriscos: ******42