/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:04:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 12:54:35 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Dog::Dog()
{
	std::cout << "Dog constructer called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructer called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Dog::~Dog()
{
	std::cout << "Dog destructer called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog &other)
{
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "Dog Animal `" << this->type << "` make sound." << std::endl;
}
