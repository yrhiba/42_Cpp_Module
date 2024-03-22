/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 02:45:46 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 03:20:48 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Data.hpp"
# include "Serializer.hpp"

int main()
{
	Data data;
	//
	data.a = 10;
	data.b = 3.23f;
	data.c = 'A';
	data.x = true;
	//
	uintptr_t p = Serializer::serialize(&data);
	//
	std::cout << "Unsigned Interger Pointer: " << p << std::endl;
	//
	Data *q = Serializer::deserialize(p);
	//
	std::cout << data.a << " " << q->a << std::endl;
	std::cout << data.b << " " << q->b << std::endl;
	std::cout << data.c << " " << q->c << std::endl;
	std::cout << data.x << " " << q->x << std::endl;
	//
	return (0);
}
