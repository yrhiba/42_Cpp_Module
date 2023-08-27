/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:39:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 12:48:36 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap D("DIAMOND-TARP-X");

	std::cout << std::endl;

	std::cout << "Diamondname: " << D.getdiamondname() << std::endl;
	std::cout << "name: " << D.getname() << std::endl;
	std::cout << "hitpoints: " << D.gethitpoints() << std::endl;
	std::cout << "energypoints: " << D.getenergypoints() << std::endl;
	std::cout << "attack damage: " << D.getattackdamage() << std::endl;

	std::cout << std::endl;


	D.attack("yahya");

	std::cout << std::endl;

	D.whoAmI();

	std::cout << std::endl;

	return (0);
}
