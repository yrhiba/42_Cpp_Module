/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:21:27 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 00:12:04 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using namespace std;

int main( void )
{
	float x, y; cin >> x >> y;

	Fixed a(x);
	Fixed b(y);


	cout << a << "  " << b << endl;
	cout << "+ " << a+b << endl;
	cout << "- " << a-b << endl;
	cout << "* " << a*b << endl;
	cout << "/ " << a/b << endl;

	return 0;
}