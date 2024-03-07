/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:52:58 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 16:08:32 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM
# define AFORM

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
	AForm();
	AForm(std::string _name, int requiredGradeToSign, int requiredGradeToExec);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	~AForm();
	//
	std::string getName(void) const;
	bool getIsSigned(void) const;
	int getRequireGradeToSign(void) const;
	int getRequireGradeToExec(void) const;
	//
	void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);

#endif
