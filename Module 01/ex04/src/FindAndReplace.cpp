/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:23:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2023/12/23 21:23:25 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindAndReplace.hpp"
#include <fstream>
#include <colorsft.hpp>

FindAndReplace::FindAndReplace(std::string fileIn) : _fileIn(fileIn)
{
	_number = 0;
	_fileOut = _fileIn + ".replace";
}

FindAndReplace::~FindAndReplace() {}

FindAndReplace FindAndReplace::operator++()
{
	_number++;
	return *this;
}

void FindAndReplace::_print(std::string find, std::string replace)
{
	std::cout << CYAN << "File name IN: " << GREEN << _fileIn << std::endl;
	std::cout << CYAN << "File name OUT: " << GREEN << _fileOut << std::endl;
	std::cout << CYAN << "String to find: " << GREEN << find << std::endl;
	std::cout << CYAN << "String to replace: " << GREEN << replace << std::endl;
	std::cout << CYAN << "String's replaced: " << GREEN << _number << std::endl;
}

int FindAndReplace::_ctrl(bool empty, bool noFound, std::string find, std::string replace)
{
	if (!empty && noFound)
	{
		_print(find, replace);
		return EXIT_SUCCESS;
	}
	else if (empty)
		std::cerr << ERROR << "The file " << _fileIn << " is empty" << RESET << std::endl;
	else if (!noFound)
		std::cerr << ERROR << "The string: " << find << " was not found" << RESET << std::endl;
	std::string rm = "rm " + _fileOut;
	system(rm.c_str());
	return EXIT_FAILURE;
}

int FindAndReplace::replace(std::string find, std::string replace)
{
	std::ifstream ifs(_fileIn);
	bool empty = true;
	bool noFound = false;
	if (!ifs.is_open())
	{
		std::cerr << ERROR << "The file " << _fileIn << " could not be opened" << RESET << std::endl;
		return EXIT_FAILURE;
	}
	std::ofstream ofs(_fileOut);
	if (!ofs.is_open())
	{
		std::cerr << ERROR << "The file " << _fileOut << " could not be created" << RESET << std::endl;
		return EXIT_FAILURE;
	}
	std::string line;
	while (std::getline(ifs, line))
	{
		empty = false;
		size_t position = 0;
		while ((position = line.find(find, position)) != std::string::npos)
		{
			noFound = true;
			++(*this);
			line.replace(position, find.length(), replace);
		}
		ofs << line << '\n';
	}
	ifs.close();
	ofs.close();
	return _ctrl(empty, noFound, find, replace);
}
