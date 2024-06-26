/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:17:03 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/15 06:26:40 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <vector>
# include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	// int arr[] = {6, 3, 17, 9, 11};

	// sp.addNumber(arr, arr + 5);

	// std::vector<int> a;
	// for (int i = 0; i < 5; i++) a.push_back(arr[i]);

	// sp.addNumber(a.begin(), a.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//
	// for (int i = 0; i < 1e5; i++) sp.addNumber(i);

	// for (int i = 0; i < 1e5; i++)
	// {
	// 	sp.shortestSpan();
	// 	sp.longestSpan();
	// }

	return(0);
}
