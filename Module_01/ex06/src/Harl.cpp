/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:23:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/24 11:47:35 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colorsft.hpp"

void Harl::debug()
{
	std::cout << ORANGE << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle- special-ketchup burger. I really do!" << RESET << std::endl;
}
void Harl::inf()
{
	std::cout << CYAN << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning()
{
	std::cout << YELLOW << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error()
{
	std::cout << RED << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::typErr()
{
	std::cout << ERROR << "Invalid command !!!" << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	switch (i)
	{
	case 0:
		debug();
	case 1:
		inf();
	case 2:
		warning();
	case 3:
		error();
		break;
	default:
		typErr();
	}
}
