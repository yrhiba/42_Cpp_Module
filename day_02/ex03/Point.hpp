/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 02:58:35 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 05:43:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT__
# define __POINT__

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();

	Point(const float _x, const float _y);

	Point(const Point &other);

	const Point &operator=(const Point &other);

	~Point();

	Fixed getx( void ) const;

	Fixed gety( void ) const;

	bool operator==(const Point &other) const;
};

std::ostream &operator<<(std::ostream &stream, const Point &point);

#endif
