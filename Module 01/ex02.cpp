#include <iostream>

void mas(int &num)
{
	num = 10;
}

int main(void)
{
	int num = 0;

	std::cout << num << std::endl;
	mas(num);
	std::cout << num << std::endl;
}