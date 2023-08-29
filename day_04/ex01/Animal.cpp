/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:43:07 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 12:49:47 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Animal::Animal() : type("no-type")
{
	std::cout << "Animal constructer called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copy constructer called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructer called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "Animal " << this->type << " make sound." << std::endl;
}

const std::string &Animal::getType( void ) const
{
	return (this->type);
}
