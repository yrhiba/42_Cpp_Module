/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:41:35 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 22:18:09 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), target("unknown")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
: AForm("RobotomyRequestForm", 72, 45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: AForm(other), target(other.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	*((AForm *)this) = *((AForm *)&other);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getRequireGradeToExec())
		throw RobotomyRequestForm::GradeTooLowException();

	if (!this->getIsSigned())
		throw RobotomyRequestForm::SignException();

	if (rand()%2)
	{
		std::cout << this->target << " has been robotomized successfull." << std::endl;
	}
	else
	{
		std::cout << "the robotomy failed." << std::endl;
	}
}
