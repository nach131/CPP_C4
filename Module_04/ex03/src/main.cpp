/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:20:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/12 20:31:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Colors_ft.hpp"

int main(void)
{
	std::cout << "\t\t" << MAIN << "[ More ]" << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");

		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->equip(tmp);

		me->print();

		me->unequip(0);
		me->unequip(1);
		me->unequip(2); // CAMBIAR IMAX A 2
		me->print();

		delete me;
		delete src;
	}
	// std::cout << "\t\t" << MAIN << "[ Mandatory ]" << std::endl;
	// {
	// 	IMateriaSource *src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter *me = new Character("me");

	// 	AMateria *tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);

	// 	ICharacter *bob = new Character("bob");

	// 	me->print();

	// 	me->use(0, *bob);
	// 	me->use(1, *bob);
	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// }

	return 0;
}
