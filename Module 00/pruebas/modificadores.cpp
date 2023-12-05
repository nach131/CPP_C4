#include <iostream>

class Person
{

public:
	std::string NamePublic;

	void ShowNamePublic()
	{
		std::cout << "Nombre publico " << NamePublic << std::endl;
	}
	void PutNames(const std::string &nameProt, const std::string &namePriv)
	{
		NameProtected = nameProt;
		NamePrivate = namePriv;
	}
	void ShowNames()
	{
		std::cout << "Nombre publico " << NamePublic << std::endl;
		std::cout << "Nombre proteguido " << NameProtected << std::endl;
		std::cout << "Nombre privado " << NamePrivate << std::endl;
	}

protected:
	std::string NameProtected;

private:
	std::string NamePrivate;
};

int main()
{
	Person perosona1;

	perosona1.NamePublic = "Pedro";
	perosona1.ShowNamePublic();

	// (no es posible desde fuera de la clase)
	// perosona1.NameProtected = "Pablo";
	// perosona1.NamePrivate = "Bilma";

	perosona1.PutNames("Pablo", "Bilma");
	perosona1.ShowNames();

	return 0;
}