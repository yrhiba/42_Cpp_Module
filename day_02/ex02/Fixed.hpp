/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:22:24 by yrhiba            #+#    #+#             */
/*   Updated: 2023/08/21 00:21:57 by yrhiba           ###   ########.fr       */
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

	bool operator<(const Fixed &x);
	bool operator>(const Fixed &x);
	bool operator<=(const Fixed &x);
	bool operator>=(const Fixed &x);
	bool operator==(const Fixed &x);
	bool operator!=(const Fixed &x);

	Fixed operator+(const Fixed &x);
	Fixed operator-(const Fixed &x);
	Fixed operator*(const Fixed &x);
	Fixed operator/(const Fixed &x);




};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif
