#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> IntVector;
	std::vector<std::string> StrVector(3);

	IntVector.push_back(10);
	IntVector.push_back(30);
	IntVector.push_back(30);

	std::cout << "IntVector size: " << IntVector.size() << std::endl;

	StrVector[0] = "Pedro";
	StrVector[1] = "Pablo";
	StrVector[2] = "Bilma";

	for (int val : IntVector)
	{
		std::cout << val << std::endl;
	}

	std::cout << "Front: " << StrVector.front() << std::endl;
	std::cout << "Back: " << StrVector.back() << std::endl;

	StrVector.pop_back(); // quita el ultimo
	StrVector.insert(StrVector.begin(), "Esto es nuevo");

	for (std::string name : StrVector)
	{
		std::cout << name << std::endl;
	}

	return 0;
}

// IntVector size: 3
// 10
// 30
// 30
// Front: Pedro
// Back: Bilma
// Esto es nuevo
// Pedro
// Pablo