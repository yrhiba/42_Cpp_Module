/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:07:04 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/07 13:12:28 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &other)
{
}

Ice &Ice::operator=(const Ice &other)
{
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	return (new Ice());
}
