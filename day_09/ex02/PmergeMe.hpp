/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:54:49 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/18 10:59:15 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <iostream>
# include <algorithm>
# include <utility>
# include <iomanip>

class PmergeMe
{
private:


public:
	template<typename T>
	static void sort(T &c)
	{
		typedef typename T::iterator iterator;

		for (iterator it = c.begin(); it != c.end(); it++)
		{
			std:cout << *it << " ";
		}
		//
		std::cout << std::endl;
	}
};



#endif
