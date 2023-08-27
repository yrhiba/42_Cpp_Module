/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:39:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 09:39:19 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("basel");


	std::cout << "name: " << a.getname() << std::endl;
	std::cout << "hitpoints: " << a.gethitpoints() << std::endl;
	std::cout << "energypoints: " << a.getenergypoints() << std::endl;
	std::cout << "attack: " << a.getattackdamage() << std::endl;

	a.attack("zeni");


	ScavTrap b = a;

	std::cout << "name: " << b.getname() << std::endl;
	std::cout << "hitpoints: " << b.gethitpoints() << std::endl;
	std::cout << "energypoints: " << b.getenergypoints() << std::endl;
	std::cout << "attack: " << b.getattackdamage() << std::endl;

	return (0);
}
