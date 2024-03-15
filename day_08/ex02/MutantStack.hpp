/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 05:36:29 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/15 21:25:39 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <cstdlib>
# include <algorithm>
# include <utility>
# include <deque>
# include <stack>

template<typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
public:
	typedef typename C::iterator		iterator;
	typedef typename C::const_iterator	const_iterator;
	typedef typename C::reverse_iterator		reverse_iterator;
	typedef typename C::const_reverse_iterator	const_reverse_iterator;

	explicit MutantStack() : std::stack<T, C>() {
	};

	iterator begin()
	{
		return this->c.begin();
	}

	const_iterator begin() const
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	const_iterator end() const
	{
		return this->c.end();
	}

	reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}

	const_reverse_iterator rbegin() const
	{
		return this->c.rbegin();
	}

	reverse_iterator rend()
	{
		return this->c.rend();
	}

	const_reverse_iterator rend() const
	{
		return this->c.rend();
	}

	const_iterator cbegin() const
	{
		return this->c.cbegin();
	}

	const_iterator cend() const
	{
		return this->c.cend();
	}

	const_reverse_iterator crbegin() const	
	{
		return this->c.crbegin();
	}

	const_reverse_iterator crend() const
	{
		return this->c.crend();
	}
};

#endif
