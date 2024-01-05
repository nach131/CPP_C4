/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/05 14:22:02 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{

	ClapTrap a("Goku");
	ClapTrap b(a);
	ClapTrap c;
	// c = b;
	a.takeDamage(12);
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.attack("Vegeta");
	a.beRepaired(10);

	a.print();

	return 0;
}
