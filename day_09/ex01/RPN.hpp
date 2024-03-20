/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:45:13 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/20 05:40:31 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN
# define _RPN

# include <iostream>
# include <stack>
# include <string>
# include <algorithm>
# include <utility>
# include <cstdlib>
# include <sstream>
# include <limits>
# include <iomanip>

bool is_operator(std::string &s);
double pop(std::stack<double> &st);
void err(std::string msg);

#endif
