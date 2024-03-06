/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:01:27 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/06 22:39:18 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: name("unknown"), grade(Bureaucrat::lowestGrade)
{
}

void Bureaucrat::checkGrade( void )
{
	if (this->grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();

	if (this->grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string _name, int _grade)
: name(_name), grade(_grade)
{
	this->checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
: name(other.name), grade(other.grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName( void ) const
{
	return this->name;
}

int Bureaucrat::getGrade( void ) const
{
	return this->grade;
}

void Bureaucrat::upgrade( void )
{
	this->grade -= 1;
	this->checkGrade();
}

void Bureaucrat::degrade( void )
{
	this->grade += 1;
	this->checkGrade();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too tow";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (os);
}

void Bureaucrat::signForm(Form &form) const
{
	if (this->grade > form.getRequireGradeToSign())
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
		std::cout << "grade to low." << std::endl;
		return ;
	}
	//
	if (form.getIsSigned())
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because ";
		std::cout << "form already signed" << std::endl;
		return ;
	}
	//
	form.beSigned(*this);
	std::cout << this->getName() << " signed " << form.getName() << std::endl;
}
