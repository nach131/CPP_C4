
#include <iostream>

class PhoneBook
{
private:
	PhoneBook operator++();
	PhoneBook operator--();

public:
	int list;
	void initList(bool type);
	PhoneBook();
	~PhoneBook();
};

// PhoneBook::PhoneBook() { list = 0; }
PhoneBook::PhoneBook() : list(0) {}
PhoneBook::~PhoneBook() {}

PhoneBook PhoneBook::operator++()
{
	list++;
	return *this;
}
PhoneBook PhoneBook::operator--()
{
	list--;
	return *this;
}

void PhoneBook::initList(bool type)
{
	if (type == true)
		++(*this);
	else
		--(*this);
}

int main(void)
{
	int num;
	PhoneBook book;
	while (42)
	{
		std::cout << "> ";
		std::cin >> num;

		if (num == 0)
			return 0;
		else if (num == 1)
			book.initList(true);
		else if (num == 2)
			book.initList(false);
		std::cout << "list:" << book.list << std::endl;
	}
}