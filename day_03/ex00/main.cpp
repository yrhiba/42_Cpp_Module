/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 01:39:56 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/24 02:21:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("yahya"), b("ziko");

	a.attack("ziko");
	b.takeDamage(10);

	b.attack("yahya");
	a.takeDamage(10);
	return (0);
}
