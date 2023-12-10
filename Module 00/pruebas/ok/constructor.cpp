#include <iostream>

class MiClase
{
public:
	// Constructor por defecto
	MiClase()
	{																		   // [!code highlight]
		std::cout << "Se ha llamado al constructor por defecto." << std::endl; // [!code highlight]
	}																		   // [!code highlight]

	// Constructor con parámetros
	MiClase(std::string name)
	{
		std::cout << "El nombre es " << name << std::endl;
	}
	MiClase(int x, int y)
	{																									 // [!code highlight]
		std::cout << "Se ha llamado al constructor con parámetros. x=" << x << ", y=" << y << std::endl; // [!code highlight]
	}																									 // [!code highlight]
};

int main()
{
	// Crear objetos y llamar a los constructores
	MiClase objeto1;		 // Llama al constructor por defecto
	MiClase objeto2(10, 20); // Llama al constructor con parámetros
	MiClase objeto3("OBJETO 3");

	return 0;
}
