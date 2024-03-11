/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:55:38 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 19:04:10 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "whatever.hpp"

int main()
{
	std::string a = "101";
	std::string b = "11";

	std::cout << "a: " << a << ", b: " << b << std::endl;

	::swap(a, b);

	std::cout << "After Swap:" << std::endl;
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "Max: " << ::max(a, b) << ", Min: " << ::min(a, b) << std::endl;
	//
	return (0);
}
