/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 22:39:25 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/09 04:19:28 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	this->inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != nullptr)
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
			delete this->inventory[i];
	}

	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] != nullptr)
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if ((this->inventory)[i] != nullptr)
			delete inventory[i];
	}
	delete[] this->inventory;
}


// interfaces methodes
void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia == nullptr)	return ;

	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == materia)
			return ;
	}

	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = materia;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr && type == this->inventory[i]->getType())
			return (this->inventory[i]->clone());
	}
	return (nullptr);
}

// guess i need to
bool MateriaSource::isInventoryFull(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
			return (false);
	}
	return (true);
}
