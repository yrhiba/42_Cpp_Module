/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:25:58 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/06 22:36:34 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <iomanip>
#include <exception>
#include <string>
//
#include "Form.hpp"

class Form;

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

	void signForm(Form &form) const;

	static const int highestGrade = 1;
	static const int lowestGrade = 150;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
