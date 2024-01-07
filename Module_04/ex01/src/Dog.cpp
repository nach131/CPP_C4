/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:42:58 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/07 22:01:27 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Colors_ft.hpp"

Dog::Dog()
{
	std::cout << DOG_C << "[Dog]" << GREEN << " - Default constructor called without parameter" << RESET << std::endl;
	Animal::_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &tmp)
{
	std::cout << DOG_C << "[Dog]" << CYAN << " - Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

Dog::~Dog()
{
	std::cout << DOG_C << "[Dog]" << RED << " - Destructor called" << RESET << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &tmp)
{
	std::cout << DOG_C << "[Dog]" << YELLOW << " - Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		Animal::_type = tmp.Animal::_type;
		_brain = new Brain(*tmp._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << DOG_C << "[Dog]" << RESET << ORANGE << " Wooof... Wooof...." << RESET << std::endl;
}
