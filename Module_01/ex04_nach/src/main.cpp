/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/04/03 10:37:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <colorsft.hpp>
#include "FindAndReplace.hpp"

int err_argc(int n)
{
	system("clear");
	ft_message(DANGER, "Missing argument:");
	if (n > 1)
		std::cout << OK << "[File name]" RESET << " ";
	// else
	// 	std::cout << ERROR << "[File name]" RESET << " ";
	// if (n > 2)
	// 	std::cout << OK << "[String to find]" RESET << " ";
	// else
	// 	std::cout << ERROR << "[String to find]" RESET << " ";
	// std::cout << ERROR << "[String to replace]" RESET << " " << std::endl;
	return EXIT_FAILURE;
}

int main(int n, char **str)
{
	if (n != 2)
		return err_argc(n);
	else
	{
		FindAndReplace start(str[1]);
		return start.replace("][", ",");
	}
}
