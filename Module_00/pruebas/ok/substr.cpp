#include <iostream>
#include <string>

int main()
{
	std::string miCadena = "42 Barcelona";

	// Imprimir "erase un."
	if (miCadena.length() >= 8)
		std::cout << miCadena.substr(0, 8) << "." << std::endl;
	else
		std::cout << "La cadena es demasiado corta." << std::endl;

	return 0;
}
