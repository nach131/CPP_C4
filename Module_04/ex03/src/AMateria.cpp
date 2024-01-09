/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:56:05 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/09 20:42:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Colors_ft.hpp"

AMateria::AMateria() : _type("")
{
	std::cout << AMATERIA << "[AMateria]" << GREEN << "  - Constructor without parameter" << RESET << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << AMATERIA << "[AMateria]" << GREEN << "  - Constructor [ type ]" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &tmp)
{
	std::cout << AMATERIA << "[AMateria]" << CYAN << "  - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

AMateria::~AMateria() { std::cout << AMATERIA << "[AMateria]" << RED << "  - Destructor" << RESET << std::endl; }

AMateria &AMateria::operator=(const AMateria &tmp)
{
	std::cout << AMATERIA << "[AMateria]" << YELLOW << "  - Assignation operator" << RESET << std::endl;
	if (this != &tmp)
	{
		_type = tmp._type;
	}
	return *this;
}

std::string const &AMateria::getType() const { return _type; }
