/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:04:11 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 12:54:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Cat::Cat()
{
	std::cout << "Cat constructer called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructer called" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
}

Cat::~Cat()
{
	std::cout << "Cat destructer called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "cat operator overlood called" << std::endl;
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "Cat Animal `" << this->type << "` make sound." << std::endl;
}
