/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/06 01:07:14 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	{
		// ClapTrap a("Goku");
		// ScavTrap Sa("Vegeta");
		// Sa.guardGate();
		// FragTrap Fa("Goku");

		// a.print();
		// Sa.print();
	}
	{
		FragTrap ash("Ash");
		FragTrap ash2(ash);

		ash.attack("the air");
		ash.takeDamage(10);
		ash.beRepaired(10);
		ash.highFivesGuys();
	}
	{
		ScavTrap s1("Goku");
		FragTrap f1("Vegeta");
		FragTrap f2;

		s1.guardGate();
		s1.attack("Kamehameha");
		s1.beRepaired(40);

		f1.attack("Ki Blast");
		f1.attack("Kiai");
		f1.takeDamage(50);
		f2 = f1;
		f2.beRepaired(10);
		f1.takeDamage(50);
		f2.beRepaired(10);
		f2.beRepaired(200);
		f2.takeDamage(120);
		f2.takeDamage(10);
		f2.takeDamage(10);
		f2.beRepaired(10);
		f2.highFivesGuys();
		f2.takeDamage(220);
		f2.highFivesGuys();
	}

	return 0;
}
