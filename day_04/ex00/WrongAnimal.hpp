/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:40:28 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/28 14:30:59 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WANIMAL
# define WANIMAL

#include "header.hpp"


class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);

	void makeSound( void ) const;
	const std::string &getType( void ) const;
};

#endif
