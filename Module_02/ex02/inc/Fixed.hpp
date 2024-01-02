/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:20:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 11:36:19 by nmota-bu         ###   ########.fr       */
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

	Fixed &operator=(const Fixed &);

	bool operator>(const Fixed &) const;
	bool operator<(const Fixed &) const;
	bool operator>=(const Fixed &) const;
	bool operator<=(const Fixed &) const;
	bool operator==(const Fixed &) const;
	bool operator!=(const Fixed &) const;

	int getRawBits() const;
	void setRawBits(int const);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
