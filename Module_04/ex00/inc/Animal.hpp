/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:23:47 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/07 14:53:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "iostream"

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &);
	virtual ~Animal();
	Animal &operator=(const Animal &);
	virtual void makeSound() const;

	std::string getType() const;
};

#endif
