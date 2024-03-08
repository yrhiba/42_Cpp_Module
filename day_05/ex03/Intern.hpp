/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:18:29 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/08 18:41:34 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
# define INTERN

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	struct Function
	{
		AForm*(*newForm)(std::string);
		Function(AForm*(*_newForm)(std::string))
		: newForm(_newForm) {}
	};

	static AForm *newShrubberyCreationForm(std::string _target);
	static AForm *newRobotomyRequestForm(std::string _target);
	static AForm *newPresidentialPardonForm(std::string _target);

	static const int formsSize;
	static const std::string formsNames[];
	static const Function formsPointerFunctions[];

public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern();
	//
	AForm *makeForm(std::string formName, std::string formTarget);
};

#endif
