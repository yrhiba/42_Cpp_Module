/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:27:15 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/07 16:34:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat a("A-Beraucrat", 10);
	AForm f("X-form", 10, 5);
	std::cout << f << std::endl;
	// f.beSigned(a);
	a.signForm(f);
	std::cout << f << std::endl;
	std::cout << a << std::endl;
	return (0);
}
