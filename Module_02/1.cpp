#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _bits = 8;

public:
	Fixed();
	Fixed(int);
	Fixed(float);
	~Fixed();
	Fixed(const Fixed &);

	Fixed &operator=(const Fixed &);

	int getRawBits() const;
	void setRawBits(int const);
	float toFloat() const;
	int toInt() const;
};

Fixed::Fixed() : _num(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::Fixed(int const num) : _num(num << _bits) { std::cout << "Int constructor called" << std::endl; }
Fixed::Fixed(float const num) : _num(roundf(num * (1 << _bits))) { std::cout << "Float constructor called" << std::endl; }
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &tmp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = tmp;
}

int Fixed::getRawBits() const
{

	std::cout << "getRawBits member function called" << std::endl;
	return _num;
}

void Fixed::setRawBits(int const raw) { _num = raw; }

Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &tmp)
		_num = tmp._num;
	return *this;
}

float Fixed::toFloat() const { return (float)_num / (1 << _bits); }
int Fixed::toInt() const { return _num >> _bits; }

std::ostream &operator<<(std::ostream &out, Fixed const &tmp) { return out << tmp.toFloat(); }

int main()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed d(b);

	a = Fixed(1234.4321f);

	std::cout << "b is " << a << std::endl;
	std::cout << "a is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "as is " << a.toInt() << " as integer" << std::endl;
	std::cout << "as is " << b.toInt() << " as integer" << std::endl;
	std::cout << "as is " << c.toInt() << " as integer" << std::endl;
	std::cout << "as is " << d.toInt() << " as integer" << std::endl;

	return 0;
}