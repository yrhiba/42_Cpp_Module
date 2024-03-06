/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:03:43 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/06 22:28:09 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"


Form::Form()
:
signeRequiredGrade(Bureaucrat::lowestGrade), execRequiredGrade(Bureaucrat::lowestGrade),
name("unknown"), isSigned(false) {}

Form::Form(std::string _name, int requiredGradeToSign, int requiredGradeToExec)
:
signeRequiredGrade(requiredGradeToSign),
execRequiredGrade(requiredGradeToExec), name(_name), isSigned(false)
{
	this->checkGrades();
}

Form::Form(const Form &other)
:
signeRequiredGrade(other.signeRequiredGrade),
execRequiredGrade(other.execRequiredGrade), name(other.name), isSigned(other.isSigned)
{
}

Form &Form::operator=(const Form &other)
{
	this->isSigned = other.isSigned;
	return (*this);
}

Form::~Form()
{
}

void Form::checkGrades(void) const
{
	if (this->signeRequiredGrade > Bureaucrat::lowestGrade)
		throw Form::GradeTooLowException();

	if (this->signeRequiredGrade < Bureaucrat::highestGrade)
		throw Form::GradeTooHighException();
}

std::string Form::getName(void) const
{
	return this->name;
}

bool Form::getIsSigned(void) const
{
	return this->isSigned;
}

int Form::getRequireGradeToSign(void) const
{
	return this->signeRequiredGrade;
}

int Form::getRequireGradeToExec(void) const
{
	return this->execRequiredGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getRequireGradeToSign())
		throw Form::GradeTooLowException();
	//
	this->isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too tow";
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << " Signed: " << (form.getIsSigned()?"yes":"no");
	os << ", Required Grades: sign(" << form.getRequireGradeToSign() << "), exec(";
	os << form.getRequireGradeToExec() << ")." << std::endl;
	return (os);
}
