/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:09:09 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 14:16:27 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap constructer called" << std::endl;
	this->sethitpoints(100);
	this->setenergypoints(100);
	this->setattackdamage(30);
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
	this->setname(other.getname());
	this->sethitpoints(other.gethitpoints());
	this->setenergypoints(other.getenergypoints());
	this->setattackdamage(other.getattackdamage());
	return (*this);
}
