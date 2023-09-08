/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:38:16 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/08 22:15:36 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("no-name")
{
	// default constructer
	this->inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(const Character &other)
{
	// copy constructer
	this->inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] == nullptr)
		{
			this->inventory[i] = nullptr;
			continue;
		}
		this->inventory[i] = other.inventory[i]->clone();
	}
}

Character &Character::operator=(const Character &other)
{
	// copy assignment ovelode operator
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
			delete this->inventory[i];

		if (other.inventory[i] == nullptr)
		{
			this->inventory[i] = nullptr;
			continue;
		}

		this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

Character::Character(const std::string &_name) : name(_name)
{
	// constructer with name arg
	this->inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::~Character()
{
	// deconstructer
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			delete inventory[i];
	}
	delete[] inventory;
}

// interface methodes
std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || this->inventory[idx] == nullptr)
		return ;
	this->inventory[idx]->use(target);
}

// guessing i need it
AMateria *Character::getMateria(int idx)
{
	if (idx >= 4 || idx < 0)
		return (nullptr);
	return (this->inventory[idx]);
}

bool Character::isInventoryFull() const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
			return (false);
	}
	return (true);
}

std::ostream &operator<<(std::ostream &stream, const ICharacter &character)
{
	// ostream opearator overlod
	stream << character.getName();
	return (stream);
}
