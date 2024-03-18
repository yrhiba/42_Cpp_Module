/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:43:09 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/18 00:47:19 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

# define DATABASE_PATH "./data.csv"

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

class ErrorExp : std::exception
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
	"invalid line syntax" // 4
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

bool	isLeapYear(int);

#endif

/*
bool validDates(vvd &data)
{
	std::time_t currentTime = std::time(NULL);
	std::tm* currentLocalTime = std::localtime(&currentTime);
	int year = currentLocalTime->tm_year + 1900;
	int month = currentLocalTime->tm_mon + 1;
	int day = currentLocalTime->tm_mday;
	//
	for (size_t i = 0; i < data.size(); i++)
	{
		int cyear = data[i][0];
		int cmonth = data[i][1];
		int cday = data[i][2];
		//
		if (cyear > year) return (false);
		else if (cyear == year)
		{
			if (cmonth > month) return (false);
			else if ((cmonth == month) && (cday > day)) return (false);
		}
		//
		if (cmonth < 1 || cmonth > 12) return (false);
		if (cday < 1 || cday > month_days[cmonth]) return (false);
		if (!isLeapYear(cyear) && cmonth == 2 && cday == 29) return (false);
	}
	return (true);
}
*/
