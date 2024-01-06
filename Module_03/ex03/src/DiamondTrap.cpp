/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:54:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/06 22:52:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "Colors_ft.hpp"

DiamondTrap::DiamondTrap()
{
	_hit = FragTrap::_hit;
	_energy = ScavTrap::_energy;
	_attack_damage = FragTrap::_attack_damage;

	std::cout << DIAM << "DiamondTrap:" << GREEN << " Default constructor called without parameter" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << DIAM << "DiamondTrap:" << GREEN << " " << _name << " - Default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &tmp)
{
	std::cout << DIAM << "DiamondTrap:" << CYAN << " Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

DiamondTrap::~DiamondTrap() { std::cout << DIAM << "DiamondTrap:" << RED << " " << _name << " - Destructor called" << RESET << std::endl; }

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &tmp)
{
	std::cout << DIAM << "DiamondTrap:" << YELLOW << " Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		ClapTrap::_name = tmp._name + "_clap_name";
		_name = tmp._name;
		_hit = tmp.FragTrap::_hit;
		_energy = tmp.ScavTrap::_energy;
		_attack_damage = tmp.FragTrap::_attack_damage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}
