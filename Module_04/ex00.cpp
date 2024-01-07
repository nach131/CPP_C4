#include <iostream>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &);
	virtual ~Animal();

	Animal &operator=(const Animal &);

	virtual void makeSound() const;
	std::string getType() const;
};

Animal::Animal() { std::cout << "[ Animal ] - Constructor" << std::endl; }

Animal::Animal(const Animal &tmp)
{
	std::cout << "[ Animal ] - copia" << std::endl;
	*this = tmp;
}

Animal::~Animal() { std::cout << "[ Animal ] - Destructor" << std::endl; }

Animal &Animal::operator=(const Animal &tmp)
{
	std::cout << "[ Animal ] - Operator" << std::endl;
	if (this != &tmp)
	{
		_type = tmp._type;
	}
	return *this;
}

void Animal::makeSound() const { std::cout << "[ Animal ] - No tiene sonido" << std::endl; }
std::string Animal::getType() const { return _type; }

//=========================================================================
class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &);
	~Cat();

	void makeSound() const;
};

Cat::Cat()
{
	std::cout << "[ Cat ] - Constructor" << std::endl;
	Animal::_type = "Cat";
}
Cat::Cat(const Cat &tmp)
{
	std::cout << "[ Cat ] - copia" << std::endl;
	*this = tmp;
}
Cat::~Cat() { std::cout << "[ Cat ] - Destructor" << std::endl; }
void Cat::makeSound() const { std::cout << "[ Cat ] - Miiaauuu" << std::endl; }

//=========================================================================

int main()
{
	{
		std::cout << "\t[ TEST 01 ]" << std::endl;
		const Animal *meta = new Animal();
		const Animal *i = new Cat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); // ¡salida del sonido del gato!
		meta->makeSound();
		delete i;
		delete meta;
	}
	{
		std::cout << "\t[ TEST 02 ]" << std::endl;
		const Animal *cat = new Cat();

		// Usar el constructor de copia
		const Cat *copyCat = new Cat(*static_cast<const Cat *>(cat));
		// Usar el operador de asignación
		Cat assignedCat;
		assignedCat = *static_cast<const Cat *>(cat);

		std::cout << cat->getType() << " " << std::endl;
		std::cout << copyCat->getType() << " " << std::endl;
		std::cout << assignedCat.getType() << " " << std::endl;

		delete cat;
		delete copyCat;
	}
	return 0;
}
