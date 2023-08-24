/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:39:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 04:35:34 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap c("basel");

	ScavTrap a(c);

	std::cout << "name: " << a.getname() << std::endl;
	std::cout << "hitpoints: " << a.gethitpoints() << std::endl;
	std::cout << "energypoints: " << a.getenergypoints() << std::endl;
	std::cout << "attack: " << a.getattackdamage() << std::endl;

	a.attack("zeni");
	return (0);
}
