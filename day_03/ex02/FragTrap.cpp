/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:09:09 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 09:36:31 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructer called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap constructer called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructer called" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->getname() << " request high five.";
	std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructer called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->name = other.getname();
	this->hit_points = other.gethitpoints();
	this->energy_points = other.getenergypoints();
	this->attack_damage = other.getattackdamage();
	return (*this);
}
