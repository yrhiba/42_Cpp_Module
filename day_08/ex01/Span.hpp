/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:17:41 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/15 05:31:53 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
# define SPAN

# include <vector>
# include <set>
# include <algorithm>
# include <utility>
# include <cstdlib>
# include <cmath>

class Span
{
private:
	std::multiset<int, std::greater<int> >	_numbersSortedDecr;
	std::multiset<int>						_numbersSortedIncr;
	//
	int	_longestSpanAns;
	int	_shortestSpanAns;
	//
	size_t	size;
	size_t	maxSize;

public:
	//
	Span();
	Span(size_t _maxSize);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	//
	void addNumber(int _number);
	//
	int shortestSpan(void) const;
	int longestSpan(void) const;
	//
	template<typename T>
	void addNumber(T beginIt, T endIt);
};

template<typename T>
void Span::addNumber(T beginIt, T endIt)
{
	for (T it = beginIt; it != endIt; it++) this->addNumber(*it);
}

#endif
