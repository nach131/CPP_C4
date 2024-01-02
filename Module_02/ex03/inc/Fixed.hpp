/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:20:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 16:31:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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
	Fixed(const int);
	Fixed(const float);

	// Asignacion
	Fixed &operator=(const Fixed &);

	// Comparacion
	bool operator>(const Fixed &) const;
	bool operator<(const Fixed &) const;
	bool operator>=(const Fixed &) const;
	bool operator<=(const Fixed &) const;
	bool operator==(const Fixed &) const;
	bool operator!=(const Fixed &) const;

	// Aritmeticos
	Fixed operator+(const Fixed &) const;
	Fixed operator-(const Fixed &) const;
	Fixed operator*(const Fixed &) const;
	Fixed operator/(const Fixed &) const;

	// Prefijo
	Fixed &operator++();
	Fixed &operator--();
	// Sufijo
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits() const;
	void setRawBits(int const);
	float toFloat() const;
	int toInt() const;
	static Fixed &max(Fixed &, Fixed &);
	static const Fixed &max(const Fixed &, const Fixed &);
	static Fixed &min(Fixed &, Fixed &);
	static const Fixed &min(const Fixed &, const Fixed &);
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
