/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:23:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/09 11:18:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Colors_ft.hpp"

Animal::Animal() _type("")
{
	std::cout << ANIMAL_C << "[Animal]" << GREEN << " - Default constructor called without parameter" << RESET << std::endl;
}

Animal::Animal(const Animal &tmp)
{
	std::cout << ANIMAL_C << "[Animal]" << CYAN << " - Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

Animal::~Animal() { std::cout << ANIMAL_C << "[Animal]" << RED << " - Destructor called" << RESET << std::endl; }

Animal &Animal::operator=(const Animal &tmp)
{
	std::cout << ANIMAL_C << "[Animal]" << YELLOW << " - Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		_type = tmp._type;
	}
	return *this;
}

void Animal::makeSound() const
{
	std::cout << ANIMAL_C << "[Animal]" << RESET << ORANGE << " Animal is class it has no sound" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}
