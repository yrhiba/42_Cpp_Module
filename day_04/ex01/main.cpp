/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:22:34 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 13:01:29 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	std::cout << "~Program, Start!" << std::endl;

	std::cout << std::endl;

	Animal *animals[10];

	int i = 0;
	for (; i < 5; i++)
		animals[i] = new Cat();
	for (; i < 10; i++)
		animals[i] = new Dog();

	std::cout << std::endl;

	i = 0;
	for (;i < 10; i++)
		delete animals[i];

	return (0);
}
