/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:22:34 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 13:59:30 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	std::cout << "~Program, Start!" << std::endl;


	Animal a;

	Animal b(a);

	a.makeSound();
	b.makeSound();

	return (0);
}
