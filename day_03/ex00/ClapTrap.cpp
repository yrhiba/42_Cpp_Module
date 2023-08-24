/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:40:47 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 02:18:48 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string _name)
	: name(_name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Constructer called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructer called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
	name(other.getname()), 
	hit_points(other.gethitpoints()),
	energy_points(other.getenergypoints()),
	attack_damage(other.getattackdamage())
{
	std::cout << "Copy constructer called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->name = other.getname();
	this->hit_points = other.gethitpoints();
	this->energy_points = other.getenergypoints();
	this->attack_damage = other.getattackdamage();
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " Can't attack." << std::endl;
		return ;
	}
	this->hit_points -= 1;
	std::cout << "ClapTrap " << this->name << " attack " << target;
	std::cout << ", causing " << this->attack_damage << " points of damage!";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hit_points -= amount;
	if (this->hit_points < 0) this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " take damage of " << amount << ".";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " Can't beRepaired." << std::endl;
		return ;
	}
	this->hit_points -= 1;
	this->hit_points += amount;
}

std::string	ClapTrap::getname( void ) const
{
	return (this->name);
}

int			ClapTrap::gethitpoints( void ) const
{
	return (this->hit_points);
}

int 		ClapTrap::getenergypoints( void ) const
{
	return (this->energy_points);
}

int 		ClapTrap::getattackdamage( void ) const
{
	return (this->attack_damage);
}
