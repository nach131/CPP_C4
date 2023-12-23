#include <iostream>

#ifndef FINDANDREPLACE_HPP
#define FINDANDREPLACE_HPP

class FindAndReplace
{
private:
	FindAndReplace operator++();
	int _number;
	std::string _fileIn;
	std::string _fileOut;
	void _print(std::string, std::string);
	int _ctrl(bool, bool, std::string, std::string);

public:
	FindAndReplace(std::string);
	~FindAndReplace();
	int replace(std::string, std::string);
};

#endif
