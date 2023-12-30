#include <iostream>

class Point
{
private:
	int x;
	int y;

public:
	Point(int xCoor, int yCoor) : x(xCoor), y(yCoor) {}

	bool operator==(const Point &other) const
	{
		return (x == other.x && y == other.y);
	}
};

int main(void)
{
	Point p1(2, 3);
	Point p2(2, 3);
	Point p3(4, 6);

	if (p1 == p2)
		std::cout << "p1 y p2 son iguales" << std::endl;
	else
		std::cout << "p1 y p2 son son diferentes" << std::endl;
	if (p1 == p3)
		std::cout << "p1 y p3 son iguales" << std::endl;
	else
		std::cout << "p1 y p3 son son diferentes" << std::endl;
}