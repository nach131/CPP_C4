/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/11 17:05:36 by nmota-bu         ###   ########.fr       */
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

void infoNewContact(int i)
{
	if (i == 0)
		std::cout << "Write first name:" << std::endl;
	else if (i == 1)
		std::cout << "Write last name:" << std::endl;
	else if (i == 2)
		std::cout << "Write dark secret:" << std::endl;
	else if (i == 3)
		std::cout << "Write nickname:" << std::endl;
	else if (i == 4)
		std::cout << "Write phone number:" << std::endl;
	std::cout << "> ";
}

bool PhoneBook::addContac(void)
{
	std::string lines[5];
	bool flag = false;
	menu(ADD);
	if (PhoneBook::list == -1)
		PhoneBook::list = 0;

	for (size_t i = 0; i < 5; i++)
	{
		infoNewContact(i);
		getline(std::cin, lines[i]);
		if (i == 4)
			flag = true;
		if (lines[i].empty())
			break;
	}
	if (flag == true)
		this->contacts[PhoneBook::list % SIZE].NewContact(lines[0], lines[1], lines[2], lines[3], lines[4]);
	// else
	// 	PhoneBook::list = -1;

	// std::this_thread::sleep_for(std::chrono::seconds(3));
	++(*this);

	return true;
}

bool PhoneBook::showPhoneBook(void)
{
	menu(0);
	if (this->list == -1)
	{
		std::cout << ERROR << "My Awesome PhoneBook is empty" << RESET << std::endl;
	}
	else
	{
		menu(SEARCH);
		for (int i = 0; i < this->list; i++)
		{
			// std::cout << RED << "i:" << i << std::endl;
			if (i == 8)
				break;
			this->contacts[i].ShowContact(i);
		}
		std::cout << MENU << "╚══════════╩══════════╩══════════╩══════════╝" << RESET << std::endl;
	}
	this->contacts->MoreInfo();

	// std::this_thread::sleep_for(std::chrono::seconds(4));

	return true;
}
