/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:45:06 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/21 21:16:54 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

void err(std::string msg)
{
	std::cout << msg << std::endl;
	exit(0);
}

double pop(std::stack<double> &st)
{
	double v = st.top();
	st.pop();
	return v;
}

bool is_operator(std::string &s)
{
	return (s == "-" || s == "+" || s == "/" || s == "*");
}
