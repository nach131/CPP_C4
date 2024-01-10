#include <iostream>

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(const std::string &type);
	virtual ~AMateria();

	std::string const &getType() const; // Returns the materia type
};

AMateria::AMateria() : _type("")
{
	std::cout << AMATERIA << "[AMateria]" << GREEN << "  - Constructor without parameter" << RESET << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << AMATERIA << "[AMateria]" << GREEN << "  - Constructor [ type ]" << RESET << std::endl;
}

AMateria::~AMateria() { std::cout << AMATERIA << "[AMateria]" << RED << "  - Destructor" << RESET << std::endl; }

std::string const &AMateria::getType() const { return _type; }

class Ice : public AMateria
{
protected:
public:
	Ice();
	Ice(const Ice &);
	~Ice();
};

Ice::Ice()
{
	AMateria::_type = "ice";
	std::cout << ICE << "[Ice]" << GREEN << "       - Constructor" << RESET << std::endl;
}

Ice::Ice(const Ice &tmp)
{
	std::cout << ICE << "[Ice]" << CYAN << "        - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

Ice::~Ice()
{
	std::cout << ICE << "[Ice]" << RED << "       - Destructor" << RESET << std::endl;
}

class ICharacter
{
public:
	virtual ~ICharacter(){};
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
};

#define IMAX 4

class Character : public ICharacter
{

private:
	std::string _name;
	AMateria *_inventory[IMAX];

public:
	Character();
	Character(const std::string &);

	~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	// void use(int idx, ICharacter &target);
};

Character::Character() : _name("")
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor without parameter" << RESET << std::endl;
	for (size_t i = 0; i < IMAX; i++)
		this->_inventory[i] = new Ice();
}