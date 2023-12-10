#include <iostream>

void ModificarStr(std::string &name)
{
	name += " Barcelona";
}

int main(void)
{
	std::string name = "42";

	std::cout << "Original str: " << name << std::endl;

	ModificarStr(name);
	std::cout << "Modificado str: " << name << std::endl;
}