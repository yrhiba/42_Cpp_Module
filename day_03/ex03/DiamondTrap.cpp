/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:55:21 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 12:46:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("no_name")
{
	std::cout << "DiamondTrap Default constructer called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructer called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.getdiamondname())
{
	std::cout << "DiamondTrap Copy constructer called" << std::endl;
}

const std::string &DiamondTrap::getdiamondname( void ) const
{
	return (this->name);
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->DiamondTrap::name = other.getdiamondname();
	this->ClapTrap::name = other.getname();
	this->hit_points = other.gethitpoints();
	this->energy_points = other.getenergypoints();
	this->attack_damage = other.getattackdamage();
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string &_name):
ClapTrap(_name + "_clap_name"), name(_name)
{
	std::cout << "DiamondTrap paramter constructer called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 30;
}

void  DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}


void DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondName: " << this->name << std::endl;
	std::cout << "ClapTraName: " << this->ClapTrap::name << std::endl;
}
