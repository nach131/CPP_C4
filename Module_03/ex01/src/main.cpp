/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/05 20:30:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap a("Goku");
	// ClapTrap b(a);
	// ClapTrap c;
	ScavTrap Sa("Vegeta");
	Sa.guardGate();
	// c = b;
	// a.takeDamage(12);
	// a.attack("Vegeta");
	// a.beRepaired(10);
	// ScavTrap Sb(Sa);
	// ScavTrap Sc;
	// Sc = Sa;

	a.print();
	Sa.print();

	return 0;
}
