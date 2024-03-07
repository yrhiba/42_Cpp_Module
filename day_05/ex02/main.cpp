/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:27:15 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 22:04:33 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	srand(time(0));

	Bureaucrat a("A-Beraucrat", 1);

	AForm *form = new ShrubberyCreationForm("yahya");
	AForm *form2 = new RobotomyRequestForm("ziko");

	a.signForm(*form);
	a.signForm(*form2);


	form->execute(a);
	form2->execute(a);

	std::cout << *form << std::endl;
	std::cout << *form2 << std::endl;

	delete form;
	delete form2;

	return (0);
}
