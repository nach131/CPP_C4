/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:23:15 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/04/03 10:28:26 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FINDANDREPLACE_HPP
#define FINDANDREPLACE_HPP

class FindAndReplace
{
private:
	FindAndReplace operator++();
	int _number;
	std::string _fileIn;
	void _print(std::string, std::string);
	int _ctrl(bool, bool, std::string, std::string);

public:
	FindAndReplace(std::string);
	~FindAndReplace();
	int replace(std::string, std::string);
};

#endif
