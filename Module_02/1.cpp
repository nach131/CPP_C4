#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &);
	Fixed operator=(const Fixed &);
};

Fixed::Fixed() : _num(0)
{
	std::cout << "Constr: " << _num << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor" << std::endl;
}

Fixed Fixed::operator=(const Fixed &tmp)
{
	if (this != &tmp)
		_num = tmp._num;
	std::cout << "Operador copia: " << _num << std::endl;
	return *this;
}

Fixed::Fixed(Fixed const &tmp)
{
	_num = tmp._num;
	std::cout << "Copia : " << _num << std::endl;
}

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = a;
}