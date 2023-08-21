/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:22:24 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 01:07:49 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

#include <iostream>
#include <vector>
#include <cmath>

class Fixed
{
private:
	int					integer;
	static const int	bits = 8;

public:
	Fixed();

	Fixed(const Fixed &other);

	Fixed(const int value);

	Fixed(const float value);

	float toFloat(void) const;

	int toInt(void) const;

	void operator=(const Fixed &x);

	~Fixed();

	int getRawBits( void ) const;

	void setRawBits( int const raw );

	bool operator<(const Fixed &x) const ;
	bool operator>(const Fixed &x) const ;
	bool operator<=(const Fixed &x) const ;
	bool operator>=(const Fixed &x) const ;
	bool operator==(const Fixed &x) const ;
	bool operator!=(const Fixed &x) const ;

	Fixed operator+(const Fixed &x);
	Fixed operator-(const Fixed &x);
	Fixed operator*(const Fixed &x);
	Fixed operator/(const Fixed &x);

	Fixed &operator+=(const int x);
	Fixed &operator-=(const int x);
	Fixed operator++(int x);
	Fixed operator--(int x);
	Fixed &operator++(void);
	Fixed &operator--(void);


	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif
