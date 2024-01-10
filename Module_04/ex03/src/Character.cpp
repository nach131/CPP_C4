/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:36:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/10 23:18:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colors_ft.hpp"
#include "Ice.hpp"

Character::Character() : _name(""), _idxI(0)
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor without parameter" << RESET << std::endl;
}

Character::Character(const std::string &name) : _name(name), _idxI(0)
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor [ name ]" << RESET << std::endl;
}

Character::Character(const Character &tmp)
{
	std::cout << CHARA << "[Character]" << CYAN << " - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

Character::~Character()
{
	std::cout << CHARA << "[Character]" << RED << " - Destructor" << RESET << std::endl;
}

Character &Character::operator=(const Character &tmp)
{
	std::cout << CHARA << "[Character]" << YELLOW << " - Assignation operator" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		for (size_t i = 0; i < IMAX; i++)
			this->_inventory[i] = tmp._inventory[i];
		// this->_equip[i] = tmp._equip[i];
	}
	return *this;
}

Character Character::operator++()
{
	this->_idxI++;
	return *this;
}

std::string const &Character::getName() const { return _name; }

void Character::equip(AMateria *m)
{
	size_t i;
	for (i = 0; i < SIZE; i++)
	{
		if (this->_equip[i] == nullptr)
		{
			this->_equip[i] = m;
			std::cout << m->getType() << " has been saved in position: " << i << std::endl;
			break;
		}
	}
	if (i == SIZE)
		std::cout << ERROR << "[ Inventory is full, cannot equip: " << m->getType() << " ]" << RESET << std::endl;
}

void Character::dropEquip(int idx)
{
	this->_inventory[this->_idxI] = this->_equip[idx];
	this->_equip[idx] = nullptr;
	++(*this);
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > SIZE)
	{
		std::cout << MAIN << idx << " not in inventory" << RESET << std::endl;
		return;
	}
	if (this->_equip[idx] != nullptr)
		dropEquip(idx);
	else
		std::cout << ERROR << "[ position: " << idx << " is empty ]" << RESET << std::endl;
}

void Character::print() const
{
	std::cout << CYAN << "EQUIP" << RESET << std::endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_equip[i] != nullptr)
			std::cout << i << " : " << this->_equip[i]->getType() << std::endl;
	}
	std::cout << CYAN << "INVENTARY" << RESET << std::endl;
	for (size_t i = 0; i < IMAX; i++)
	{
		if (this->_inventory[i] != nullptr)
			std::cout << i << " : " << this->_inventory[i]->getType() << std::endl;
	}
}