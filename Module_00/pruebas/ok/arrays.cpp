#include <iostream>

int main()
{

	const int ARRAY_SIZE = 5;
	int myArray[ARRAY_SIZE];
	std::string names[ARRAY_SIZE] = {"Pedro", "Pablo", "Bilma", "Bulma", "Goku"};

	myArray[0] = 15;
	myArray[1] = 25;
	myArray[2] = 35;
	myArray[3] = 45;
	myArray[4] = 55;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << myArray[i] << std::endl;
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << names[i] << std::endl;
	}
	std::cout << "\nCon string name..." << std::endl;
	for (std::string name : names)
	{
		std::cout << name << std::endl;
	}
}