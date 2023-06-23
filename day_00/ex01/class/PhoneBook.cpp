/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:46 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/23 02:26:21 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contacts_count = 0;
	this->_x = 0;
}

bool	PhoneBook::add()
{
	std::cout << "Please fill all the form bellow whit no empty string.\n";

	std::string fn, ln, nm, pn, ds;

	std::cout << "first name:"; std::getline(std::cin, fn);
	std::cout << "last name:"; std::getline(std::cin, ln);
	std::cout << "nickname:"; std::getline(std::cin, nm);
	std::cout << "phone number:"; std::getline(std::cin, pn);
	std::cout << "darkset secret:"; std::getline(std::cin, ds);

	if (fn.empty() || ln.empty() || nm.empty() || pn.empty() || ds.empty())
		return (false);
	this->contacts[this->_x].setdata(fn, ln, nm, pn, ds);
	if (++(this->_x) >= 8) this->_x = 0;
	if (this->contacts_count < 7) this->contacts_count += 1;
	return (true);
}

void	PhoneBook::shearch()
{
	for (int i = 0; i < this->contacts_count; i++)
	{
		std::cout << i << " -> ";
		this->contacts[i].print_info();
	}
}

PhoneBook::~PhoneBook()
{
}
