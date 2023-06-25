/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 07:08:48 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 07:22:58 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HumanB_HPP_
#define _HumanB_HPP_

#include <iostream>

class	HumanB
{
	public	:
		HumanB (std::string _name);
		~HumanB ();
		void	attack(void);
		void setWeapon(Weapon &_weapon);

	private	:
		Weapon		*weapon;
		std::string	name;
};

#endif
