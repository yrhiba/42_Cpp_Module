/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:21:27 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/05 18:12:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	bsp(Point(-4, 0), Point(2, 5), Point(3, -2), Point(0, 0)) ?
		std::cout << "YES" : std::cout << "NO";
	std::cout << std::endl;
	return (0);
}
