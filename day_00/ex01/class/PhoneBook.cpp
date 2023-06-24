/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:31:46 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/24 15:00:39 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contacts_count = 0;
	this->_x = 0;
}

void	PhoneBook::add()
{
	std::cout << "Please fill all the form bellow:" << std::endl;

	std::string fn, ln, nm, pn, ds;

	std::cout << "first name: "; std::getline(std::cin, fn);
	std::cout << "last name: "; std::getline(std::cin, ln);
	std::cout << "nickname: "; std::getline(std::cin, nm);
	std::cout << "phone number: "; std::getline(std::cin, pn);
	std::cout << "darkset secret: "; std::getline(std::cin, ds);

	if (fn.empty() || ln.empty() || nm.empty() || pn.empty() || ds.empty())
	{
		std::cout << "Erorr:: All fields Must be not empty." << std::endl;
		return ;
	}

	this->contacts[this->_x].setdata(fn, ln, nm, pn, ds);
	if (++(this->_x) >= 8) this->_x = 0;
	if (this->contacts_count <= 7) this->contacts_count += 1;
}

void	PhoneBook::shearch()
{
	for (int i = 0; i < this->contacts_count; i++)
		this->contacts[i].print_info(i + 1);

	std::cout << "Please enter an index that you are looking for:" << std::endl;

	std::string line; std::getline(std::cin, line);

	int	index;

	try
	{
		index = stoi(line);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error, Invalid Index." << std::endl;
		return ;
	};

	if (index <= 0 || index > this->contacts_count)
	{
		std::cout << "Invalid Index." << std::endl;
		return ;
	}
	this->contacts[index-1].print_allinfo();
}

PhoneBook::~PhoneBook()
{
}
