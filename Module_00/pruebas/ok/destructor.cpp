#include <iostream>

class MiClase
{
public:
	// Constructor
	MiClase()
	{
		std::cout << "Se ha llamado al constructor." << std::endl;
	}

	// Destructor
	~MiClase()
	{
		std::cout << "Se ha llamado al destructor." << std::endl;
	}
};

int main()
{
	// Crear objeto y llamar al constructor
	MiClase objeto;

	// El destructor se llamará automáticamente cuando el objeto salga del ámbito
	return 0;
}
