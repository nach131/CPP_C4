/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/23 12:37:01 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <colorsft.hpp>

int err_argc(int n)
{
	system("clear");
	ft_message(DANGER, "Missing argument:");
	if (n > 1)
		std::cout << OK << "[File name]" RESET << " ";
	else
		std::cout << ERROR << "[File name]" RESET << " ";
	if (n > 2)
		std::cout << OK << "[String to find]" RESET << " ";
	else
		std::cout << ERROR << "[String to find]" RESET << " ";
	std::cout << ERROR << "[String to replace]" RESET << " " << std::endl;
	return EXIT_FAILURE;
}

int succ(std::string filename, std::string find, std::string replace)
{
	std::cout << CYAN << "File name: " << GREEN << filename << std::endl;
	std::cout << CYAN << "String to find: " << GREEN << find << std::endl;
	std::cout << CYAN << "String to replace: " << GREEN << replace << std::endl;
	return EXIT_SUCCESS;
}

int main(int n, char **str)
{
	if (n != 4)
		return err_argc(n);
	else
	{

		return succ(str[1], str[2], str[3]);
	}
}
