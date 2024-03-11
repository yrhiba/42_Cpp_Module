/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:47:33 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 22:51:57 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Array.hpp"

# define N 10

# define ui size_t

int main()
{
	Array<std::string> a = Array<std::string>(N);

	for (size_t i = 0; i < a.size(); i++)
	{
		a[i] = std::to_string(i);
		std::cout << a[i] << " \n"[i+1 == a.size()];
	}

	Array<std::string> b = a;

	// update array b don't affect array a
	b[3] = "10";

	for (size_t i = 0; i < b.size(); i++)
	{
		std::cout << b[i] << " \n"[i+1 == b.size()];
	}
	// make the array a equal to array b
	a = b;
	//
	assert(a.size() == b.size() && "arrays size not equal");
	//
	for (size_t i = 0; i < a.size(); i++) assert(a[i] == b[i] && "arrays elements not equal");
	//
	std::cout.flush();
	return (0);
}
