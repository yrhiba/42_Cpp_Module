/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:27:15 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 22:27:08 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand(time(0));

	Bureaucrat a("A-Beraucrat", 1);

	AForm *form = new ShrubberyCreationForm("yahya");
	AForm *form2 = new RobotomyRequestForm("ziko");
	AForm *form3 = new PresidentialPardonForm("aloene");

	// a.signForm(*form);
	// a.signForm(*form2);
	// a.signForm(*form3);

	a.executeForm(*form);
	a.executeForm(*form2);
	a.executeForm(*form3);

	std::cout << *form << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << *form3 << std::endl;

	delete form;
	delete form2;
	delete form3;

	return (0);
}
