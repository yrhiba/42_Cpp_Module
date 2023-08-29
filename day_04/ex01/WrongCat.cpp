/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:04:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:36:32 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructer called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructer called" << std::endl;
	this->type = other.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructer called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat Animal `" << this->type << "` make sound." << std::endl;
}
