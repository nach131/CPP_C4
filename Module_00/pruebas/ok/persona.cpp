#include <iostream>

class Person {

	public:
		std::string name;
		int age;

		void NewName(std::string newName)
		{
			name = newName;
		}
		void NewAge(int newAge)
		{
			age = newAge;
		}
		void ShowInfo()
		{
			std::cout << "Nombre: " << name << "\nEdad: " << age << std::endl;
		}
};

int main(void)
{
	Person persona1;

	persona1.NewName("Pedro");
	persona1.NewAge(42);

	std::cout << "Informacion de la perosna 1" << std::endl;
	persona1.ShowInfo();

	return 0;
}
