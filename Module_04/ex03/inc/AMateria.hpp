/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:56:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/11 21:23:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "iostream"
// Forward declaration
class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(const AMateria &);
	virtual ~AMateria();

	AMateria &operator=(const AMateria &);

	std::string const &getType() const; // Returns the materia type
	virtual AMateria *clone() const = 0;
	// virtual void use(ICharacter &target);
};

#endif
