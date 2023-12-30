#include <iostream>

void NumForThree(int num, int &output)
{
	output = num * 3;
}

int main()
{
	int MyNumber = 7;

	std::cout << "Ori: " << MyNumber << std::endl;

	NumForThree(300, MyNumber);

	std::cout << "Res: " << MyNumber << std::endl;

	return 0;
}

// Ori: 7
// Res: 900