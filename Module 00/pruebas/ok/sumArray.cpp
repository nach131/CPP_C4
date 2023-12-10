#include <iostream>
#include <array>

int SumArray(std::array<int, 10> TheArray)
{
	int sum = 0;

	for (int item : TheArray)
		sum += item;
	return sum;
}

int main(void)
{
	std::array<int, 10> myArray = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	int sumArray = SumArray(myArray);
	std::cout << "La suma es: " << sumArray << std::endl;
}