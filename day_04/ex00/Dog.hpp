/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:02:16 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:37:21 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG

#include "header.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &other);
	~Dog();
	Dog &operator=(const Dog &other);

	void makeSound( void ) const;
};

#endif
