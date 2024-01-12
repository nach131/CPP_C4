/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/12 21:46:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
protected:
public:
	Cure();
	Cure(const Cure &);
	~Cure();
	Cure &operator=(const Cure &);

	AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
