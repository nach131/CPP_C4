/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:23:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/24 10:41:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colorsft.hpp"

void Harl::menu()
{
	std::cout << "\t\t   " << HARL << " " << URED << "HARL 9000" RESET << " " << HARL << "\n"
			  << std::endl;
	std::cout << "  " << MENU "DEBUG  :" RESET BOLD " Messages contain contextual information." << std::endl;
	std::cout << "  " << MENU "INFO   :" RESET BOLD " Messages contain extensive information." << std::endl;
	std::cout << "  " << MENU "WARNING:" RESET BOLD " Messages indicate a potential issue in the system." << std::endl;
	std::cout << "  " << MENU "ERROR  :" RESET BOLD " Messages indicate an unrecoverable error has occurred." << std::endl;
	std::cout << "  " << MENU "EXIT   :" RESET BOLD " Exit the program\n" RESET << std::endl;
}

void Harl::debug()
{
	menu();
	std::cout << ORANGE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle- special-ketchup burger. I really do!" << RESET << std::endl;
	std::cout << "> ";
}
void Harl::inf()
{
	menu();
	std::cout << CYAN << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
	std::cout << "> ";
}

void Harl::warning()
{
	menu();
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
	std::cout << "> ";
}

void Harl::error()
{
	menu();
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
	std::cout << "> ";
}

void Harl::typErr()
{
	menu();
	std::cout << ERROR << "Invalid command !!!" << RESET << std::endl;
	std::cout << "> ";
}

void Harl::complain(std::string level)
{
	bool flag = true;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*function[])() = {&Harl::debug, &Harl::inf, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
		{
			flag = false;
			(this->*function[i])();
		}
	if (flag)
		typErr();
}
