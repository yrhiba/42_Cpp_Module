/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:48:17 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/11 22:39:25 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
# define ARRAY

# include <exception>
# include <stdexcept>
# include <string>

template<typename T>
class Array
{
private:
	//
	size_t	_n;
	T		*arr;

	class OutOfRangeException : public std::out_of_range
	{
		public:
			OutOfRangeException(std::string s) : std::out_of_range(s)
			{
			}
	};

public:
	Array() : _n(0), arr(nullptr)
	{
	}

	Array(size_t n) : _n(n), arr(new T[n])
	{
		for (size_t i = 0; i < this->_n; i++) this->arr[i] = T();
	}

	Array(const Array &other) : _n(0), arr(nullptr)
	{
		*this = other;
	}

	Array &operator=(const Array &other)
	{
		if (this->_n) delete[] this->arr;
		//
		this->_n = other._n;
		//
		if (this->_n)
		{
			this->arr = new T[this->_n];
			for (size_t i = 0; i < this->_n; i++) this->arr[i] = other.arr[i];
		}
		return *this;
	}

	~Array()
	{
		delete[] this->arr;
	}

	T &operator[](size_t idx)
	{
		if (idx >= this->_n) throw Array::OutOfRangeException("out of range.");
		return this->arr[idx];
	}

	size_t size(void) const
	{
		return this->_n;
	}
};

#endif
