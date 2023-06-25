/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:42:26 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 03:30:51 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name );

# define SIZE 10

int main()
{
	Zombie *z = zombieHorde(SIZE, "zombieX");

	for (int i = 0; i < SIZE; i++)
		z[i].annouce();

	delete[] z;
	return (0);
}
