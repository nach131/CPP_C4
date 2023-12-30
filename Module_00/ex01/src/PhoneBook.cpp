/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:18:11 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/12 18:18:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include "Colors.hpp"

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
		std::cout << MENU << "Write first name:" << RESET << std::endl;
	else if (i == 1)
		std::cout << MENU << "Write last name:" << RESET << std::endl;
	else if (i == 2)
		std::cout << MENU << "Write dark secret:" << RESET << std::endl;
	else if (i == 3)
		std::cout << MENU << "Write nickname:" << RESET << std::endl;
	else if (i == 4)
		std::cout << MENU << "Write phone number:" << RESET << std::endl;
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
		if (lines[i].empty())
			break;
		if (i == 4)
			flag = true;
	}
	if (flag == true)
	{
		this->contacts[PhoneBook::list % SIZE].NewContact(lines[0], lines[1], lines[2], lines[3], lines[4]);
		++(*this);
	}
	return true;
}

void PhoneBook::MoreInfo(void)
{
	std::string line;
	int num;

	while (true)
	{
		std::cout << "> ";
		getline(std::cin, line);
		if (line.empty())
			break;
		try
		{
			num = std::stoi(line);
			if (num >= 0 && num <= 7)
			{
				if (num >= this->list)
					std::cout << ERROR << "¡Index out of range!!" << RESET << std::endl;
				else
					this->contacts[num].ShowAllInfo();
			}
			else
				std::cout << ERROR << "¡Index out of range!!" << RESET << std::endl;
		}
		catch (const std::invalid_argument &e)
		{
			std::cerr << ERROR << "Error: Only number." << RESET << std::endl;
		}
	}
}

bool PhoneBook::showPhoneBook(void)
{
	if (this->list == -1)
		std::cout << ERROR << "My Awesome PhoneBook is empty" << RESET << std::endl;
	else
	{
		menu(SEARCH);
		for (int i = 0; i < this->list; i++)
		{
			if (i == 8)
				break;
			this->contacts[i].ShowContact(i);
		}
		std::cout << MENU << "╚══════════╩══════════╩══════════╩══════════╝" << RESET << std::endl;
		std::cout << "Enter number index for more info, or enter to back." << std::endl;
	}
	this->MoreInfo();

	return true;
}
