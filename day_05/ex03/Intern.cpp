/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:54:32 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/08 18:31:42 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

const int Intern::formsSize = 3;

const std::string Intern::formsNames[Intern::formsSize] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

const Intern::Function Intern::formsPointerFunctions[Intern::formsSize] = {
	Function(&Intern::newShrubberyCreationForm),
	Function(&Intern::newRobotomyRequestForm),
	Function(&Intern::newPresidentialPardonForm)
};

AForm *Intern::newShrubberyCreationForm(std::string _target)
{
	return new ShrubberyCreationForm(_target);
}

AForm *Intern::newRobotomyRequestForm(std::string _target)
{
	return new RobotomyRequestForm(_target);
}

AForm *Intern::newPresidentialPardonForm(std::string _target)
{
	return new PresidentialPardonForm(_target);
}

AForm *Intern::makeForm(std::string formName, std::string formTarget)
{
	for (int i = 0; i < Intern::formsSize; i++)
		if (formName == Intern::formsNames[i])
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return formsPointerFunctions[i].newForm(formTarget);
		}
	//
	std::cout << formName << " don't exist. (Intern can't make new Form)!" << std::endl;
	return nullptr;
}

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}
