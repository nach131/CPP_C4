/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:27:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/16 20:15:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string);
	~Weapon();
	const std::string &getType();
	void setType(std::string);
	void print();
};
