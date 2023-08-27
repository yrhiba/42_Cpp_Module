/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:02:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 09:47:04 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG
# define FRAG

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();

	FragTrap(const FragTrap &other);

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys( void );
};

#endif
