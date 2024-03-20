/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:43:09 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/20 03:09:11 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

# define DATABASE_PATH "./cpp_09/data.csv"

# include <iostream>
# include <string>
# include <vector>
# include <map>
# include <algorithm>
# include <fstream>
# include <exception>
# include <utility>
# include <iomanip>
# include <sstream>
# include <cmath>
# include <cstdlib>
# include <ctime>

class ErrorExp : public std::exception
{
private:
	std::string msg;
public:
	ErrorExp(std::string _msg) : msg(_msg) {};
	~ErrorExp() throw() {};
	//
	const char* what() const throw() {
		return msg.c_str();
	}
};

std::string read_data_err[] =
{
	"no-errorr", // 0
	"invalid date", // 1
	"invalid exchange rate", // 2
	"reading file fail", // 3
	"invalid line syntax", // 4
	"db: can't find suitable date", // 5
};

int	month_days[] = 
{
	31, // month 1
	29, // month 2 (28 in No-Leap-Year)
	31, // month 3
	30, // month 4
	31, // month 5
	30, // month 6
	31, // month 7
	31, // month 8
	30, // month 9
	31, // month 10
	30, // month 11
	31 // month 12
};

#endif
