/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:54:49 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/21 21:21:51 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

# include <iostream>
# include <algorithm>
# include <utility>
# include <iomanip>
# include <list>
# include <deque>
# include <limits>
# include <sys/time.h>
# include <ctime>
# include <unistd.h>

namespace PmergeMe
{
	template<typename T>
	static void merge_sort(T &a)
	{
		if (a.size() <= 2)
		{
			if (a.size() == 2 && *a.begin() > *a.rbegin()) swap(*a.begin(), *a.rbegin());
			return ;
		}
		//
		T half;
		//
		for (size_t i = 0; i < a.size() / 2; i++)
		{
			half.push_back(a.back());
			a.pop_back();
		}
		//
		merge_sort(a);
		merge_sort(half);
		//
		T res;
		merge(a.begin(), a.end(), half.begin(), half.end(), std::back_inserter(res));
		//
		a = res;
		return ;
	}

	template<typename T>
	static T jacobSeq(int n)
	{
		T a;
		int i1 = 1;
		int i2 = 1;
		while (i2 < n)
		{
			int cur = i1 * 2 + i2;
			for (int i = std::min(n, cur); i > i2; i--) a.push_back(i - 1);
			i1 = i2;
			i2 = cur;
		}
		return a;
	}

	template<typename T, typename C>
	static void sort(T &c)
	{
		typedef typename T::iterator it;
		typedef typename C::iterator cit;
		//
		C a;
		//
		while (c.size() > 1)
		{
			int i = c.back(); c.pop_back();
			int j = c.back(); c.pop_back();
			//
			int mmax = std::max(i, j);
			int mmin = std::min(i, j);
			//
			a.push_back(std::make_pair(mmax, mmin));
		}
		//
		PmergeMe::merge_sort(a);
		//
		T s; // final sorted elements
		//
		for (cit i = a.begin(); i != a.end(); i++)
		{
			if (i == a.begin()) s.push_back(i->second);
			//
			s.push_back(i->first);
		}
		//
		T jacob = PmergeMe::jacobSeq<T>(a.size());
		//
		for (it i = jacob.begin(); i != jacob.end(); i++)
		{
			cit j = a.begin(); // looking for the current element to insert
			std::advance(j, *i);
			//
			it end = std::lower_bound(s.begin(), s.end(), j->first);
			//
			it t = std::lower_bound(s.begin(), end, j->second);
			s.insert(t, j->second);
		}
		//
		if (!c.empty())
		{
			it t = std::lower_bound(s.begin(), s.end(), c.back());
			s.insert(t, c.back());
		}
		//
		c = s;
	}
};

#endif
