/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 04:44:42 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/21 21:17:52 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error: bad arguments" << std::endl;
		return (0);
	}
	//
	std::stack<double> st;
	//
	std::stringstream ss(av[1]);
	std::string s;
	while (ss >> s)
	{
		if (is_operator(s))
		{
			if (st.size() < 2) err("error: bad argument");
			//
			double v1 = pop(st), v2 = pop(st);
			//
			std::swap(v1, v2);
			//
			if (s == "+") st.push(v1 + v2);
			else if (s == "-") st.push(v1 - v2);
			else if (s == "/")
			{	
				if (v2 != 0) st.push(v1 / v2);
				else err("error division by 0 not defined");
			}
			else if (s == "*") st.push(v1 * v2);
		}
		else
		{
			long long sign = 1;
			long long value = 0;
			for (size_t i = 0; i < s.size(); i++)
			{
				if (!i && s[i] == '-') sign = -1;
				else
				{
					if (!(std::isdigit(s[i]))) err("error bad argument");
					//
					value = (value * 10) + (s[i] - '0');
					//
					if ((value * sign) < (long long)std::numeric_limits<int>::min()
						|| (value * sign) > (long long)std::numeric_limits<int>::max())
							err("error bad argument, number too long");
					//
				}
			}
			st.push(value * sign);
		}
	}
	if (st.size() != 1) err("bad RPN sequence");
	std::cout << std::fixed << std::setprecision(2) << st.top() << std::endl;
	return (0);
}
