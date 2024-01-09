/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:06:45 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/07 20:12:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"
#include "Colors_ft.hpp"

class Brain
{
protected:
	std::string _ideas[100];

public:
	Brain();
	Brain(const Brain &);
	~Brain();
	Brain &operator=(const Brain &);
};

#endif
