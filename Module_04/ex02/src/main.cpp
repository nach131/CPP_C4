/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/09 13:53:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Colors_ft.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{

	// std::cout << "\t\t" << MAIN << "[ Error Compilador ]" << RESET << std::endl;
	// {
	// 	const Animal *meta = new Animal();
	// 	const Animal *j = new Dog();
	// 	const Animal *i = new Cat();

	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;

	// 	i->makeSound(); // will output the cat sound! j->makeSound();
	// 	j->makeSound();
	// 	meta->makeSound();

	// 	delete meta;
	// 	delete j;
	// 	delete i;
	// }

	std::cout << "\t\t" << MAIN << "[ Mandatory ]" << std::endl;
	{
		const Animal *animal[2];

		animal[0] = new Dog();
		animal[1] = new Cat();
		animal[0]->makeSound();
		animal[1]->makeSound();
		delete animal[0];
		delete animal[1];
	}
	std::cout << "\n\t\t" << MAIN << "[ Exe01 ]" << std::endl;
	{
		Animal *animals[10];

		for (int i = 0; i < 10; i++)
		{
			std::cout << std::endl;
			if (i % 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (size_t i = 0; i < 10; i++)
			delete animals[i];
	}
	// std::cout << "\t\t" << MAIN << "[ TEST Copy & Operator= ]" << RESET << std::endl;
	// {
	// 	const Animal *cat = new Cat();

	// 	// Usar el constructor de copia
	// 	const Cat *copyCat = new Cat(*static_cast<const Cat *>(cat));
	// 	// Usar el operador de asignación
	// 	Cat assignedCat;
	// 	assignedCat = *static_cast<const Cat *>(cat);

	// 	std::cout << cat->getType() << " " << std::endl;
	// 	std::cout << copyCat->getType() << " " << std::endl;
	// 	std::cout << assignedCat.getType() << " " << std::endl;

	// 	delete cat;
	// 	delete copyCat;
	// }

	return 0;
}
