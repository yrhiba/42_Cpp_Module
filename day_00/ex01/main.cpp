/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:37:52 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/24 13:55:29 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	s;

	while (std::getline(std::cin, s))
	{
		if (s == "EXIT")
			return (0);
		else if (s == "ADD")
			phonebook.add();
		else if (s == "SEARCH")
			phonebook.shearch();
		else if (!(s.empty()))
			std::cout << "command not found\n";
	}
	return (0);
}
