/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:04:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:24:55 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Dog::Dog()
{
	std::cout << "Dog constructer called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructer called" << std::endl;
	this->type = other.type;
}

Dog::~Dog()
{
	std::cout << "Dog destructer called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Dog Animal `" << this->type << "` make sound." << std::endl;
}
