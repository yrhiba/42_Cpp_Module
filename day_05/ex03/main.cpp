/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:27:15 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/08 18:39:20 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(0));

	Bureaucrat	bureaucrat("bureaucrat", 1);
	Intern		someRandomIntern;

	AForm* rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

	if (rrf)
	{
		bureaucrat.signForm(*rrf);
		bureaucrat.executeForm(*rrf);

		std::cout << *rrf << std::endl;

		delete rrf;
	}
	//
	return (0);
}
