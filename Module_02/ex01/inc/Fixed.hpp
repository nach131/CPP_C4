/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:20:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/31 14:23:32 by nmota-bu         ###   ########.fr       */
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
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
	~Fixed();

	Fixed &operator=(const Fixed &);

	int getRawBits() const;
	void setRawBits(int const);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
