/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacs.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/11 16:57:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"
#include "colors.hpp"

Contacs::Contacs() {}

Contacs::~Contacs() {}

void Contacs::MoreInfo()
{
	std::string line;

	getline(std::cin, line);
	if (!line.compare("@"))
		return;
}

void Contacs::ShowContact(int i)
{
	std::cout << MENU << "║" << RESET;
	std::cout.width(10);
	std::cout << std::right << i;
	std::cout << MENU << "║" << RESET;
	std::cout.width(10);
	std::cout << std::right << first_name.substr(0, 9) + (first_name.length() > 9 ? "." : "");
	std::cout << MENU << "║" RESET;
	std::cout.width(10);
	std::cout << std::right << last_name.substr(0, 9) + (last_name.length() > 9 ? "." : " ");
	std::cout << MENU << "║" << RESET;
	std::cout.width(10);
	std::cout << std::right << nickname.substr(0, 9) + (nickname.length() > 9 ? "." : " ");
	std::cout << MENU << "║" << RESET << std::endl;
}

void Contacs::NewContact(std::string _first_name, std::string _last_name, std::string _dark_secret, std::string _nickname, std::string _phone_num)
{
	this->first_name = _first_name;
	this->last_name = _last_name;
	this->dark_secret = _dark_secret;
	this->nickname = _nickname;
	this->phone_num = _phone_num;
}
