/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 03:48:38 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 14:08:28 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructer called" << std::endl;
	this->sethitpoints(100);
	this->setenergypoints(50);
	this->setattackdamage(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructer called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->gethitpoints() == 0)
	{
		std::cout << "ScavTrap " << this->getname() << " Can't attack." << std::endl;
		return ;
	}
	this->sethitpoints(this->gethitpoints() - 1);
	std::cout << "ScavTrap " << this->getname() << " attack " << target;
	std::cout << ", causing " << this->getattackdamage() << " points of damage!";
	std::cout << std::endl;
}

void ScavTrap::guardGate( void )
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
	this->setname(other.getname());
	this->sethitpoints(other.gethitpoints());
	this->setenergypoints(other.getenergypoints());
	this->setattackdamage(other.getattackdamage());
	return (*this);
}
