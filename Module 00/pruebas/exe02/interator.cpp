#include <iostream>
#include <vector>

int main()
{
	// Definir dos vectores
	int arrA[] = {1, 2, 3, 4, 5};
	char arrB[] = {'a', 'b', 'c', 'd', 'e'};

	// Inicializar los vectores con los arreglos
	std::vector<int> vectorA(arrA, arrA + sizeof(arrA) / sizeof(arrA[0]));
	std::vector<char> vectorB(arrB, arrB + sizeof(arrB) / sizeof(arrB[0]));

	// Definir un par de iteradores
	typedef std::pair<std::vector<int>::iterator, std::vector<char>::iterator> pair_of_iterators;

	// Inicializar los iteradores con los comienzos de los vectores
	pair_of_iterators iterators(vectorA.begin(), vectorB.begin());

	// Iterar simultáneamente sobre ambos vectores usando el par de iteradores
	while (iterators.first != vectorA.end() && iterators.second != vectorB.end())
	{
		// Acceder a los elementos de ambos vectores usando los iteradores del par
		std::cout << "Elemento de vectorA: " << *iterators.first << ", Elemento de vectorB: " << *iterators.second << std::endl;

		// Mover los iteradores al siguiente elemento
		++iterators.first;
		++iterators.second;
	}

	return 0;
}
