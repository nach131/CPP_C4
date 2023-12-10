#include <iostream>
#include <array>

int main()
{
	std::array<std::string, 5> myStringArray; // Crear un array de strings con tamaño fijo 5

	// Inicializar el array y mostrar cada elemento
	for (int i = 0; i < myStringArray.size(); i++)
	{
		myStringArray[i] = "Elemento numero: " + std::to_string(i);
		std::cout << myStringArray[i] << std::endl;
	}

	std::cout << "Tamaño de la array es: " << myStringArray.size() << std::endl;

	return 0;
}
