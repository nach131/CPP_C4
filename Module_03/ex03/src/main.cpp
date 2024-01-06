/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/06 22:52:47 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{

	// ClapTrap a("Goku");
	// ScavTrap Sa("Vegeta");
	// FragTrap Fa("Picolo");
	DiamondTrap Db("Gohan");
	// DiamondTrap Da;
	DiamondTrap Da(Db);

	// Da = Db;

	// Sa.guardGate();
	Da.whoAmI();
	Db.whoAmI();

	Da.print();
	Db.print();
	// a.print();
	// Sa.print();
	// Fa.print();

	return 0;
}
