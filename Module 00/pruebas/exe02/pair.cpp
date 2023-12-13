template <class T1, class T2>
struct pair
{
	T1 first;
	T2 second;

	pair() : first(T1()), second(T2()) {}
	pair(const T1 &x, const T2 &y) : first(x), second(y) {}
};

#include <iostream>

int main()
{
	// Crear un par de enteros
	std::pair<int, int> coordenadas(3, 4);

	// Mostrar los valores de first y second
	std::cout << "Coordenadas: (" << coordenadas.first << ", " << coordenadas.second << ")" << std::endl;

	// Utilizar std::make_pair para crear un par de caracteres
	std::pair<char, char> letras = std::make_pair('A', 'B');

	// Mostrar los valores de first y second del segundo par
	std::cout << "Letras: (" << letras.first << ", " << letras.second << ")" << std::endl;

	return 0;
}
