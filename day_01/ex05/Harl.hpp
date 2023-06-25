/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:55:51 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 18:30:50 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL__
# define __HARL__

#include <iostream>
#include <string>

class Harl
{
public:
void complain( std::string level );
private:
void debug( void );
void info( void );
void warning( void );
void error( void );
};

#endif
