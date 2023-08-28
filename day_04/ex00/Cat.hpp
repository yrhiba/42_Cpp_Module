/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:02:16 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:37:09 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT

#include "header.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat &operator=(const Cat &other);

	void makeSound( void ) const;
};

#endif
