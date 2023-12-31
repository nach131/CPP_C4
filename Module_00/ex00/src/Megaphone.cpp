/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:10:16 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/12 18:33:18 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Megaphone.hpp"

int main(int n, char **str)
{
	if (n <= 1)
		std::cout << ERROR << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << RESET;
	else
		for (int i = 1; i < n; i++)
			for (int j = 0; str[i][j] != '\0'; j++)
				std::cout << CYAN << (char)toupper(str[i][j]);
	std::cout << RESET << std::endl;
}
