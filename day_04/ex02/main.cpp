/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:22:34 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/05 18:23:30 by yrhiba           ###   ########.fr       */
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
