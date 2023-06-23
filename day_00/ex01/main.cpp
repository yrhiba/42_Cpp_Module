/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:37:52 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/23 01:53:00 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	PhoneBook phonebook;

	while (1)
	{
		std::string s;
		std::getline(std::cin, s);

		// if (s == "EXIT")
		// 	return (0);
		// else if (s == "ADD")
		// 	phonebook.add();
		// else if (s == "SEARCH")
		// 	phonebook.shearch();
		// else
		// 	std::cout << "command not found\n";

		std::cout << s << std::endl;
	}
	return (0);
}
