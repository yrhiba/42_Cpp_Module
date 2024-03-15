/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:38:50 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/15 05:29:52 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span()
:
_numbersSortedDecr(std::multiset<int, std::greater<int> >()),
_numbersSortedIncr(std::multiset<int>()),
_longestSpanAns(-1),
_shortestSpanAns(-1),
size(0),
maxSize(100000)
{
}

Span::Span(size_t _maxSize)
:
_numbersSortedDecr(std::multiset<int, std::greater<int> >()),
_numbersSortedIncr(std::multiset<int>()),
_longestSpanAns(-1),
_shortestSpanAns(-1),
size(0),
maxSize(_maxSize)
{
}

Span::Span(const Span &other)
:
_numbersSortedDecr(other._numbersSortedDecr),
_numbersSortedIncr(other._numbersSortedIncr),
_longestSpanAns(other._longestSpanAns),
_shortestSpanAns(other._shortestSpanAns),
size(other.size),
maxSize(other.maxSize)
{
}

Span &Span::operator=(const Span &other)
{
	this->_numbersSortedDecr = other._numbersSortedDecr;
	this->_numbersSortedIncr = other._numbersSortedIncr;
	this->_longestSpanAns = other._longestSpanAns;
	this->_shortestSpanAns = other._shortestSpanAns;
	this->size = other.size;
	this->maxSize = other.maxSize;
	//
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int _number)
{
	if (this->size == this->maxSize) throw std::exception();
	//
	this->_numbersSortedDecr.insert(_number);
	this->_numbersSortedIncr.insert(_number);
	//
	this->size += 1;
	//
	if (this->size < 2) return ;
	// update the longest Span
	this->_longestSpanAns = *(this->_numbersSortedDecr.begin()) - *(this->_numbersSortedIncr.begin());
	// update the shortest Span
	if (this->_numbersSortedDecr.count(_number) == 2)
	{
		this->_shortestSpanAns = 0;
		this->_numbersSortedDecr.erase(this->_numbersSortedDecr.find(_number));
		this->_numbersSortedIncr.erase(this->_numbersSortedIncr.find(_number));
		return ;
	}
	//
	std::multiset<int, std::greater<int> >::iterator nextDownIt;
	nextDownIt = this->_numbersSortedDecr.upper_bound(_number);
	if (nextDownIt != this->_numbersSortedDecr.end())
	{
		int curShort = _number - *nextDownIt;
		if ((this->size == 2) || (curShort < this->_shortestSpanAns)) this->_shortestSpanAns = curShort;
	}
	//
	std::multiset<int>::iterator nextUpIt;
	nextUpIt = this->_numbersSortedIncr.upper_bound(_number);
	if (nextUpIt != this->_numbersSortedIncr.end())
	{
		int curShort = *nextUpIt - _number;
		if ((this->size == 2) || (curShort < this->_shortestSpanAns)) this->_shortestSpanAns = curShort;
	}
}

int Span::shortestSpan(void) const
{
	if (size < 2) throw std::exception();
	return this->_shortestSpanAns;
}

int Span::longestSpan(void) const
{
	if (size < 2) throw std::exception();
	return this->_longestSpanAns;
}
