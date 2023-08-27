/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 03:48:38 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 10:10:39 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructer called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructer called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructer called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hit_points == 0)
	{
		std::cout << "ScavTrap " << this->name << " Can't attack." << std::endl;
		return ;
	}
	this->hit_points -= 1;
	std::cout << "ScavTrap " << this->getname() << " attack " << target;
	std::cout << ", causing " << this->getattackdamage() << " points of damage!";
	std::cout << std::endl;
}

void ScavTrap::guardGate( void ) const 
{
	std::cout << "ScavTrap " << this->getname() << " is Now in Gate keeper mode";
	std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructer called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->name = other.getname();
	this->hit_points = other.gethitpoints();
	this->energy_points = other.getenergypoints();
	this->attack_damage = other.getattackdamage();
	return (*this);
}
