/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:23:30 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/23 21:23:46 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "colorsft.hpp"

void ft_message(int err, std::string msg)
{
	if (err == DANGER)
		std::cerr << RED << msg << RESET << std::endl;
	else if (err == INFO)
		std::cout << CYAN << msg << RESET << std::endl;
}
