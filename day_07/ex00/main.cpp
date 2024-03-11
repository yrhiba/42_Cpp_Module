/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:55:38 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 19:06:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "whatever.hpp"

int main()
{
	// std::string a = "101";
	// std::string b = "11";

	// std::cout << "a: " << a << ", b: " << b << std::endl;

	// ::swap(a, b);

	// std::cout << "After Swap:" << std::endl;
	// std::cout << "a: " << a << ", b: " << b << std::endl;
	// std::cout << "Max: " << ::max(a, b) << ", Min: " << ::min(a, b) << std::endl;
	//

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}
