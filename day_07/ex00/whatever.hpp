/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:56:11 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 19:03:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
# define WHATEVER

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(const T &a, const T &b)
{
	if (a < b) return a;
	return b;
}

template<typename T>
T max(const T &a, const T &b)
{
	if (a > b) return a;
	return b;
}

#endif
