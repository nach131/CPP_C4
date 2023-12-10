#include <iostream>

int main()
{

	std::string names[5] = {"Pedro", "Pablo", "Bilma", "Bulma", "Goku"};

	for (std::string name : names)
		std::cout << name << std::endl;
}
