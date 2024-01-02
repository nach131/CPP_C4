#include <iostream>
#include <cmath>

#define GREEN "\033[0;32m"
#define CYAN "\033[0;36m"
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"

#define RESET "\x1B[0m"

class Fixed
{
private:
	int _num;
	static const int _bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &);
	Fixed(const int);
	Fixed(const float);

	Fixed &operator*=(const Fixed &);

	Fixed operator*(const Fixed &) const;

	int getRawBits() const;
	void setRawBits(int const);
	float toFloat() const;
	int toInt() const;
};

Fixed::Fixed() : _num(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const int num) : _num(num << _bits)
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
}

Fixed::Fixed(const float num) : _num(roundf(num * (1 << _bits)))
{
	std::cout << GREEN << "Float constructor called" << RESET << std::endl;
}

Fixed::~Fixed() { std::cout << RED << "Destructor called" << RESET << std::endl; }

Fixed::Fixed(const Fixed &tmp)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

Fixed &Fixed::operator*=(const Fixed &other)
{
	_num *= other._num;
	return *this;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res = *this;
	res *= other;
	return res;
}

int Fixed::getRawBits() const { return _num; }

void Fixed::setRawBits(int const num)
{
	std::cout << MAGENTA << "setRawBits member function called" << RESET << std::endl;
	_num = num;
}

float Fixed::toFloat() const { return (float)_num / (1 << _bits); }

int Fixed::toInt() const { return _num >> _bits; }

std::ostream &operator<<(std::ostream &out, const Fixed &tmp)
{
	out << tmp.toFloat(); // Utilizar el método toFloat() para imprimir el valor
	return out;
}

int main()
{
	Fixed a(2);
	Fixed b(10);

	Fixed c = a * b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << "c is " << c << std::endl;

	return 0;
}