/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 03:36:18 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 03:42:28 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string		= "HI THIS IS BRAIN";
	std::string *stringPtr	= &string;
	std::string &stringRef	= string;

	std::cout << "Adrr Of string: " << &string << std::endl;
	std::cout << "Value Of stringPtr: " << stringPtr << std::endl;
	std::cout << "Adrr Of stringRef: " << &stringRef << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;

	return (0);
}
