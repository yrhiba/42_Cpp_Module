/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:52:21 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 09:47:18 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV
# define SCAV

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string _name);
	~ScavTrap();

	ScavTrap(const ScavTrap &other);

	ScavTrap &operator=(const ScavTrap &other);

	void attack(const std::string &target);
	void guardGate( void ) const ;
};

#endif
