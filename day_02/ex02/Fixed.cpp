/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:22:04 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 01:09:48 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : integer(other.integer)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) : integer(value << this->bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : integer(roundf(value * (1 << this->bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

void Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->integer = other.integer;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->integer);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->integer = raw;
}

float Fixed::toFloat(void) const
{
	std::cout << "toFloat memeber function called" << std::endl;
	return ((this->integer * 1.0f) / (1.0f * (1 << this->bits)));
}

int Fixed::toInt(void) const
{
	std::cout << "toInt memeber function called" << std::endl;
	return (this->integer / (1 << this->bits));
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

bool Fixed::operator<(const Fixed &x) const
{
	return (this->integer < x.integer);
}

bool Fixed::operator>(const Fixed &x) const
{
	return (this->integer > x.integer);
}

bool Fixed::operator<=(const Fixed &x) const
{
	return (this->integer <= x.integer);
}

bool Fixed::operator>=(const Fixed &x) const
{
	return (this->integer >= x.integer);
}

bool Fixed::operator==(const Fixed &x) const
{
	return (this->integer == x.integer);
}

bool Fixed::operator!=(const Fixed &x) const
{
	return (this->integer != x.integer);
}

Fixed Fixed::operator+(const Fixed &x)
{
	return (Fixed(this->toFloat() + x.toFloat()));
}

Fixed Fixed::operator-(const Fixed &x)
{
	return (Fixed(this->toFloat() - x.toFloat()));
}

Fixed Fixed::operator*(const Fixed &x)
{
	return (Fixed(this->toFloat() * x.toFloat()));
}

Fixed Fixed::operator/(const Fixed &x)
{
	return (Fixed(this->toFloat() / x.toFloat()));
}

Fixed &Fixed::operator+=(const int x)
{
	this->integer += x;
	return (*this);
}

Fixed &Fixed::operator-=(const int x)
{
	this->integer -= x;
	return (*this);
}

Fixed &Fixed::operator++( void )
{
	this->integer++;
	return (*this);
}

Fixed &Fixed::operator--( void )
{
	this->integer--;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed tmp(*this);
	this->integer++;
	return (tmp);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp(*this);
	this->integer--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}
