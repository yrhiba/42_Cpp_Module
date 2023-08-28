/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:04:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:22:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cat::Cat()
{
	std::cout << "Cat constructer called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructer called" << std::endl;
	this->type = other.type;
}

Cat::~Cat()
{
	std::cout << "Cat destructer called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Cat Animal `" << this->type << "` make sound." << std::endl;
}
