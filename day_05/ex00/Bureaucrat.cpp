/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:01:27 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/06 00:07:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: name("unknown"), grade(this->lowestGrade)
{
}

void Bureaucrat::checkGrade( void )
{
	if (this->grade < this->highestGrade)
		throw Bureaucrat::GradeTooHighException("Grade Too High");

	if (this->grade > this->lowestGrade)
		throw Bureaucrat::GradeTooLowException("Grade Too Low");
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

// ########## //
// EXCEPTIONS //
// ########## //

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string _msg) throw()
: msg(_msg)
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return this->msg.c_str();
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string _msg) throw()
: msg(_msg)
{
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return this->msg.c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}
