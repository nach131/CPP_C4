/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:41:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/06 01:03:06 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "Colors_ft.hpp"

FragTrap::FragTrap()
{
	std::cout << FRAG << "FragTrap:" << RESET << GREEN << " Default constructor called without parameter" << RESET << std::endl;
	_hit = 100;
	_energy = 50;
	_attack_damage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << FRAG << "FragTrap:" << RESET << GREEN << " Default constructor called" << RESET << std::endl;
	_hit = 100;
	_energy = 50;
	_attack_damage = 30;
}

FragTrap::~FragTrap() { std::cout << FRAG << "FragTrap:" << RESET << RED << " Destructor called" << RESET << std::endl; }

FragTrap::FragTrap(const FragTrap &tmp)
{
	std::cout << FRAG << "FragTrap:" << CYAN << " Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

FragTrap &FragTrap::operator=(const FragTrap &tmp)
{
	std::cout << FRAG << "FragTrap:" << YELLOW << " Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_name = tmp._name;
		_hit = tmp._hit;
		_energy = tmp._energy;
		_attack_damage = tmp._attack_damage;
	}
	return *this;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << OK << "[High fives]" << RESET << std::endl;
	std::cout << "High fives" << RESET << std::endl;
}
