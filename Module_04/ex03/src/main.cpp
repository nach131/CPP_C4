/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:20:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/10 16:31:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main(void)
{
	{
		ICharacter *me = new Character("me");
		std::cout << me->getName() << std::endl;
		AMateria *Ma;
		AMateria *Me;
		Ma = new Ice();
		Me = new Ice();

		std::cout << "Here" << std::endl;
		me->unequip(0);
		std::cout << "Here" << std::endl;
		me->print();

		me->equip(Ma);
		me->equip(Me);
		me->print();
		me->unequip(0);
		delete me;

		// delete Ma;
		// std::cout << me._inventory[0]->getType() << std::endl;
	}
	{
		// AMateria *Ma;
		// Ma = new Ice();
		// std::cout << Ma->getType() << std::endl;
		// delete Ma;

		// // clone
		// Ice iceObj;
		// AMateria *cloneObj = iceObj.clone();
		// std::cout << "Clone type: " << cloneObj->getType() << std::endl;
	}
	{
		// IMateriaSource *src = new MateriaSource();
		// src->learnMateria(new Ice());
		// src->learnMateria(new Cure());
		// ICharacter *me = new Character("me");
		// AMateria *tmp;
		// tmp = src->createMateria("ice");
		// me->equip(tmp);
		// tmp = src->createMateria("cure");
		// me->equip(tmp);
		// ICharacter *bob = new Character("bob");
		// me->use(0, *bob);
		// me->use(1, *bob);
		// delete bob;
		// delete me;
		// delete src;
	}

	return 0;
}
