/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 03:17:20 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 05:44:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

double ABS(double x)
{
	if (x < 0)
		return (-x);
	return (x);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	std::cout << a << " " << b << " " << c << std::endl;
	std::cout << point << std::endl;
	return (true);
}
