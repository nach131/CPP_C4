/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/12 21:46:16 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
protected:
public:
	Ice();
	Ice(const Ice &);
	~Ice();
	Ice &operator=(const Ice &);

	AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
