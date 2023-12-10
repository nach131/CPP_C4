/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:14:31 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/10 18:14:13 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contacts.hpp"

#define SIZE 8

class PhoneBook
{
private:
	Contacs contacts[SIZE];
	int list;
	PhoneBook operator++();
	// PhoneBook operator--();

public:
	PhoneBook();
	~PhoneBook();
	bool addContac(void);
	bool showPhoneBook();
};

#endif
