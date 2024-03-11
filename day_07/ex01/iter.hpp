/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:09:31 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 20:20:08 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
# define ITER

template<typename T, typename F>
void iter(T *arr, size_t _size, F func)
{
	for (size_t i = 0; i < _size; i++) func(*(arr + i));
}

template<typename T>
void print(const T & e)
{
	std::cout << e << std::endl;
}

#endif
