/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:19:12 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/11 20:26:48 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>

class Contacs
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string dark_secret;

public:
	Contacs();
	~Contacs();
	void NewContact(std::string, std::string, std::string, std::string, std::string);
	void ShowContact(int i);
	void ShowAllInfo(void);
};

#endif
