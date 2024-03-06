/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:52:58 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/06 20:52:14 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM
# define FORM

# include "Bureaucrat.hpp"

class Form
{
private:
	const int signeRequiredGrade;
	const int execRequiredGrade;
	//
	const	std::string name;
	bool	isSigned;
	//
	void checkGrades(void) const;
	//
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	//
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};

public:
	Form();
	Form(std::string _name, int requiredGradeToSign, int requiredGradeToExec);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();
	//
	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getRequireGradeToSign(void) const;
	int getRequireGradeToExec(void) const;
	//
	void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
