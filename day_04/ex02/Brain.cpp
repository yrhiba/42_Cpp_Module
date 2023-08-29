/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:36:53 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 12:51:07 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructer called" << std::endl;
	this->ideas = new std::string[100];
}

Brain::~Brain()
{
	std::cout << "Brain destructer called" << std::endl;
	delete[] this->ideas;
}

Brain::Brain(const Brain &other)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}
