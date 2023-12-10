#include <iostream>

class Things
{
public:
	char ch;
	int num;
	std::string str;
	float dec;

	Things(char _ch, int _num, std::string, float _dec);
	~Things(void);
};

Things::Things(char _ch, int _num, std::string _str, float _dec) : ch(_ch), num(_num), str(_str), dec(_dec)
{
	std::cout << "Contrutor called" << std::endl;
	std::cout << "this->ch: '" << this->ch << "'" << std::endl;
	std::cout << "this->num: '" << this->num << "'" << std::endl;
	std::cout << "this->str: '" << this->str << "'" << std::endl;
	std::cout << "this->dec: '" << this->dec << "'" << std::endl;
}

Things::~Things(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int main(void)
{
	Things ThisIsNew('@', 42, "Barcelona", 3.141549);
	return 0;
}
