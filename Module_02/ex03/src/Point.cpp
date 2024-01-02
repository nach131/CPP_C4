/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:54:49 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 20:51:03 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}
Point::Point(const float x, const float y) : _x(x), _y(y) {}
Point::Point(const Point &tmp) : _x(tmp._x), _y(tmp._y) {}
Point::~Point() {}

Point &Point::operator=(const Point &tmp)
{
	(void)tmp;
	return *this;
}

Fixed Point::getX() const { return _x; }
Fixed Point::getY() const { return _y; }

//=========================================================================

void Point::getXY() const
{
	std::cout << "x: " << _x.toFloat() << ", y: " << _y.toFloat() << std::endl;
	std::cout << "------------" << std::endl;
}
