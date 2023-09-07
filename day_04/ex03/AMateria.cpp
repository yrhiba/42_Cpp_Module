/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:23:20 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/07 13:22:39 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/* canolical methodes */

AMateria::AMateria()
{
	// nothing to do
}

AMateria::AMateria(const AMateria &other) : _type(other._type)
{
}

AMateria &AMateria::operator=(const AMateria &other)
{
	// nothing to do
}


AMateria::~AMateria()
{
	// nothing to do
}

/* giving methodes */

AMateria::AMateria(std::string const & type) : _type(type)
{
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
}
