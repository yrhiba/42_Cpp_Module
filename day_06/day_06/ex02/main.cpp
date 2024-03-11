/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 03:39:54 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 04:02:18 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>
# include <cstdlib>
# include "Classes.hpp"

Base * generate(void)
{
	int value = rand() % 3;
	//
	if (value==0) return new A;
	if (value==1) return new B;
	//
	return new C;
}

void identify(Base* p)
{
	A *x = dynamic_cast<A*>(p);
	B *y = dynamic_cast<B*>(p);
	//
	if (x) std::cout << "A" << std::endl;
	else if (y) std::cout << "B" << std::endl;
	else std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try {
		A &xx = dynamic_cast<A&>(p);
		(void) xx;
		std::cout << "A" << std::endl;
	}
	catch (...) {}
	try {
		B &yy = dynamic_cast<B&>(p);
		(void) yy;
		std::cout << "B" << std::endl;
	}
	catch (...) {}
	try {
		C &zz = dynamic_cast<C&>(p);
		(void) zz;
		std::cout << "C" << std::endl;
	}
	catch (...) {}
}

int main()
{
	srand(time(nullptr));
	//
	Base *ptr = generate();
	//
	identify(ptr);
	//
	identify(*ptr);
	//
	delete ptr;
	return (0);
}
