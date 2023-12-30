/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:16:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/12 18:19:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Colors.hpp"
#include <chrono>
#include <thread>

void clear(bool &flag)
{
	std::system("clear");
	flag = false;
}

int main(void)
{
	PhoneBook book;
	bool flag = true;
	std::string line;

	while (42)
	{
		std::system("clear");

		if (flag)
		{
			menu(0);
			std::cout << "> ";
		}
		if (!getline(std::cin, line))
			break;
		if (!line.compare("ADD"))
		{
			clear(flag);
			flag = book.addContac();
		}
		else if (!line.compare("SEARCH"))
		{
			clear(flag);
			flag = book.showPhoneBook();
		}
		else if (!line.compare("EXIT"))
			break ;
		else
		{
			flag = true;
			std::system("clear");
			menu(0);
			std::cout << ERROR << "Invalid command !!!" << RESET << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
	}
	std::system("clear");
	std::cout << GREEN << "Goodbye..." << RESET << std::endl;
	return (0);
}
