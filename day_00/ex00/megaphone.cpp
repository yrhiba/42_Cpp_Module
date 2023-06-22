/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:08:05 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/22 23:12:24 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

# define NOAV "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

std::string	upper_transform(const char *s)
{
	std::string	r;

	for (int i = 0; s[i]; i++)
		r += toupper(s[i]);
	return (r);
}

int main(int ac, char **av)
{
	std::string o;

	if (ac <= 1)
		return (std::cout << NOAV << std::endl, 0);
	for (int i = 1; i < ac; i++)
	{
		o += upper_transform(av[i]);
		if (i + 1 < ac)
			o += (char)(32);
	}
	return (std::cout << o << std::endl, 0);
}
