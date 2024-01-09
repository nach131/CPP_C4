#include <iostream> // Agrega esta línea

#define ANIMAL_C "\x1B[36m"
#define GREEN "\x1B[32m"
#define CYAN "\x1B[36m"
#define RED "\x1B[31m"
#define YELLOW "\x1B[33m"
#define RESET "\x1B[0m"

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &);
	virtual ~Animal();
	Animal &operator=(const Animal &);
	virtual void makeSound() const = 0;

	std::string getType() const;
};

Animal::Animal() : _type("")
{
	std::cout << ANIMAL_C << "[Animal]" << GREEN << " - Default constructor called without parameter" << RESET << std::endl;
}

Animal::Animal(const Animal &tmp)
{
	std::cout << ANIMAL_C << "[Animal]" << CYAN << " - Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

Animal::~Animal() { std::cout << ANIMAL_C << "[Animal]" << RED << " - Destructor called" << RESET << std::endl; }

Animal &Animal::operator=(const Animal &tmp)
{
	std::cout << ANIMAL_C << "[Animal]" << YELLOW << " - Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_type = tmp._type;
	}
	return *this;
}

std::string Animal::getType() const { return (_type); }

int main()
{
	Animal A;
	return 0;
}
