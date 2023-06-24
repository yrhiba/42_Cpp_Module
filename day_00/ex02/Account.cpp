/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:36:22 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/24 17:03:34 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account()
{
	std::cout << "Account Created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	std::cout << "Account Created amount : " << this->_amount << std::endl;
}

void	Account::displayAccountsInfos()
{
	std::cout << "print all accounts info." << std::endl;
}


void	Account::_displayTimestamp()
{
}

Account::~Account()
{
}
