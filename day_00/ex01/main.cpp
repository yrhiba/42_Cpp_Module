/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:37:52 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/23 02:50:00 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
	PhoneBook phonebook;

	while (1)
	{
		std::string s;
		if (!std::getline(std::cin, s))
			return (0);
		std::cout << "Entred line : " << s << std::endl;

		if (s == "EXIT")
			return (0);
		else if (s == "ADD")
		{
			if (!phonebook.add())
			{
				std::cout << "Erorr:: All fields must be no empty!\n";
				std::cout << "Contact was not add to The Phonebook\n";
				std::cout << "Please readd whit a valid values\n";
			}
		}
		else if (s == "SEARCH")
			phonebook.shearch();
		else if (s.empty())
			continue;
		else
			std::cout << "command not found\n";
	}
	return (0);
}