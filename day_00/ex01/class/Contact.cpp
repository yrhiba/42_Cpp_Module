/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:02:58 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/24 14:52:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact()
{
}

std::string Contact::ziptoten(const std::string &s)
{
	std::string r;

	if (s.size() <= 10)
		return (s);
	r = s.substr(0, 9) + ".";
	return (r);
}

void Contact::setdata(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _darkest_secret)
{
	this->first_name = _first_name;
	this->last_name = _last_name;
	this->nickname = _nickname;
	this->phone_number = _phone_number;
	this->darkest_secret = _darkest_secret;
}

void	Contact::print_info(int index)
{
	std::cout << std::right;

	std::cout.width(10);
	std::cout << index << "|";
	std::cout.width(10);
	std::cout << ziptoten(this->first_name) << "|";
	std::cout.width(10);
	std::cout << ziptoten(this->last_name) << "|";
	std::cout.width(10);
	std::cout << ziptoten(this->nickname) << std::endl;
}

void	Contact::print_allinfo()
{
	std::cout << "first name :" << this->first_name << std::endl;
	std::cout << "last name :" << this->last_name << std::endl;
	std::cout << "nickname :" << this->nickname << std::endl;
	std::cout << "phonenumber :" << this->phone_number << std::endl;
	std::cout << "darkset secret :" << this->darkest_secret << std::endl;
}

Contact::~Contact()
{
}
