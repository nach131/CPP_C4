/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:36:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/12 22:11:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colors_ft.hpp"

Character::Character() : _idxI(0)
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor without parameter" << RESET << std::endl;
	_name = "";

	for (int i = 0; i < IMAX; ++i)
		_inventory[i] = nullptr;

	for (int i = 0; i < SIZE; ++i)
		_equip[i] = nullptr;
}

Character::Character(const std::string &name) : _name(name), _idxI(0)
{
	std::cout << CHARA << "[Character]" << GREEN << " - Constructor [ " << _name << " ]" << RESET << std::endl;
	for (int i = 0; i < IMAX; ++i)
		_inventory[i] = nullptr;

	for (int i = 0; i < SIZE; ++i)
		_equip[i] = nullptr;
}

Character::Character(const Character &tmp)
{
	std::cout << CHARA << "[Character]" << CYAN << " - Copy constructor" << RESET << std::endl;
	*this = tmp;
}

Character::~Character()
{
	std::cout << CHARA << "[Character]" << RED << " - Destructor" << RESET << std::endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (this->_equip[i] != nullptr)
			delete this->_equip[i];
	}
	for (size_t i = 0; i < IMAX; i++)
	{
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
		_idxI = tmp._idxI;

		for (int i = 0; i < IMAX; ++i)
		{
			if (tmp._inventory[i])
				_inventory[i] = tmp._inventory[i]->clone();
			else
				_inventory[i] = nullptr;
		}
		for (int i = 0; i < SIZE; ++i)
		{
			if (tmp._equip[i])
				_equip[i] = tmp._equip[i]->clone();
			else
				_equip[i] = nullptr;
		}
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
			this->_equip[i] = m->clone();
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
	// this->_inventory[this->_idxI]->operator=(*this->_equip[idx]);
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
	{
		if (this->_idxI < IMAX)
			dropEquip(idx);
		else
			std::cout << ERROR << " [ Inventory is full, you can't drop equipment ] " << RESET << std::endl;
	}
	else
		std::cout << ERROR << "[ position: " << idx << " is empty ]" << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > SIZE)
	{
		std::cout << ERROR << idx << "[ not in inventory ]" << RESET << std::endl;
		return;
	}
	if (this->_equip[idx] != nullptr)
		this->_equip[idx]->use(target);
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
