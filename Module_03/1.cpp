#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	unsigned int _hit;
	unsigned int _energy;
	unsigned int _attack;

public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &);

	void print() const;
};

ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructor" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructor" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &tmp)
{
	std::cout << "Constructor copia" << std::endl;
	*this = tmp;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tmp)
{
	std::cout << "Operador =" << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		_hit = tmp._hit;
		_energy = tmp._energy;
		_attack = tmp._attack;
	}
	return *this;
}

void ClapTrap::print() const
{

	std::cout << "Name: " << _name << std::endl;
	std::cout << "hit: " << _hit << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack: " << _attack << std::endl;
}

int main()
{
	ClapTrap a("Goku");
	ClapTrap b;
	b = a;

	b.print();
}