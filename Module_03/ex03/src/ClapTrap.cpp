/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 21:28:41 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/06 21:46:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors_ft.hpp"

ClapTrap::ClapTrap() : _hit(10), _energy(10), _attack_damage(0)
{
	std::cout << CLAP << "ClapTrap:" << GREEN << " Default constructor called without parameter" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack_damage(0)
{
	std::cout << CLAP << "ClapTrap:" << GREEN << " Default constructor called" << RESET << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << CLAP << "ClapTrap:" << RED << " Destructor called" << RESET << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &tmp)
{
	std::cout << CLAP << "ClapTrap:" << CYAN << " Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tmp)
{
	std::cout << CLAP << "ClapTrap:" << YELLOW << " Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		_hit = tmp._hit;
		_energy = tmp._energy;
		_attack_damage = tmp._attack_damage;
	}
	return *this;
}

void ClapTrap::print_Ms()
{
	if (_energy <= 0)
		std::cout << "You have no energy points left" << std::endl;
	else
		std::cout << "You have no hit points left" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << OK << "[Attack]" << RESET << std::endl;
	if (_hit <= 0 || _energy <= 0)
		print_Ms();
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " point of damege!" << std::endl;
		_energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << OK << "[takeDamage]" << RESET << std::endl;
	std::cout << "ClapTrap " << _name << " has been attacked has received " << amount << " point of damege!" << std::endl;

	if (_energy < amount)
		_energy = 0;
	else
		_energy -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << OK << "[Be repaired]" << RESET << std::endl;
	if (_hit <= 0 || _energy <= 0)
		print_Ms();
	else
	{
		std::cout << "ClapTrap " << _name << " ClapTrap is being repaired" << std::endl;
		_hit += amount;
		_energy--;
	}
}

//=========================================================================

void ClapTrap::print() const
{
	std::cout << GREEN << "name. : " << RESET << _name << std::endl;
	std::cout << GREEN << "hit   : " << RESET << _hit << std::endl;
	std::cout << GREEN << "energy: " << RESET << _energy << std::endl;
	std::cout << GREEN << "attack: " << RESET << _attack_damage << std::endl;
	std::cout << "__________" << std::endl;
}
