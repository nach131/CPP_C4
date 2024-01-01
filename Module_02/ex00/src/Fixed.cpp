/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:28:56 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/01 13:09:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Colors_ft.hpp"

Fixed::Fixed() : _num(0) { std::cout << GREEN << "Default constructor called" << RESET << std::endl; }

Fixed::~Fixed() { std::cout << RED << "Destructor called" << RESET << std::endl; }

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	_num = rhs.getRawBits();
}

int Fixed::getRawBits() const
{
	std::cout << ORANGE << "getRawBits member function called" << RESET << std::endl;
	return _num;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << YELLOW << "Assignation operator called" << RESET << std::endl;
	if (this != &rhs)
		_num = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw) { _num = raw; }
