/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:06:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/11 17:03:37 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "colors.hpp"

void menu(int type)
{
	if (!type)
	{
		std::system("clear");
		std::cout << "           " << UCYAN "My Awesome PhoneBook\n" RESET << std::endl;
		std::cout << "  " << MENU "ADD    :" RESET BOLD " Add a new contact (max. 8)" << std::endl;
		std::cout << "  " << MENU "SEARCH :" RESET BOLD " will display the Phone Book" << std::endl;
		std::cout << "  " << MENU "EXIT   :" RESET BOLD " Exit the program\n" RESET << std::endl;
	}
	else if (type == SEARCH)
	{
		{
			std::cout << MENU << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
			std::cout << "║  INDEX   ║ 1ST NAME ║ LST NAME ║ NICKNAME ║" << std::endl;
			std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << RESET << std::endl;
		}
	}
	else if (type == ADD)
	{
		std::cout << MENU << "ADD NEW CONTACT\n"
				  << RESET << std::endl;
	}
}
