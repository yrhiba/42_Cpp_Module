/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:37:00 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/29 13:02:51 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
# define BRAIN

#include "header.hpp"

struct Brain
{
	std::string	*ideas;
	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
};

#endif
