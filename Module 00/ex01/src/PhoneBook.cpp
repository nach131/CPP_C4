/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/10 18:43:33 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"
#include "colors.hpp"

#include <chrono>
#include <thread>

PhoneBook::PhoneBook() { list = 0; }

PhoneBook::~PhoneBook() {}

PhoneBook PhoneBook::operator++()
{
	list++;
	return *this;
}

bool PhoneBook::addContac(void)
{
	std::cout << MENU << "ADD NEW CONTACT" << RESET << std::endl;

	std::cout << "list:" << PhoneBook::list;
	std::cout << " list%:" << PhoneBook::list % SIZE << std::endl;
	++(*this);

	this->contacts[PhoneBook::list % SIZE].NewContact();

	std::this_thread::sleep_for(std::chrono::seconds(1));

	return true;
}

void menu_c(void)
{
	std::cout << MENU << "╔══════════╦══════════╦═════════╦══════════╗" << std::endl;
	std::cout << "║  INDEX   ║ 1ST NAME ║  NAME   ║ NICKNAME ║" << std::endl;
	std::cout << "╚══════════╩══════════╩═════════╩══════════╝" << RESET << std::endl;
}

bool PhoneBook::showPhoneBook(void)
{
	menu_c();

	std::this_thread::sleep_for(std::chrono::seconds(2));

	return false;
}
