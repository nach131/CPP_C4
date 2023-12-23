#include <iostream>
#include "colorsft.hpp"

void ft_message(int err, std::string msg)
{
	if (err == DANGER)
		std::cerr << RED << msg << RESET << std::endl;
	else if (err == INFO)
		std::cout << CYAN << msg << RESET << std::endl;
}
