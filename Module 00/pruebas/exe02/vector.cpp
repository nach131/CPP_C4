#include <iostream>
#include <vector>

// Crear un alias para std::vector<int>
typedef std::vector<int> Enteros; // [!code focus]

int main()
{
    Enteros miVector;

    miVector.push_back(11);
    miVector.push_back(131);
    miVector.push_back(42);

    // Mostrar los elementos del vector
    std::cout << "Elementos del vector: ";

    for (int i = 0; i < miVector.size(); i++)
    {
        std::cout << miVector[i] << ", ";
    }

    return 0;
}
