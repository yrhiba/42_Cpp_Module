/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:25:58 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/06 00:11:22 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <iomanip>
#include <exception>
#include <string>

class Bureaucrat
{
private:
	static const int highestGrade = 1;
	static const int lowestGrade = 150;
	const	std::string name;
	int		grade;

	class GradeTooHighException : public std::exception
	{
		private:
			std::string msg;

		public:
			GradeTooHighException(std::string _msg) throw();
			const char* what() const throw();
			~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::exception
	{
		private:
			std::string msg;

		public:
			GradeTooLowException(std::string _msg) throw();
			~GradeTooLowException() throw();
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
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif
