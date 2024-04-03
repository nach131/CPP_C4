/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:23:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/04/03 10:35:20 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindAndReplace.hpp"
#include <fstream>
#include <colorsft.hpp>

FindAndReplace::FindAndReplace(std::string fileIn) : _fileIn(fileIn)
{
	_number = 0;
}

FindAndReplace::~FindAndReplace() {}

FindAndReplace FindAndReplace::operator++()
{
	_number++;
	return *this;
}

void FindAndReplace::_print(std::string find, std::string replace)
{
	std::cout << CYAN << "File name: " << GREEN << _fileIn << std::endl;
	std::cout << CYAN << "To find: " << GREEN << find << std::endl;
	std::cout << CYAN << "To replace: " << GREEN << replace << std::endl;
	std::cout << CYAN << "Replaced: " << GREEN << _number << std::endl;
	std::cout << CYAN << "Almost: " << GREEN << _number * 25 << std::endl;
}

int FindAndReplace::_ctrl(bool empty, bool noFound, std::string find, std::string replace)
{
	if (empty)
	{
		std::cerr << ERROR << "The file " << _fileIn << " is empty" << RESET << std::endl;
		return EXIT_FAILURE;
	}
	else if (!noFound)
	{
		std::cerr << ERROR << "The string: " << find << " was not found" << RESET << std::endl;
		std::remove((_fileIn + ".tmp").c_str()); // Eliminar archivo temporal
		return EXIT_FAILURE;
	}

	std::remove(_fileIn.c_str());							  // Eliminar archivo original
	std::rename((_fileIn + ".tmp").c_str(), _fileIn.c_str()); // Renombrar archivo temporal
	_print(find, replace);
	return EXIT_SUCCESS;
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

	std::ofstream ofs(_fileIn + ".tmp"); // Archivo temporal
	if (!ofs.is_open())
	{
		std::cerr << ERROR << "The temporary file could not be created" << RESET << std::endl;
		ifs.close();
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
