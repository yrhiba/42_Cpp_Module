/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 05:56:14 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 05:57:05 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon : Default Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon : Destructor Called" << std::endl;
}

const std::string &Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}
