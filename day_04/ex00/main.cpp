/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:22:34 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:39:44 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	std::cout << "~Program, Start!" << std::endl;

	std::cout << std::endl;

	const Animal* meta = new Animal();

	std::cout << std::endl;

	const Animal* dog = new Dog();

	std::cout << std::endl;

	const Animal* cat = new Cat();

	std::cout << std::endl;

	const WrongAnimal* wcat = new WrongCat();
	std::cout << std::endl;

	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "!!this should be WrongCat!!: " << std::endl;
	wcat->makeSound();

	std::cout << std::endl;
	delete meta;
	std::cout << std::endl;
	delete dog;
	return (0);
}
