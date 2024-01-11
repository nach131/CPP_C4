/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:23:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 19:03:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Colors_ft.hpp"

MateriaSource::MateriaSource() : _idx(0)
{
	std::cout << MATE << "[MateriaSource]" << GREEN << " - Constructor without parameter" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &tmp)
{
	std::cout << MATE << "[MateriaSource]" << CYAN << " - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

MateriaSource::~MateriaSource()
{
	std::cout << MATE << "[MateriaSource]" << RED << " - Destructor" << RESET << std::endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &tmp)
{
	std::cout << MATE << "[MateriaSource]" << YELLOW << " - Assignation operator" << RESET << std::endl;
	if (this != &tmp)
	{
		for (size_t i = 0; i < SIZE; i++)
			this->_inventory[i] = tmp._inventory[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_idx < SIZE)
	{
		this->_inventory[this->_idx] = m;
		this->_idx++;
	}
	else
		std::cout << ERROR << " [ You cannot learn more than 4 ] " << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (!type.compare("ice"))
		return (new Ice());
	else if (!type.compare("cure"))
		return (new Cure());
	else
		return (NULL);
}
