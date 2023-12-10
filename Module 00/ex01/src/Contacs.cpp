/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacs.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/10 18:42:18 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"
#include "colors.hpp"

Contacs::Contacs() {}

Contacs::~Contacs() {}

void Contacs::ShowContact(int id)
{
	(void)id;
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "name" << this->first_name << std::endl;
	}
}

void Contacs::NewContact(void)
{
	std::cout << "new TOMA YA" << std::endl;

	this->first_name = "primer nombre";
	this->last_name = "segundo nombre";
	this->dark_secret = "secreto";
	this->nickname = "nikname";
	this->phone_num = "23232323";
}
