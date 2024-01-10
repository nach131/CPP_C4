/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:36:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/10 14:17:40 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colors_ft.hpp"
#include "Ice.hpp"

Character::Character() : _name("")
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor without parameter" << RESET << std::endl;
	for (size_t i = 0; i < IMAX; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor [ name ]" << RESET << std::endl;
	for (size_t i = 0; i < IMAX; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const Character &tmp)
{
	std::cout << CHARA << "[Character]" << CYAN << " - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

Character::~Character()
{
	std::cout << CHARA << "[Character]" << RED << " - Destructor" << RESET << std::endl;
	for (size_t i = 0; i < IMAX; i++)
	{
		std::cout << this->_inventory[i] << std::endl;
		if (this->_inventory[i] != nullptr)
			delete this->_inventory[i];
	}
}

Character &Character::operator=(const Character &tmp)
{
	std::cout << CHARA << "[Character]" << YELLOW << " - Assignation operator" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		for (size_t i = 0; i < IMAX; i++)
			this->_inventory[i] = tmp._inventory[i];
		// this->_inventory[i] = nullptr;
	}
	return *this;
}

std::string const &Character::getName() const { return _name; }

void Character::equip(AMateria *m)
{
	size_t i;
	for (i = 0; i < IMAX; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " has been saved in position: " << i << std::endl;
			break;
		}
	}
	if (i == IMAX)
		std::cout << ERROR << " Inventory is full, cannot equip: " << m->getType() << " " << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > IMAX)
	{
		std::cout << MAIN << idx << " not in inventory" << RESET << std::endl;
		return;
	}
	if (this->_inventory[idx] != nullptr)
	{
		std::cout << this->_inventory[idx]->getType() << ": has been deleted from inventory" << std::endl;
		// delete this->_inventory[idx];
		this->_inventory[idx] = nullptr;
	}
	else
		std::cout << ERROR << " position: " << idx << " is empty " << RESET << std::endl;
}

void Character::print() const
{

	for (size_t i = 0; i < IMAX; i++)
	{
		if (this->_inventory[i] != nullptr)
			std::cout << this->_inventory[i]->getType() << std::endl;
	}
}
