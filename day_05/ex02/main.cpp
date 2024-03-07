/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:27:15 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 21:39:19 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat a("A-Beraucrat", 1);

	AForm *form = new ShrubberyCreationForm("yahya");
	form->beSigned(a);

	std::cout << a << std::endl;
	std::cout << *form << std::endl;

	delete form;

	return (0);
}
