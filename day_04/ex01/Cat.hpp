/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:02:16 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/09 04:43:03 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
# define CAT

#include "header.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat &other);
	virtual ~Cat();
	Cat &operator=(const Cat &other);
	void makeSound( void ) const;
};

#endif
