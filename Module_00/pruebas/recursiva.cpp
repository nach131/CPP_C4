#include <iostream>

void CountDown(int num)
{
	if (num > 0)
	{
		std::cout << num << std::endl;
		CountDown(num - 1);
	}
}

int main(void)
{
	CountDown(10);
	return 0;
}
