/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 03:20:46 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 05:52:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
}

Point::Point(const Point &other) : x(other.getx()), y(other.gety())
{
}

const Point &Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point::~Point()
{
}

Fixed Point::getx( void ) const
{
	return (Fixed(this->x));
}

Fixed Point::gety( void ) const
{
	return (Fixed(this->y));
}

bool Point::operator==(const Point &other) const
{
	return (this->getx() == other.getx() && this->gety() == other.gety());
}

std::ostream &operator<<(std::ostream &stream, const Point &point)
{
	stream << "(" << point.getx() << ", " << point.gety() << ")";
	return (stream);
}
