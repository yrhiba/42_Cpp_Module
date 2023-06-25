/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:55:32 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 22:16:26 by yrhiba           ###   ########.fr       */
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
			this->info();
			this->warning();
			this->error();
			break;
		case 2:
			this->info();
			this->warning();
			this->error();
			break;
		case 3:
			this->warning();
			this->error();
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}
void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}
void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}
void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
