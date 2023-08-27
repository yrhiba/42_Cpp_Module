/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:39:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 09:24:41 by yrhiba           ###   ########.fr       */
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

	std::cout << std::endl;


	return (0);
}
