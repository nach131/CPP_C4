/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:20:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 21:17:41 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{

	// {
	// 	ICharacter *me = new Character("me");
	// 	std::cout << me->getName() << std::endl;

	// 	AMateria *M[5];
	// 	for (size_t i = 0; i < 5; i++)
	// 		M[i] = new Ice();

	// 	me->unequip(0);
	// 	me->print();

	// 	for (size_t i = 0; i < 5; i++)
	// 		me->equip(M[i]);

	// 	me->print();
	// 	me->unequip(0);
	// 	me->unequip(2);

	// 	me->print();
	// 	me->equip(M[4]);
	// 	me->equip(M[3]);

	// 	std::cout << "----" << std::endl;

	// 	me->print();

	// 	const ICharacter *copyMe = new Character(*static_cast<const Character *>(me));

	// 	std::cout << "me :" << me << std::endl;
	// 	std::cout << "copyMe: " << copyMe << std::endl;
	// 	// copyMe->unequip(0);
	// 	// copyMe->unequip(1);
	// 	// copyMe->unequip(2);
	// 	// copyMe->unequip(3);
	// 	copyMe->print();
	// 	std::cout << "----" << std::endl;
	// 	me->print();

	// 	delete me;
	// 	delete copyMe;
	// 	for (size_t i = 0; i < 5; i++)
	// 		delete M[i];
	// }
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
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);

		// me->print();
		// tmp = src->createMateria("cure");
		// me->equip(tmp);
		// ICharacter *bob = new Character("bob");
		// me->use(0, *bob);
		// me->use(1, *bob);
		// delete bob;
		delete me;
		delete src;
	}

	return 0;
}
