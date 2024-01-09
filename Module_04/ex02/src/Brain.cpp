/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:10:42 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/07 20:59:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << BRAIN_C << "[Brain]" << GREEN << " - Default constructor called without parameter" << RESET << std::endl;
}

Brain::Brain(const Brain &tmp)
{
	std::cout << BRAIN_C << "[Brain]" << CYAN << " - Copy constructor called" << RESET << std::endl;
	*this = tmp;
}

Brain::~Brain() { std::cout << BRAIN_C << "[Brain]" << RED << " - Destructor called" << RESET << std::endl; }

Brain &Brain::operator=(const Brain &tmp)
{
	std::cout << BRAIN_C << "[Brain]" << YELLOW << " - Assignation operator called" << RESET << std::endl;
	if (this != &tmp)
	{
		for (size_t i = 0; i < 100; i++)
			_ideas[i] = tmp._ideas[i];
	}
	return *this;
}
