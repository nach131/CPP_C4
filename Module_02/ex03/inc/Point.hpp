/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:54:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 18:23:40 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float, const float);
	Point(const Point &);
	Point &operator=(const Point &);
	~Point();

	Fixed getX() const;
	Fixed getY() const;

	void getXY() const;
};

#endif
