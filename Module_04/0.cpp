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
	std::string getType() const;
	virtual void makeSound() const;
};

Animal::Animal() {}
Animal::Animal(const Animal &tmp)
{
	*this = tmp;
}
Animal::~Animal() {}

Animal &Animal::operator=(const Animal &tmp)
{
	if (this != &tmp)
	{
		_type = tmp._type;
	}
	return *this;
}

std::string Animal::getType() const { return _type; }
void Animal::makeSound() const { std::cout << "Nada" << std::endl; }

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	void makeSound() const;
};

Cat::Cat() { Animal::_type = "Cat"; }
Cat::~Cat() {}

void Cat::makeSound() const { std::cout << "Miaaau" << std::endl; }

int main()
{
	const Animal *A = new Animal();
	const Animal *cat = new Cat();

	std::cout << "Animal: " << A->getType() << std::endl;
	std::cout << "Cat: " << cat->getType() << std::endl;

	A->makeSound();
	cat->makeSound();

	delete A;
	delete cat;
	return 0;
}