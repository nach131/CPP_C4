/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:44:53 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 21:21:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Colors_ft.hpp"

Cure::Cure()
{
	AMateria::_type = "cure";
	std::cout << CURE << "[Cure]" << GREEN << "       - Constructor" << RESET << std::endl;
}

Cure::Cure(const Cure &tmp)
{
	std::cout << CURE << "[Cure]" << CYAN << "        - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

Cure::~Cure()
{
	std::cout << CURE << "[Cure]" << RED << "       - Destructor" << RESET << std::endl;
}

Cure &Cure::operator=(const Cure &tmp)
{
	std::cout << CURE << "[Cure]" << YELLOW << "        - Assignation operator" << RESET << std::endl;
	if (this != &tmp)
	{
		this->_type = tmp._type;
	}
	return *this;
}

AMateria *Cure::clone() const
{
	Cure *tmp = new Cure(*this);
	return tmp;
}

void Cure::use(ICharacter &target)
{
	(void)target;
	std::cout << "USE" << std::endl;
	// std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
