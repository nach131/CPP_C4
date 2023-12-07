/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:16:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/07 19:38:31 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <chrono>
#include <thread>

void	menu(void)
{
	std::system("clear");
	std::cout << UCYAN "My Awesome PhoneBook\n" RESET << std::endl;
	std::cout << MENU "ADD    :" RESET BOLD " Add a new contact to your phone book (max. 8)" << std::endl;
	std::cout << MENU "SEARCH :" RESET BOLD " will display the Phone Book" << std::endl;
	std::cout << MENU "EXIT   :" RESET BOLD " Exit the program" RESET << std::endl;
}

int	main(void)
{
	bool	flag;

	std::string line;
	flag = true;
	while (42)
	{
		if (flag)
			menu();
		getline(std::cin, line);
		if (!line.compare("ADD"))
		{
			std::system("clear");
			flag = false;
			std::cout << "es ADD" << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(2));
			flag = true;
		}
		else if (!line.compare("SEARCH"))
			std::cout << "es SEARCH" << std::endl;
		else if (!line.compare("EXIT"))
			break ;
		else
		{
			flag = true;
			std::system("clear");
			std::cout << ERROR << "Invalid command !!!" << RESET << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(2));
		}
	}
	std::system("clear");
	std::cout << GREEN << "Goodbye..." << RESET << std::endl;
	return (0);
}
//TODO mirar si el retorno del getline es NULL (ctrl+D)
