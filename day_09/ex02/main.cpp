/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:53:56 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/20 18:02:43 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

void err(std::string msg)
{
	std::cout << msg << std::endl;
	exit(0);
}

long long counttime(struct timeval &start, struct timeval &end)
{
	long long seconds = end.tv_sec - start.tv_sec;
	long long microseconds = end.tv_usec - start.tv_usec;
	long long duration = (seconds * 1e6) + microseconds;
	//
	return (duration);
}

int main(int ac, char **av)
{
	std::list<int> list;
	std::deque<int> deque;
	// Parsing Part
	for (int i = 1; i < ac; i++)
	{
		long long value = 0;
		//
		for (int j = 0; av[i][j]; j++)
		{
			if (!(std::isdigit(av[i][j]))) err(" error bad arguments");
			//
			value = (value * 10) + (av[i][j] - '0');
			//
			if (value > std::numeric_limits<int>::max()) err("error number too long");
		}
		//
		list.push_back(value);
		deque.push_back(value);
	}
	//
	std::cout << "Before: ";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) std::cout << *it << " ";
	std::cout << std::endl;
	// time vars
	struct timeval start_list, end_list, start_deque, end_deque;
	// sort list container
	gettimeofday(&start_list, NULL);
	PmergeMe::sort<std::list<int>, std::list< std::pair<int, int> > >(list);
	gettimeofday(&end_list, NULL);
	// sort deque container
	gettimeofday(&start_deque, NULL);
	PmergeMe::sort<std::deque<int>, std::deque< std::pair<int, int> > >(deque);
	gettimeofday(&end_deque, NULL);
	//
	std::cout << "After: ";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); it++) std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "After: ";
	for (std::deque<int>::iterator it = deque.begin(); it != deque.end(); it++) std::cout << *it << " ";
	std::cout << std::endl;
	//
	std::cout << "Time to process a range of " << list.size() << " elements with std::list : ";
	std::cout << counttime(start_list, end_list) << " us" << std::endl;
	//
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : ";
	std::cout << counttime(start_deque, end_deque) << " us" << std::endl;
	//
	return (0);
}
