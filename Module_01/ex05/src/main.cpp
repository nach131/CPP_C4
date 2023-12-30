/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/24 10:11:03 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colorsft.hpp"

void clear(bool &flag)
{
	std::system("clear");
	flag = false;
}

int main()
{
	Harl harl;
	bool flag = true;
	std::string input;

	while (42)
	{
		if (flag)
		{
			std::system("clear");
			harl.menu();
			std::cout << "> ";
		}
		if (!getline(std::cin, input))
			break;
		if (!input.compare("EXIT"))
			break;
		else
		{
			clear(flag);
			harl.complain(input);
		}
	}
	std::system("clear");
	std::cout << GREEN << "Goodbye..." << RESET << std::endl;
	return 0;
}
