/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:28:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/31 14:54:19 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors_ft.hpp"

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

Fixed::~Fixed() { std::cout << RED << "Destructor called" << RESET << std::endl; }

Fixed &Fixed::operator=(const Fixed &tmp)
{
	std::cout << YELLOW << "Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
		_num = tmp._num;
	return *this;
}

int Fixed::getRawBits() const { return _num; }

void Fixed::setRawBits(int const num)
{
	std::cout << MAGENTA << "setRawBits member function called" << RESET << std::endl;
	_num = num;
}

float Fixed::toFloat() const { return static_cast<float>(_num) / (1 << _bits); }

int Fixed::toInt() const { return _num >> _bits; }

std::ostream &operator<<(std::ostream &out, Fixed const &tmp) { return out << tmp.toFloat(); }
