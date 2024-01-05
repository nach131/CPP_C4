/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:20:17 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/05 20:13:23 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hit;
	unsigned int _energy;
	unsigned int _attack_damage;
	void print_Ms();

public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void print() const;
};

#endif
