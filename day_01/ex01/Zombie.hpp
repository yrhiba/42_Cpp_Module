/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:43:31 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 03:23:17 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
# define __ZOMBIE__

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie ();

	void	setname(std::string _name);

	void	annouce(void);

	~Zombie();

};

#endif
