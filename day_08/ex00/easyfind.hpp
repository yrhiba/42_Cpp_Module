/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 01:23:58 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/14 01:32:38 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
int easyfind(T &ints_container, int value)
{
	typename T::iterator it;
	//
	it = std::find(ints_container.begin(), ints_container.end(), value);
	//
	if (it != ints_container.end()) return (it - ints_container.begin());
	//
	return (-1); // error (don't find such value)
}

#endif
