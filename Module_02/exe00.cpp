#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);

	int getRawBits() const;
	void setRawBits(int const);
};

Fixed::Fixed() : _num(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &tmp)
{
	std::cout << "Copy constructor called" << std::endl;
	_num = tmp;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _num;
}

Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &tmp)
		_num = tmp.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw) { num = raw; }

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = a;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
