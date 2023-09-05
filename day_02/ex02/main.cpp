/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:21:27 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/05 18:11:09 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	float x, y;

	std::cin >> x >> y;

	Fixed a(x);
	Fixed b(y);


	std::cout << a << "  " << b << std::endl;


	std::cout << --a << std::endl;
	std::cout << ++b << std::endl;
	return 0;
}
