/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:26:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/09 20:45:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "Colors_ft.hpp"

Ice::Ice()
{
	AMateria::_type = "ice";
	std::cout << ICE << "[Ice]" << GREEN << "       - Constructor" << RESET << std::endl;
}

Ice::Ice(const Ice &tmp)
{
	std::cout << ICE << "[Ice]" << CYAN << "        - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

Ice::~Ice()
{
	std::cout << ICE << "[Ice]" << RED << "       - Destructor" << RESET << std::endl;
}

Ice &Ice::operator=(const Ice &tmp)
{
	std::cout << ICE << "[Ice]" << YELLOW << "        - Assignation operator" << RESET << std::endl;
	if (this != &tmp)
	{
		this->_type = tmp._type;
	}
	return *this;
}

AMateria *Ice::clone() const
{
	Ice *tmp = new Ice(*this);
	return tmp;
}
