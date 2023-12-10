#include <iostream>

int getRes(int a, int b)
{
	return a * b;
}

std::string getRes(std::string a, std::string b)
{
	return a + " " + b;
}

int main(void)
{
	int number;
	std::string name;

	number = getRes(3, 5);
	name = getRes("Pedro", "Picapiedra");

	std::cout << "Number: " << number << std::endl;
	std::cout << "String: " << name << std::endl;

	return 0;
}

// Number: 15
// String: Pedro Picapiedra