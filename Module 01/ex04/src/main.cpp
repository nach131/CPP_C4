/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/21 19:54:46 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <colorsft.hpp>

#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\x1B[0m"

int main(int n, char **str)
{
	if (n == 4)
	{
		std::string file = str[1];
		std::string s1 = str[2];
		std::string s2 = str[3];
		std::cout << GREEN << file << std::endl;
		std::cout << YELLOW << s1 << std::endl;
		std::cout << MAGENTA << s2 << RESET << std::endl;
	}
	return 0;
}
