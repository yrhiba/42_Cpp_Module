/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:07:34 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/08 22:21:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void leaks()
{
	system ("leaks ex03");
}

int main()
{
	atexit(leaks);
	std::cout << "~Program Start" << std::endl;

	/*
		tests:
	
		- test AMateria class. valid.
		- test Cure/Ice class.
		- test Character class.

	*/

	Character ch("char-name");

	AMateria *c = new Cure();
	AMateria *i = new Ice();

	std::cout << std::endl;

	std::cout << "charachter name : " << ch.getName() << std::endl;

	std::cout << std::endl;

	c->use(ch);
	i->use(ch);

	std::cout << std::endl;

	ch.equip(c->clone());
	ch.equip(i->clone());

	if (!ch.isInventoryFull())
		ch.use(0, ch);

	if (!ch.isInventoryFull())
		ch.use(1, ch);

	std::cout << std::endl;

	AMateria *x = ch.getMateria(0);
	ch.unequip(0);
	if (x != nullptr)
		delete x;

	std::cout << std::endl;

	if (ch.getMateria(0) != nullptr)
		std::cout << ch.getMateria(0)->getType() << std::endl;

	if (ch.getMateria(1) != nullptr)
		std::cout << ch.getMateria(1)->getType() << std::endl;
	
	std::cout << std::endl;


	Character cp = ch;

	if (cp.getMateria(0) != nullptr)
		std::cout << cp.getMateria(0)->getType() << std::endl;

	if (cp.getMateria(1) != nullptr)
		std::cout << cp.getMateria(1)->getType() << std::endl;

	std::cout << std::endl;

	delete c;
	delete i;
 
	return (0);
}
