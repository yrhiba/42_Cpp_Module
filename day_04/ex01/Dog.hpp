/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:02:16 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/09 04:42:21 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG
# define DOG

#include "header.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog &other);
	virtual ~Dog();
	Dog &operator=(const Dog &other);

	void makeSound( void ) const;
};

#endif
