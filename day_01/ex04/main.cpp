/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 15:07:08 by yrhiba            #+#    #+#             */
/*   Updated: 2023/06/25 17:47:52 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string
replace(std::string line, std::string s1, std::string s2)
{
	std::string r;
	size_t	i = 0, j;

	if (s1.empty())
		return (line);

	while (i < line.size())
	{
		j = 0;
		while (line[i + j] && line[i + j] == s1[j])
			j++;
		if (j >= s1.size())
		{
			r += s2;
			i += j;
		}
		else
			r += line[i++];
	}
	return (r);
}

static void
sed(std::string file, std::string s1, std::string s2)
{
	std::ifstream infile(file);

	if (!infile)
	{
		std::cout << "can't open file!" << std::endl;
		return ;
	}

	std::cout << "input file opened with success!" << std::endl;

	std::ofstream oufile(file + ".replace");

	if (!oufile)
	{
		std::cout << "can't creat output file!" << std::endl;
		infile.close();
		return ;
	}

	std::cout << "output file created with success!" << std::endl;

	std::string line; 

	while (std::getline(infile, line))
		oufile << replace(line, s1, s2) << std::endl;

	infile.close();
	oufile.close();
}

int
main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "error::incorrect arguments." << std::endl, 0);
	return (sed(av[1], av[2], av[3]), 0);
}
