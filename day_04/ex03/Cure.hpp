/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:49:31 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/07 13:15:08 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE
# define CURE

#include "header.hpp"

class Cure : public AMateria
{
puble(ic:
	Cur);
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	~Cure();

	AMateria *clone() const;
};

#endif
