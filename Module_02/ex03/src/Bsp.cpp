/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:41:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2024/01/02 21:03:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bsp.hpp"
#include <cmath>

// La idea es calcular las áreas de los triángulos formados por el punto y
// cada uno de los lados del triángulo original, y luego verificar
// si la suma de estas áreas es igual al área del triángulo original.

static Fixed abs(Fixed x)
{
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed area(Point const a, Point const b, Point const c)
{
	return (((a.getX() * (b.getY() - c.getY())) +
			 (b.getX() * (c.getY() - a.getY())) +
			 (c.getX() * (a.getY() - b.getY()))) /
			2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea = abs(area(a, b, c));
	Fixed pabArea = abs(area(point, a, b));
	Fixed pbcArea = abs(area(point, b, c));
	Fixed pcaArea = abs(area(point, c, a));

	return (abcArea == pabArea + pbcArea + pcaArea);
}
