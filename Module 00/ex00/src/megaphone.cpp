/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:10:16 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/11/27 17:11:41 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/megaphone.hpp"

int	main(int n, char **str)
{
	if (n <= 1)
		std::cout << ERROR << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << RESET;
	else
		for (int i = 1; i < n; i++)
			for (int j = 0; str[i][j] != '\0'; j++)
				std::cout << CYAN << (char)toupper(str[i][j]);
	std::cout << RESET << std::endl;
}
