#include <iostream>

#ifndef FINDANDREPLACE_HPP
#define FINDANDREPLACE_HPP

class FindAndReplace
{
private:
	std::string _fileIn;
	std::string _fileOut;
	void print(std::string, std::string);

public:
	FindAndReplace(std::string);
	~FindAndReplace();
	int replace(std::string, std::string);
};

#endif
