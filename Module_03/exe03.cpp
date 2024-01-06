class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(std::string);
	DiamondTrap(const DiamondTrap &);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &);

	// void whoAmI();
};

DiamondTrap::DiamondTrap()
{
	_hit = FragTrap::_hit;
	_energy = ScavTrap::_energy;
	_attack_damage = FragTrap::_attack_damage;

	std::cout << DIAM << "DiamondTrap:" << GREEN << " Default constructor called without parameter" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << DIAM << "DiamondTrap:" << GREEN << " " << _name << " - Default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp)
{
	std::cout << DIAM << "DiamondTrap:" << CYAN << " Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

DiamondTrap::~DiamondTrap() { std::cout << DIAM << "DiamondTrap:" << RED << " " << _name << " - Destructor called" << RESET << std::endl; }

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &tmp)
{
	std::cout << DIAM << "DiamondTrap:" << YELLOW << " Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		_hit = tmp._hit;
		_energy = tmp._energy;
		_attack_damage = tmp._attack_damage;
	}
	return *this;
}
