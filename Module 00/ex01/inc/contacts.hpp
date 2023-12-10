/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:19:12 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/10 18:43:24 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>

class Contacs
{
private:
	// int id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string dark_secret;

public:
	Contacs();
	~Contacs();
	// int idContact();
	// void addId(int id);
	void NewContact(void);
	void ShowContact(int id);
};

#endif
