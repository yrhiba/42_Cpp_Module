/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 02:52:21 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 14:08:35 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV
# define SCAV

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(std::string _name);
	~ScavTrap();

	ScavTrap(const ScavTrap &other);

	ScavTrap &operator=(const ScavTrap &other);

	void attack(const std::string &target);
	void guardGate( void );
};

#endif
