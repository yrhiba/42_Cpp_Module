/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:08:53 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/12 01:06:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "iter.hpp"

template<typename T>
void print(const T & e)
{
	std::cout << e << std::endl;
}

int main()
{
	int arr[3] = {1, 2, 3};
	//
	iter<int>(arr, 3, print<int>);
	//
	return (0);
}
