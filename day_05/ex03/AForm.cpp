/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:03:43 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 20:00:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm()
:
signeRequiredGrade(Bureaucrat::lowestGrade), execRequiredGrade(Bureaucrat::lowestGrade),
name("unknown"), isSigned(false) {}

AForm::AForm(std::string _name, int requiredGradeToSign, int requiredGradeToExec)
:
signeRequiredGrade(requiredGradeToSign),
execRequiredGrade(requiredGradeToExec), name(_name), isSigned(false)
{
	this->checkGrades();
}

AForm::AForm(const AForm &other)
:
signeRequiredGrade(other.signeRequiredGrade),
execRequiredGrade(other.execRequiredGrade), name(other.name), isSigned(other.isSigned)
{
}

AForm &AForm::operator=(const AForm &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

AForm::~AForm()
{
}

void AForm::checkGrades(void) const
{
	if (this->signeRequiredGrade > Bureaucrat::lowestGrade)
		throw AForm::GradeTooLowException();

	if (this->signeRequiredGrade < Bureaucrat::highestGrade)
		throw AForm::GradeTooHighException();
}

std::string AForm::getName(void) const
{
	return this->name;
}

bool AForm::getIsSigned(void) const
{
	return this->isSigned;
}

int AForm::getRequireGradeToSign(void) const
{
	return this->signeRequiredGrade;
}

int AForm::getRequireGradeToExec(void) const
{
	return this->execRequiredGrade;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getRequireGradeToSign())
		throw AForm::GradeTooLowException();
	//
	this->isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "grade too tow";
}

const char* AForm::SignException::what() const throw()
{
	return "form not signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << form.getName() << " Signed: " << (form.getIsSigned()?"yes":"no");
	os << ", Required Grades: sign(" << form.getRequireGradeToSign() << "), exec(";
	os << form.getRequireGradeToExec() << ").";
	return (os);
}
