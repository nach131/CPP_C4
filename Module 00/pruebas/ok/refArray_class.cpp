#include <iostream>
#include <array>

// Función que suma 1 a todos los elementos del array
void MultiplicarDosArray(std::array<int, 10> &TheArray)
{
	for (int &item : TheArray)
		item *= 2;
}

int main()
{
	std::array<int, 10> myArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::cout << "Array original: ";
	for (int item : myArray)
		std::cout << item << " ";
	std::cout << std::endl;

	MultiplicarDosArray(myArray);

	std::cout << "Array modificado: ";
	for (int item : myArray)
		std::cout << item << " ";
	std::cout << std::endl;

	return 0;
}
