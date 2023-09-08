/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:07:04 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/08 17:56:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &other)
{
}

Cure &Cure::operator=(const Cure &other)
{
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}