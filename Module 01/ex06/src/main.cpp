/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/24 11:48:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colorsft.hpp"

void ft_message(int err, std::string msg)
{
	if (err == DANGER)
		std::cerr << RED << msg << RESET << std::endl;
	else if (err == INFO)
		std::cout << CYAN << msg << RESET << std::endl;
}

int err_argc()
{

	system("clear");
	std::cerr << RED << "Missing argument:" << RESET << std::endl;
	std::cout << ERROR << "[LEVEL]" RESET << std::endl;
	return EXIT_FAILURE;
}

int main(int n, char **str)
{
	if (n != 2)
		return err_argc();
	else
	{
		system("clear");
		Harl harl;
		harl.complain(str[1]);
	}
	return 0;
}
