/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:21:27 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 06:36:40 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

using namespace std;

int main( void )
{
	bsp(Point(-4, 0), Point(2, 5), Point(3, -2), Point(0, 0)) ?
		std::cout << "YES" : std::cout << "NO";
	std::cout << std::endl;
	return (0);
}
