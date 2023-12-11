/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/11 11:29:51 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"
#include "colors.hpp"

#include <chrono>
#include <thread>

PhoneBook::PhoneBook() { list = -1; }

PhoneBook::~PhoneBook() {}

PhoneBook PhoneBook::operator++()
{
	list++;
	return *this;
}

bool PhoneBook::addContac(void)
{
	std::cout << MENU << "ADD NEW CONTACT" << RESET << std::endl;

	if (PhoneBook::list == -1)
		PhoneBook::list = 0;
	//=========================================================================
	std::cout << "list:" << PhoneBook::list;
	std::cout << " list%:" << PhoneBook::list % SIZE << std::endl;
	//=========================================================================
	++(*this);

	menu(ADD);

	// this->contacts[PhoneBook::list % SIZE].NewContact("first name","segundo","secreto","nikname", "3232323");
	this->contacts[PhoneBook::list % SIZE].NewContact("first name", "segundo");

	std::this_thread::sleep_for(std::chrono::seconds(3));

	return true;
}

bool PhoneBook::showPhoneBook(void)
{
	if (this->list == -1)
		std::cout << RED << "My Awesome PhoneBook is empty" << RESET << std::endl;
	else
	{
		menu(SEARCH);
		for (size_t i = 0; i < SIZE; i++)
		{
			// TODO Aqui la lista contactos
			this->contacts[i].ShowContact();
		}
	}

	std::this_thread::sleep_for(std::chrono::seconds(2));

	return false;
}
