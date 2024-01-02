/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:22:20 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 21:04:55 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Bsp.hpp"
#include "Colors_ft.hpp"

void print(std::string name, const Point p)
{
	std::cout << name << std::endl;
	p.getXY();
}

int main(void)
{
	{
		Point a;
		Point b(10, 30);
		Point c(20, 0);
		Point point(4, 2);

		print("A ", a);
		print("B ", b);
		print("C ", c);
		print("Point ", point);
		if (bsp(a, b, c, point))
			std::cout << OK << "Point is in the triangle" << RESET << std::endl;
		else
			std::cout << ERROR << "Point is not in the triangle" << RESET << std::endl;
	}
	{
		Point a;
		Point b(10, 30);
		Point c(20, 0);
		Point point(40, 2);

		print("A ", a);
		print("B ", b);
		print("C ", c);
		print("Point ", point);
		if (bsp(a, b, c, point))
			std::cout << OK << "Point is in the triangle" << RESET << std::endl;
		else
			std::cout << ERROR << "Point is not in the triangle" << RESET << std::endl;
	}
	{
		std::cout << "This is direct" << std::endl;
		if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(1, 1)))
			std::cout << OK << "Point is in the triangle" << RESET << std::endl;
		else
			std::cout << ERROR << "Point is not in the triangle" << RESET << std::endl;
	}

	return 0;
}
