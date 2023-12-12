/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacs.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:46 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/12 18:26:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include "Colors.hpp"

Contacs::Contacs() {}

Contacs::~Contacs() {}

void Contacs::ShowAllInfo()
{
	std::cout << MENU << "First Name:"
			  << RESET << " " << GREEN << this->first_name << std::endl;
	std::cout << MENU << "Last Name:"
			  << RESET << " " << GREEN << this->last_name << std::endl;
	std::cout << MENU << "Nickname:"
			  << RESET << " " << GREEN << this->nickname << std::endl;
	std::cout << MENU << "Phone number:"
			  << RESET << " " << GREEN << this->phone_num << std::endl;
	std::cout << MENU << "Darkest secret:"
			  << RESET << " " << GREEN << this->dark_secret << RESET << std::endl;
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
	std::cout << std::right << last_name.substr(0, 9) + (last_name.length() > 9 ? "." : "");
	std::cout << MENU << "║" << RESET;
	std::cout.width(10);
	std::cout << std::right << nickname.substr(0, 9) + (nickname.length() > 9 ? "." : "");
	std::cout << MENU << "║" << RESET << std::endl;
}

void Contacs::NewContact(std::string FirstName, std::string LastName, std::string DarkSecret, std::string NickName, std::string PhoneNum)
{
	this->first_name = FirstName;
	this->last_name = LastName;
	this->dark_secret = DarkSecret;
	this->nickname = NickName;
	this->phone_num = PhoneNum;
}
