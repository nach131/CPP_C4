/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:26:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/10 23:15:30 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "iostream"
#include "ICharacter.hpp"
#include <limits.h>

#define IMAX USHRT_MAX
#define SIZE 4

class Character : public ICharacter
{

private:
	std::string _name;
	AMateria *_inventory[IMAX];
	AMateria *_equip[SIZE];
	void dropEquip(int idx);
	int _idxI;
	Character operator++();

public:
	Character();
	Character(const std::string &);
	Character(const Character &);

	~Character();
	Character &operator=(const Character &);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	// void use(int idx, ICharacter &target);

	void print() const;
};

#endif
