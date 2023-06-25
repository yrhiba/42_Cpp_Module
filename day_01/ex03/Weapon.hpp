/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 05:56:10 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 07:20:28 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Weapon_HPP_
#define _Weapon_HPP_

#include <iostream>

class	Weapon
{
	public	:
		Weapon (std::string _type);
		~Weapon ();

		const std::string &getType();
		void	setType(std::string _type);

	private	:
		std::string type;

};

#endif
