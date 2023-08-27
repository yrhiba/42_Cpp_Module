/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:53:55 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/27 12:46:17 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND
# define DIAMOND

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;

public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);

	DiamondTrap(const std::string &_name);

	void whoAmI();
	void attack(const std::string &target);
	const std::string &getdiamondname( void ) const;
};


#endif
