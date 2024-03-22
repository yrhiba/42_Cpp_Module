/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:46:07 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 02:33:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

void convert(std::string to_convert)
{
	//
	ScalarConverter::convert(to_convert);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error. (Bad Args Count)" << std::endl;
		return (0);
	}
	//
	std::cout << std::fixed << std::setprecision(1);
	//
	for (int i = 1; i < ac; i++) convert(static_cast<std::string>(av[i]));
	//
	return (0);
}
