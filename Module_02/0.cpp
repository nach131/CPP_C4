#include <iostream>

class Fixed
{
private:
	int _num;

public:
	Fixed();
	Fixed(const Fixed &);
	Fixed operator=(const Fixed &);
	~Fixed();
	int const getRawBits();
	void setRawBits(int const);
};

Fixed::Fixed() : _num(0){};
Fixed::Fixed(const Fixed &tmp) { _num = tmp._num; };
Fixed::~Fixed() { std::cout << "Destruido" << std::endl; }

Fixed Fixed::operator=(const Fixed &tmp)
{
	if (this != &tmp)
		_num = tmp._num;
	return *this;
};

int const Fixed::getRawBits() { return _num; }
void Fixed::setRawBits(int num) { _num = num; }

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed e;
	a.setRawBits(12);

	e = a;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << e.getRawBits() << std::endl;

	return 0;
}