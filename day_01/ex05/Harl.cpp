/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:55:32 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 18:35:15 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
	int	equal;

	equal	=	(level == "DEBUG") * 1;
	equal	+=	(level == "INFO") * 2;
	equal	+=	(level == "WARNING") * 3;
	equal	+=	(level == "ERROR") * 4;

	switch (equal)
	{
		case 1:
			this->debug();
			break;
		case 2:
			this->info();
			break;
		case 3:
			this->warning();
			break;
		case 4:
			this->error();
			break;
		default:
			std::cout << "Invalid Level." << std::endl;
			break;
	}
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
