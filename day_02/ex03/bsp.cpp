/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 03:17:20 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 06:36:03 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed w1 = (
		((a.getx() * (c.gety() - a.gety())) 
		+ ((point.gety() - a.gety()) * (c.getx() - a.getx()))
		- (point.getx() * (c.gety() - a.gety())))
		/
		(((b.gety() - a.gety()) * (c.getx() - a.getx()))
		- ((b.getx() - a.getx()) * (c.gety() - a.gety())))
	);

	Fixed w2 = (point.gety() - a.gety() - w1 * (b.gety() - a.gety())) / (c.gety() - a.gety());

	return (w1 > 0 && w2 > 0 && w1 < 1 && w2 < 1 && w1 + w2 < 1);
}
