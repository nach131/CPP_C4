#include "FindAndReplace.hpp"
#include <fstream>
#include <colorsft.hpp>

FindAndReplace::FindAndReplace(std::string fileIn) : _fileIn(fileIn) { _fileOut = _fileIn + ".replace"; }

FindAndReplace::~FindAndReplace() {}

void FindAndReplace::print(std::string find, std::string replace)
{
	std::cout << CYAN << "File name IN: " << GREEN << _fileIn << std::endl;
	std::cout << CYAN << "File name OUT: " << GREEN << _fileOut << std::endl;
	std::cout << CYAN << "String to find: " << GREEN << find << std::endl;
	std::cout << CYAN << "String to replace: " << GREEN << replace << std::endl;
}

int FindAndReplace::replace(std::string find, std::string replace)
{
	std::ifstream ifs(_fileIn);
	bool flag = false;
	if (ifs.is_open())
	{
		std::string line;
		// std::ofstream ofs(_fileOut);

		while (std::getline(ifs, line))
		{
			flag = true;
			std::cout << line << std::endl;
		}
		if (!flag)
		{
			std::cerr << ERROR << "The file " << _fileIn << " is empty" << RESET << std::endl;
			return EXIT_FAILURE;
		}
		else
			print(find, replace);
		ifs.close();
		return EXIT_SUCCESS;
	}
	else
	{
		std::cerr << ERROR << "The file " << _fileIn << " could not be opened" << RESET << std::endl;
		return EXIT_FAILURE;
	}
}
