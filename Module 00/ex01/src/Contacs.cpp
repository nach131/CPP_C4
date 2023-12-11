/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacs.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/11 11:31:37 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"
#include "colors.hpp"

Contacs::Contacs() {}

Contacs::~Contacs() {}

void Contacs::ShowContact()
{
	std::cout << GREEN << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
}

std::string new_line(std::string str)
{
	std::string line;

	std::cout << GREEN << str << RESET << std::endl;
	return "tomate";
}

void Contacs::NewContact(std::string _first_name, std::string _last_name)
{

	this->first_name = _first_name;
	this->last_name = _last_name;
	this->dark_secret = "secreto";
	this->nickname = "nikname";
	this->phone_num = "23232323";
}
