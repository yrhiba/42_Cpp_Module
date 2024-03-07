/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 22:07:07 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 22:10:45 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), target("unknown")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
: AForm("PresidentialPardonForm", 25, 5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: AForm(other), target(other.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	*((AForm *)this) = *((AForm *)&other);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getRequireGradeToExec())
		throw PresidentialPardonForm::GradeTooLowException();

	if (!this->getIsSigned())
		throw PresidentialPardonForm::SignException();

	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
