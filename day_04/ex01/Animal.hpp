/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:40:28 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 12:32:36 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL
# define ANIMAL

#include "header.hpp"


class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();
	Animal &operator=(const Animal &other);

	virtual void makeSound( void ) const;
	const std::string &getType( void ) const;
};

#endif
