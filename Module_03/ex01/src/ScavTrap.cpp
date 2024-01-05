/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:11:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/05 20:32:30 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "Colors_ft.hpp"

ScavTrap::ScavTrap()
{
	std::cout << SCAV << "ScavTrap:" << GREEN << " Default constructor called without parameter" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << SCAV << "ScavTrap:" << GREEN << " Default constructor called" << RESET << std::endl;
	_hit = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::~ScavTrap() { std::cout << SCAV << "ScavTrap:" << RED << " Destructor called" << RESET << std::endl; }

ScavTrap::ScavTrap(const ScavTrap &tmp)
{
	std::cout << SCAV << "ScavTrap:" << CYAN << " Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &tmp)
{
	std::cout << SCAV << "ScavTrap:" << YELLOW << " Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		_hit = tmp._hit;
		_energy = tmp._energy;
		_attack_damage = tmp._attack_damage;
	}
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << SCAV << "ScavTrap:" << RESET << ORANGE << " is now in Gate keeper mode" << RESET << std::endl;
}
