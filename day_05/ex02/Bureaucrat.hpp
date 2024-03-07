/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:25:58 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 22:21:09 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <iomanip>
#include <exception>
#include <string>
//
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const	std::string name;
	int		grade;

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	void checkGrade( void );

public:
	Bureaucrat();
	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	int getGrade( void ) const;
	std::string getName( void ) const;

	void upgrade( void );
	void degrade( void );

	void signForm(AForm &form) const;
	void executeForm(AForm const &form) const;

	static const int highestGrade = 1;
	static const int lowestGrade = 150;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
