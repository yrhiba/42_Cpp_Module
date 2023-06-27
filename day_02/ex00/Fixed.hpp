/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 00:22:24 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/27 00:32:34 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED__
# define __FIXED__

#include <iostream>
#include <vector>

class Fixed
{
public:
	// Fixed();
	// Fixed(const Fixed&);
	// ~Fixed();
	static const int	fixed_bits = 8;
private:
	int					fixed_point;
};

#endif
