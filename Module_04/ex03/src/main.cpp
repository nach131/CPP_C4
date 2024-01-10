/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:20:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/10 23:01:16 by nmota-bu         ###   ########.fr       */
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

		AMateria *M[5];
		for (size_t i = 0; i < 5; i++)
			M[i] = new Ice();

		me->unequip(0);
		me->print();

		me->equip(M[0]);
		me->equip(M[1]);
		me->equip(M[2]);
		me->equip(M[3]);
		me->equip(M[4]);
		me->print();
		me->unequip(0);
		me->unequip(2);

		me->print();
		me->equip(M[4]);
		me->equip(M[3]);

		std::cout << "----" << std::endl;

		me->print();
		delete me;
		delete M[0];
		delete M[1];
		delete M[2];
		delete M[3];
		delete M[4];
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
