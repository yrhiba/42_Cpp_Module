/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:43:07 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:30:01 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

WrongAnimal::WrongAnimal() : type("no-type")
{
	std::cout << "WrongAnimal constructer called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructer called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructer called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal " << this->type << " make sound." << std::endl;
}

const std::string &WrongAnimal::getType( void ) const
{
	return (this->type);
}

