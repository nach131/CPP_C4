#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void setName(std::string name);
	void annunce();
};

Zombie::Zombie() {}
Zombie::Zombie(std::string name) { _name = name; }
Zombie::~Zombie() { std::cout << _name << " fue destruido" << std::endl; }
void Zombie::setName(std::string name) { _name = name; }
void Zombie::annunce() { std::cout << _name << " Hey..." << std::endl; }

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}

int main()
{
	Zombie One("Pedro");
	One.annunce();

	Zombie Two;
	Two.setName("Dos");
	Two.annunce();

	Zombie *hordas = zombieHorde(5, "Hordas..");
	for (int i = 0; i < 5; i++)
	{
		hordas[i].annunce();
	}
	delete[] hordas;
}