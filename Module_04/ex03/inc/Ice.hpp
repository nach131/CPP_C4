/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:57:43 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/09 15:16:06 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
protected:
public:
	Ice();
	Ice(const Ice &);
	~Ice();
	Ice &operator=(const Ice &);

	AMateria *clone() const;
};

#endif
