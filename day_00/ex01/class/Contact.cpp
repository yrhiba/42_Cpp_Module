/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 00:02:58 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/23 00:31:55 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string	_darkest_secret)
{
	this->first_name = _first_name;
	this->last_name = _last_name;
	this->nickname = _nickname;
	this->phone_number = _phone_number;
	this->darkest_secret = _darkest_secret;
}

Contact::~Contact()
{
}
