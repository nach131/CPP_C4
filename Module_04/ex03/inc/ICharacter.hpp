/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:00:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 21:05:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "iostream"
// Forward declaration
class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter(){};
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
	virtual void print() const = 0;
};

#endif
