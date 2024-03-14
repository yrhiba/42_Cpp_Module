/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 01:23:40 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/14 02:29:40 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include <algorithm>
# include "easyfind.hpp"

int main()
{
	std::vector<int> a(10);
	//
	for (size_t i = 0; i < a.size(); i++) a[i] = i;
	//
	a[1] = 5;
	//
	std::vector<int>::iterator it = std::find(a.begin(), a.end(), 5);

	if (it != a.end()) std::cout << *it << std::endl;
	else std::cout << "Element Not Found!" << std::endl;

	for (; it != a.end(); it++) std::cout << *it << " ";
	//
	std::cout << std::endl;
	//

	std::cout << easyfind(a, 11) << std::endl;

	return (0);
};
