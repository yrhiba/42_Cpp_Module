/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:03:38 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 21:24:30 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <iostream>
# include <fstream>
# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("ShrubberyCreationForm", 145, 137), target("unknown")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
: AForm("ShrubberyCreationForm", 145, 137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: AForm(other), target(other.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	*((AForm *)this) = *((AForm *)&other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getRequireGradeToExec())
		throw ShrubberyCreationForm::GradeTooLowException();

	if (!this->getIsSigned())
		throw ShrubberyCreationForm::SignException();

	std::ofstream file(target + "_shrubbery");

	std::string tree[] = {	"                                                         .",
							"                                              .         ;",
							"                 .              .              ;%     ;;",
							"                   ,           ,                :;%  %;",
							"                    :         ;                   :;%;'     .,",
							"           ,.        %;     %;            ;        %;'    ,;",
							"             ;       ;%;  %%;        ,     %;    ;%;    ,%'",
							"              %;       %;%;      ,  ;       %;  ;%;   ,%;' ",
							"               ;%;      %;        ;%;        % ;%;  ,%;'",
							"                `%;.     ;%;     %;'         `;%%;.%;'",
							"                 `:;%.    ;%%. %@;        %; ;@%;%'",
							"                    `:%;.  :;bd%;          %;@%;'",
							"                      `@%:.  :;%.         ;@@%;'   ",
							"                        `@%.  `;@%.      ;@@%;         ",
							"                          `@%%. `@%%    ;@@%;        ",
							"                            ;@%. :@%%  %@@%;       ",
							"                              %@bd%%%bd%%:;     ",
							"                                #@%%%%%:;;",
							"                                %@@%%%::;",
							"                                %@@@%(o);  . '         ",
							"                                %@@@o%;:(.,'         ",
							"                            `.. %@@@o%::;         ",
							"                               `)@@@o%::;         ",
							"                                %@@(o)::;        ",
							"                               .%@@@@%::;         ",
							"                               ;%@@@@%::;.          ",
							"                              ;%@@@@%%:;;;. ",
							"                          ...;%@@@@@%%:;;;;,..    yrhiba"
						};

	for (int i = 0; i < 28; i++) file << tree[i] << "\n";

	file.close();
}
