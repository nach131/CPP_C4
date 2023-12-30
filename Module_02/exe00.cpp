#include <iostream>
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define CYAN "\033[0;36m"
#define RESET "\x1B[0m"
#define ORANGE "\033[1;31m"

class Fixed
{
private:
	int _num;
	static const int _bits = 8;

public:
	Fixed();
	Fixed(const Fixed &);
	Fixed operator=(const Fixed &);
	~Fixed();
	int getRawBits() const;
	// void setRawBits(int const raw);
};

Fixed::Fixed() : _num(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	_num = int(rhs._num);
}

Fixed Fixed::operator=(const Fixed &rhs)
{
	std::cout << YELLOW << "Assignation operator called" << RESET << std::endl;
	if (this != &rhs)
		_num = rhs._num;
	return *this;
}

Fixed::~Fixed() { std::cout << RED << "Destructor called" << RESET << std::endl; }

int Fixed::getRawBits() const
{
	std::cout << ORANGE << "getRawBits member function called" << RESET << std::endl;
	return _num;
}

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
