/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:06:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 18:12:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>

#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define SIZE 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_inventory[SIZE];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &);

	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &);

	// virtual void        learnMateria(AMateria *m);
	// virtual AMateria    *createMateria(const std::string &type);
}

#endif
