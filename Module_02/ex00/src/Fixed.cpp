/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:28:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/30 17:09:36 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors_ft.hpp"

Fixed::Fixed() : _num(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	_num = int(rhs._num);
}

Fixed Fixed::operator=(const Fixed &rhs)
{
	std::cout << YELLOW << "Assignation operator called" << RESET << std::endl;
	if (this != &rhs)
		_num = rhs._num;
	return *this;
}

Fixed::~Fixed() { std::cout << RED << "Destructor called" << RESET << std::endl; }

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
