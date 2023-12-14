/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:32:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/14 19:05:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) { _name = name; }

Zombie::~Zombie() { std::cout << _name << " destroyed." << std::endl; }

void Zombie::announce() { std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie *newZombie(std::string name) { return new Zombie(name); }

void randomChump(std::string name)
{
	Zombie tmp(name);
	tmp.announce();
}
