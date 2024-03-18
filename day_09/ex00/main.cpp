/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:36:23 by yrhiba            #+#    #+#             */
/*   Updated: 2024/03/18 00:48:10 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

bool	isLeapYear(int year)
{
	return ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
}

std::vector<std::string> split(std::string s, char delim)
{
	std::stringstream ss(s);
	std::vector<std::string> strs;
	std::string cur;
	while (std::getline(ss, cur, delim)) strs.push_back(cur);
	return strs;
}

std::string trim(std::string s)
{
	std::stringstream ss(s);
	std::vector<std::string> strs;
	std::string x;
	while (ss >> x && strs.size() <= 1) strs.push_back(x);
	if (strs.size() > 1) return std::string();
	return x;
}

int to_number(std::string s)
{
	std::string x = trim(s);
	//
	if (x.empty()) return (-1);
	//
	int value = 0;
	for (size_t i = 0; i < x.size(); i++)
	{
		if (!(std::isdigit(x[i]))) return (-1);
		value = value * 10 + (x[i] - '0');
	}
	return value;
}

bool isValidDate(int y, int m, int d)
{
	std::time_t	currentTime = std::time(NULL);
	std::tm*	currentLocalTime = std::localtime(&currentTime);
	//
	int local_year = currentLocalTime->tm_year + 1900;
	int local_month = currentLocalTime->tm_mon + 1;
	int local_day = currentLocalTime->tm_mday;
	//
	if (y > local_year) return (false);
	else if (y == local_year)
	{
		if (m > local_month) return (false);
		else if ((m == local_month) && (d > local_day)) return (false);
	}
	//
	if (m < 1 || m > 12) return (false);
	if (d < 1 || d > month_days[m - 1]) return (false);
	if (!isLeapYear(y) && m == 2 && d == 29) return (false);
	//
	return true;
}

std::vector< std::vector<double> >
read_data(std::string file_path = DATABASE_PATH, char delim = ',')
{
	std::map<int, double> mp;

	std::vector< std::vector<double> > data;
	std::ifstream fin (file_path.c_str());
	//
	if (fin.fail()) throw ErrorExp(file_path + " " + read_data_err[3]);
	//
	std::string line;
	std::getline(fin, line); // skip the header line
	//
	while (std::getline(fin, line))
	{
		data.push_back(std::vector<double>(5, 0));
		//
		std::vector<std::string> line_parts = split(line, delim);
		//
		if (line_parts.size() != 2)
		{
			data.back()[4] = 4;
			continue;
		}
		//
		std::vector<std::string> date_parts = split(line_parts.front(), '-');
		if (date_parts.size() != 3)
		{
			data.back()[4] = 4;
			continue;
		}
		//
		bool valid_date = true;
		for (size_t i = 0; i < 3; i++)
		{
			data.back()[i] = to_number(date_parts[i]);
			if (data.back()[i] == -1)
			{
				valid_date &= false;
				break;
			}
		}
		if (!valid_date || !isValidDate(data.back()[0], data.back()[1], data.back()[2]))
		{
			data.back()[4] = 1;
			continue;
		}
		//
		std::string exchange_rate = trim(line_parts[1]);
		if (exchange_rate.empty())
		{
			data.back()[4] = 2;
			continue;
		}
		bool valid_exrate = true, dot = false;
		for (size_t i = 0; i < exchange_rate.size(); i++)
		{
			if (!std::isdigit(exchange_rate[i]) && !(!dot && exchange_rate[i] == '.'))
			{
				valid_exrate &= false;
				break;
			}
			dot |= (exchange_rate[i] == '.');
		}
		if (!valid_exrate || (dot && exchange_rate.size() == 1))
		{
			data.back()[4] = 2;
			continue;
		}
		std::stringstream ss(exchange_rate);
		ss >> data.back()[3];
	}
	//
	fin.close();
	return (data);
}

int main(int ac, char **av)
{
	std::vector< std::vector<double> > db;
	//
	try
	{
		db = read_data();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	//
	for (size_t i = 0; i < db.size(); i++)
		if (db[i].back())
		{
			std::cout << "Data-Base-Err:: " << read_data_err[static_cast<int>(db[i].back())] << std::endl;
			return (0);
		}
	//
	return (0);
}
