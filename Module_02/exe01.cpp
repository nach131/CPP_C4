#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define CYAN "\033[0;36m"
#define RESET "\x1B[0m"
#define ORANGE "\033[1;31m"
#define MAGENTA "\033[1;35m"
#define YELLOW "\033[1;33m"

class Fixed
{
private:
	int _num;
	static const int _bits = 8;
#include <iostream>

	class Fixed
	{
	private:
		int _num;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &);
		~Fixed();
		Fixed &operator=(const Fixed &);

		int getRawBits() const;
		void setRawBits(int const);
	};

	Fixed::Fixed() : _num(0) { std::cout << "Default constructor called" << std::endl; }

	Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

	Fixed::Fixed(const Fixed &tmp)
	{
		std::cout << "Copy constructor called" << std::endl;
		_num = tmp.getRawBits();
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

public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
	~Fixed();

	Fixed &operator=(const Fixed &); // Corregido para devolver una referencia
	// No es necesario declarar operator<< como amigo

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

Fixed::Fixed(const float num) : _num(static_cast<int>(roundf(num * (1 << _bits))))
{
	std::cout << GREEN << "Float constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &tmp)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	_num = tmp._num;
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << YELLOW << "Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
		_num = tmp._num;
	return *this; // Devolver una referencia
}

int Fixed::getRawBits() const
{
	std::cout << ORANGE << "getRawBits member function called" << RESET << std::endl;
	return _num;
}

void Fixed::setRawBits(int const num)
{
	std::cout << MAGENTA << "setRawBits member function called" << RESET << std::endl;
	_num = num;
}

float Fixed::toFloat() const
{
	return static_cast<float>(_num) / (1 << _bits); // Utilizando static_cast
}

// No es necesario declarar operator<< como amigo
std::ostream &operator<<(std::ostream &out, const Fixed &tmp)
{
	return out << tmp.toFloat();
}

int Fixed::toInt() const
{
	return _num >> _bits;
}

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}
