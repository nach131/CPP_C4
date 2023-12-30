#include <iostream>
#include <array>

int main(void)
{
	std::array<int, 10> myIntArray;

	for (int i = 0; i < myIntArray.size(); i++)
	{
		myIntArray[i] = i * 2;
		std::cout << myIntArray[i] << std::endl;
	}

	std::cout << "Tamaño de la array es: " << myIntArray.size() << std::endl;

	return 0;
}

// int main(void)
// {
// 	std::array<int, 5> myIntArray = {10, 20, 30, 40, 50};

// 	for (int a : myIntArray)
// 	{
// 		std::cout << a << std::endl;
// 	}
// 	std::cout << "Tamaño de la array es: " << myIntArray.size() << std::endl;

// 	return 0;
// }

//  g++ -std=c++11  array_class.cpp && ./a.out