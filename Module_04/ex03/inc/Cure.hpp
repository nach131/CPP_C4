/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 21:21:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
protected:
public:
	Cure();
	Cure(const Cure &);
	~Cure();
	Cure &operator=(const Cure &);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
