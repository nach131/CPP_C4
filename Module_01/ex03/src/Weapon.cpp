/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:54:21 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/24 20:09:38 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) { _type = type; }
Weapon::~Weapon() {}

const std::string &Weapon::getType() { return _type; }

void Weapon::setType(std::string newType) { _type = newType; }
