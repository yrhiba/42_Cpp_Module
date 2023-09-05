/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:22:24 by yrhiba            #+#    #+#             */
/*   Updated: 2023/09/05 09:43:52 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

#include <iostream>

class Fixed
{
private:
	int					integer;
	static const int	bits = 8;

public:
	Fixed();

	Fixed(const Fixed &other);

	void operator=(const Fixed &x);

	~Fixed();

	int getRawBits( void ) const;

	void setRawBits( int const raw );
};

#endif
