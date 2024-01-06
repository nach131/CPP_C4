#define RESET "\x1B[0m"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[0;33m"
#define ORANGE "\033[1;31m"

#define OK "\x1B[44m\x1B[1;97m"

#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hit;
	unsigned int _energy;
	unsigned int _attack_damage;

public:
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	ClapTrap();
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void print() const;
};

ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack_damage(0)
{
	std::cout << GREEN << "[ClapTrap] - "
			  << "Constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack_damage(0)
{
	std::cout << GREEN "[ClapTrap] - "
			  << "Constructor called with name" << RESET << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &tmp)
{
	std::cout << CYAN "[ClapTrap] - "
			  << "Copy constructor called" << RESET << std::endl;

	*this = tmp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tmp)
{
	std::cout << YELLOW "[ClapTrap] - "
			  << "Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		_hit = tmp._hit;
		_energy = tmp._energy;
		_attack_damage = tmp._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << RED "[ClapTrap] - "
								  << "Destructor called" << RESET << std::endl; }

void ClapTrap::print() const
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Hit: " << _hit << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack_damage: " << _attack_damage << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << OK << "[Attack]" << RESET << std::endl;
	if (_hit <= 0 || _energy <= 0)
		std::cout << "No tienes suficientes puntos" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " point of damege!" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << OK << "[TakeDamage]" << RESET << std::endl;
	if (_energy < amount)
		_energy = 0;
	else
		_energy -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << OK << "[Be repaired]" << RESET << std::endl;
	if (_hit <= 0 || _energy <= 0)
		std::cout << "No tienes suficientes puntos" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " ClapTrap is being repaired" << std::endl;
		_hit += amount;
		_energy--;
	}
}

//=========================================================================

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap(std::string);
	ScavTrap(const ScavTrap &);
	~ScavTrap();
	void guardGate();
};

ScavTrap::ScavTrap()
{
	_hit = 100;
	_energy = 50;
	_attack_damage = 20;
	std::cout << GREEN << "[ScavTrap] - "
			  << "Constructor called" << RESET << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack_damage = 20;
	std::cout << GREEN "[ScavTrap] - "
			  << "Constructor called with name" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED "[ScavTrap] - "
			  << "Destructor called" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << ORANGE "[ScavTrap] - "
			  << "is now in Gate keeper mode" << RESET << std::endl;
}

//=========================================================================

int main()
{

	ClapTrap Cb("Cb");

	// Cb = Ca;
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.attack("Tomate");
	Cb.beRepaired(23);

	Cb.print();

	return 0;
}