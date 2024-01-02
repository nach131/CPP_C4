/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:28:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 16:45:27 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0) {}

Fixed::Fixed(const int num) : _num(num << _bits) {}

Fixed::Fixed(const float num) : _num(roundf(num * (1 << _bits))) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &tmp) { *this = tmp; }

// Comparacion
bool Fixed::operator>(const Fixed &tmp) const { return _num > tmp._num; }
bool Fixed::operator<(const Fixed &tmp) const { return _num < tmp._num; }
bool Fixed::operator>=(const Fixed &tmp) const { return _num >= tmp._num; }
bool Fixed::operator<=(const Fixed &tmp) const { return _num <= tmp._num; }
bool Fixed::operator==(const Fixed &tmp) const { return _num == tmp._num; }
bool Fixed::operator!=(const Fixed &tmp) const { return _num != tmp._num; }

// Asignacion
Fixed &Fixed::operator=(const Fixed &tmp)
{
	if (this != &tmp)
		_num = tmp._num;
	return *this;
}

// Aritmeticos
Fixed Fixed::operator+(const Fixed &tmp) const { return this->toFloat() + tmp.toFloat(); }
Fixed Fixed::operator-(const Fixed &tmp) const { return this->toFloat() - tmp.toFloat(); }
Fixed Fixed::operator*(const Fixed &tmp) const { return this->toFloat() * tmp.toFloat(); }
Fixed Fixed::operator/(const Fixed &tmp) const { return this->toFloat() / tmp.toFloat(); }

// Prefijo
Fixed &Fixed::operator++()
{
	_num++;
	return *this;
}
Fixed &Fixed::operator--()
{
	_num--;
	return *this;
}
// // Sufijo
Fixed Fixed::operator++(int)
{
	Fixed res = *this;
	++(*this);
	return res;
}
Fixed Fixed::operator--(int)
{
	Fixed res = *this;
	--(*this);
	return res;
}

int Fixed::getRawBits() const { return _num; }

void Fixed::setRawBits(int const num) { _num = num; }

float Fixed::toFloat() const { return (float)_num / (1 << _bits); }

int Fixed::toInt() const { return _num >> _bits; }

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &out, Fixed const &tmp) { return out << tmp.toFloat(); }
